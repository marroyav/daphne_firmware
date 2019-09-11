#!/usr/bin/env python3

import argparse
import os
from litex.soc.integration.builder import Builder
from soc_linux import SoCLinux

kB = 1024

# Board definition----------------------------------------------------------------------------------

class Board:
    def __init__(self, soc_cls, soc_capabilities):
        self.soc_cls = soc_cls
        self.soc_capabilities = soc_capabilities

    def load(self):
        raise NotImplementedError

    def flash(self):
        raise NotImplementedError



# Daphne support --------------------------------------------------------------------------------

class Daphne(Board):
    def __init__(self):
        from litex_boards.targets import nexys_video
        Board.__init__(self, nexys_video.EthernetSoC, "serial+framebuffer")

    def load(self):
        from litex.build.xilinx import VivadoProgrammer
        prog = VivadoProgrammer()
        prog.load_bitstream("build/daphne/gateware/top.bit")



# Main ---------------------------------------------------------------------------------------------

supported_boards = {
    "daphne":  Daphne,
}

def main():
    description = "Linux on LiteX-VexRiscv\n\n"
    description += "Available boards:\n"
    for name in supported_boards.keys():
        description += "- " + name + "\n"
    parser = argparse.ArgumentParser(description=description, formatter_class=argparse.RawTextHelpFormatter)
    parser.add_argument("--board", required=True, help="FPGA board")
    parser.add_argument("--build", action="store_true", help="build bitstream")
    parser.add_argument("--load", action="store_true", help="load bitstream (to SRAM)")
    parser.add_argument("--flash", action="store_true", help="flash bitstream/images (to SPI Flash)")
    parser.add_argument("--local-ip", default="192.168.1.50", help="local IP address")
    parser.add_argument("--remote-ip", default="192.168.1.100", help="remote IP address of TFTP server")
    parser.add_argument("--spi-bpw", type=int, default=8, help="Bits per word for SPI controller")
    parser.add_argument("--spi-sck-freq", type=int, default=1e6, help="SPI clock frequency")
    args = parser.parse_args()

    if args.board == "all":
        board_names = list(supported_boards.keys())
    else:
        board_names = [args.board]
    for board_name in board_names:
        board = supported_boards[board_name]()
        soc_kwargs = {}
        if board_name in ["versa_ecp5", "ulx3s"]:
            soc_kwargs["toolchain"] = "trellis"
            soc_kwargs["cpu_variant"] = "linux+no-dsp"
        soc = SoCLinux(board.soc_cls, **soc_kwargs)
        if "spiflash" in board.soc_capabilities:
            soc.add_spi_flash()
            soc.add_constant("SPIFLASH_PAGE_SIZE", board.SPIFLASH_PAGE_SIZE)
            soc.add_constant("SPIFLASH_SECTOR_SIZE", board.SPIFLASH_SECTOR_SIZE)
        if "ethernet" in board.soc_capabilities:
            soc.configure_ethernet(local_ip=args.local_ip, remote_ip=args.remote_ip)
        if "gpio" in board.soc_capabilities:
            soc.add_gpio()
        if "spi" in board.soc_capabilities:
            soc.add_spi(args.spi_bpw, args.spi_sck_freq)
        if "i2c" in board.soc_capabilities:
            soc.add_i2c()
        if "xadc" in board.soc_capabilities:
            soc.add_xadc()
        if "framebuffer" in board.soc_capabilities:
            soc.add_framebuffer()
        soc.configure_boot()

        build_dir = os.path.join("build", board_name)
        if args.build:
            builder = Builder(soc, output_dir=build_dir,
                csr_json=os.path.join(build_dir, "csr.json"))
        else:
            builder = Builder(soc, output_dir="build/" + board_name,
                compile_software=False, compile_gateware=False,
                csr_json=os.path.join(build_dir, "csr.json"))
        builder.build()

        soc.generate_dts(board_name)
        soc.compile_dts(board_name)

        if args.load:
            board.load()

        if args.flash:
            board.flash()

if __name__ == "__main__":
    main()