# DAPHnE Firmware
firmware for the DAPHnE Board that digitizes signals from ARAPUCAS in the far detector at DUNE experiment in FERMILAB

> **Note:** Tested on Debian 10

## Intro:
In this repository, we experiment running dedicated digital modules with a bare-bones [VexRiscv](https://github.com/SpinalHDL/VexRiscv) CPU, a 32-bits Linux Capable RISC-V CPU written in Spinal HDL. The Firmware is created around the VexRiscv CPU using LiteX as the SoC builder and special cores written in Migen Python DSL (LiteADS, LiteDRAM, LiteEth).

This project demonstrates **how high level HDLs (Spinal HDL, Migen) enable new possibilities and complement each other**. Results shown here are the results of a productive collaboration between open-source communities.


## Demo:
[![asciicast](https://asciinema.org/a/tvvAQPzH29IsEEdmTOUTLEKeF.svg)](https://asciinema.org/a/tvvAQPzH29IsEEdmTOUTLEKeF)


## Main Scheme
![Scheme](://github.com/matheos/daphne_firmware/blob/master/daphne.jpg)


### Load the FPGA bitstream
To load the bitstream to you board, run:
```sh
$ ./make.py --board=XXYY --load
```
> **Note**: If you are using a Versa board, you will need to change J50 to bypass the iSPclock. Re-arrange the jumpers to connect pins 1-2 and 3-5 (leaving one jumper spare). See p19 of the Versa Board user guide.
### Load the Linux images over Serial
All the boards support Serial loading of the Linux images and this is the only way to load them when the board does not have others communications interfaces or storage capability.

To load the Linux images over Serial, use the [lxterm](https://github.com/enjoy-digital/litex/blob/master/litex/tools/litex_term.py) terminal/tool provided by LiteX and run:
```sh
$ lxterm --images=images.json /dev/ttyUSBX --speed=2e6 --no-crc
```
The images should load and you should see Linux booting :)

> **Note**: lxterm is automatically installed with LiteX.

> **Note:** since on some boards JTAG/Serial is shared, when you will run lxterm after loading the board, the BIOS serialboot will already have timed out. You will need to press Enter, see if you have the BIOS prompt and type *reboot*.

Since loading over Serial is working for all boards, **this is the recommended way to do initial tests** even if your board has more capabilities.

### Load the Linux images over TFTP
For boards that have Ethernet,  the Linux images can be loaded over TFTP. You need to copy the files in *buildroot* directory and *emulator/emulator.bin* to your TFTP root directory. The default Local IP/Remote IP are 192.168.1.50/192.168.1.100 but you can change it with the *--local-ip* and *--remote-ip* arguments.

Once the bistream is loaded, the board you try to retrieve the files on the TFTP server. If not successful or if the boot already timed out when you see the BIOS prompt, you can retry with the *netboot* command.

The images should load and you should see Linux booting :)

### Load the Linux images to SPI-Flash
For boards that have SPI Flash (and enough space on it to store the images), the Linux images can be written to
SPI Flash and directly loaded during boot.

To flash the bitstream and linux images to you board, run:
```sh
$ ./make.py --board=XXYY --flash
```

When done, the FPGA of the board should automatically reload itself from the SPI-Flash, start the BIOS, copy
the Linux images to RAM and boot :)

## Generating the Linux binaries (optional)
```sh
$ git clone http://github.com/buildroot/buildroot
$ cd buildroot
$ make BR2_EXTERNAL=../linux-on-litex-vexriscv/buildroot/ litex_vexriscv_defconfig
$ make
```
The binaries are located in *output/images/*.

## Generating the VexRiscv Linux variant (optional)
Install VexRiscv requirements: https://github.com/enjoy-digital/VexRiscv-verilog#requirements

Clone VexRiscv repository and generate the Linux variant:
```sh
$ git clone http://github.com/enjoy-digital/Vexriscv-verilog --recursive
$ sbt "runMain vexriscv.GenCoreDefault --externalInterruptArray=true --csrPluginConfig=linux-minimal"
```
The Linux variant is the *VexRiscv.v* file.

## Udev rules (optional)
Don't needed but can make loading/flashing bistreams easier:
```sh
$ git clone https://github.com/litex-hub/litex-buildenv-udev
$ cd litex-buildenv-udev
$ make install
$ make reload
```
