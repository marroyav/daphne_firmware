# DAPHnE Firmware
firmware for the DAPHnE Board that digitizes signals from ARAPUCAS in the far detector at DUNE experiment in FERMILAB

> **Note:** Tested on Debian 10

## Intro:
In this repository, we experiment running dedicated digital modules with a bare-bones [VexRiscv](https://github.com/SpinalHDL/VexRiscv) CPU, a 32-bits Linux Capable RISC-V CPU written in Spinal HDL. The Firmware is created around the VexRiscv CPU using LiteX as the SoC builder and special cores written in Migen Python DSL (LiteADS, LiteDRAM, LiteEth).

This project demonstrates **how high level HDLs (Spinal HDL, Migen) enable new possibilities and complement each other**. Results shown here are the results of a productive collaboration between open-source communities.


## Demo:
[![asciicast](https://asciinema.org/a/tvvAQPzH29IsEEdmTOUTLEKeF.svg)](https://asciinema.org/a/tvvAQPzH29IsEEdmTOUTLEKeF)


## Main Scheme
![alt text](https://github.com/matheos/daphne_firmware/blob/master/daphne_scheme)

## Installing LiteX
```sh
$ wget https://raw.githubusercontent.com/enjoy-digital/litex/master/litex_setup.py
$ chmod +x litex_setup.py
$ sudo ./litex_setup.py init install
```
## Installing a RISC-V toolchain
```sh
$ wget https://static.dev.sifive.com/dev-tools/riscv64-unknown-elf-gcc-8.1.0-2019.01.0-x86_64-linux-ubuntu14.tar.gz
$ tar -xvf riscv64-unknown-elf-gcc-8.1.0-2019.01.0-x86_64-linux-ubuntu14.tar.gz
$ export PATH=$PATH:$PWD/riscv64-unknown-elf-gcc-8.1.0-2019.01.0-x86_64-linux-ubuntu14/bin/
```
## Installing Verilator (only needed for simulation)
```sh
$ sudo apt install verilator
$ sudo apt install libevent-dev libjson-c-dev
```
## Installing OpenOCD (only needed for hardware test)
```sh
$ sudo apt install libtool automake pkg-config libusb-1.0-0-dev
$ git clone https://github.com/ntfreak/openocd.git
$ cd openocd
$ ./bootstrap
$ ./configure --enable-ftdi
$ make
$ sudo make install
```

## Running the LiteX simulation
```sh
$ ./sim.py
```
You should see Linux booting and be able to interact with it:
```
        __   _ __      _  __
       / /  (_) /____ | |/_/
      / /__/ / __/ -_)>  <
     /____/_/\__/\__/_/|_|

 (c) Copyright 2012-2019 Enjoy-Digital
 (c) Copyright 2012-2015 M-Labs Ltd

 BIOS built on May  2 2019 18:58:54
 BIOS CRC passed (97ea247b)

--============ SoC info ================--
CPU:       VexRiscv @ 1MHz
ROM:       32KB
SRAM:      4KB
MAIN-RAM:  131072KB

--========= Peripherals init ===========--

--========== Boot sequence =============--
Booting from serial...
Press Q or ESC to abort boot completely.
sL5DdSMmkekro
Timeout
Executing booted program at 0x20000000
--============= Liftoff! ===============--
VexRiscv Machine Mode software built May  3 2019 19:33:43
--========== Booting Linux =============--
[    0.000000] No DTB passed to the kernel
[    0.000000] Linux version 5.0.9 (florent@lab) (gcc version 8.3.0 (Buildroot 2019.05-git-00938-g75f9fcd0c9)) #1 Thu May 2 17:43:30 CEST 2019
[    0.000000] Initial ramdisk at: 0x(ptrval) (8388608 bytes)
[    0.000000] Zone ranges:
[    0.000000]   Normal   [mem 0x00000000c0000000-0x00000000c7ffffff]
[    0.000000] Movable zone start for each node
[    0.000000] Early memory node ranges
[    0.000000]   node   0: [mem 0x00000000c0000000-0x00000000c7ffffff]
[    0.000000] Initmem setup node 0 [mem 0x00000000c0000000-0x00000000c7ffffff]
[    0.000000] elf_hwcap is 0x1100
[    0.000000] Built 1 zonelists, mobility grouping on.  Total pages: 32512
[    0.000000] Kernel command line: mem=128M@0x40000000 rootwait console=hvc0 root=/dev/ram0 init=/sbin/init swiotlb=32
[    0.000000] Dentry cache hash table entries: 16384 (order: 4, 65536 bytes)
[    0.000000] Inode-cache hash table entries: 8192 (order: 3, 32768 bytes)
[    0.000000] Sorting __ex_table...
[    0.000000] Memory: 119052K/131072K available (1957K kernel code, 92K rwdata, 317K rodata, 104K init, 184K bss, 12020K reserved, 0K cma-reserved)
[    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=1, Nodes=1
[    0.000000] NR_IRQS: 0, nr_irqs: 0, preallocated irqs: 0
[    0.000000] clocksource: riscv_clocksource: mask: 0xffffffffffffffff max_cycles: 0x114c1bade8, max_idle_ns: 440795203839 ns
[    0.000155] sched_clock: 64 bits at 75MHz, resolution 13ns, wraps every 2199023255546ns
[    0.001515] Console: colour dummy device 80x25
[    0.008297] printk: console [hvc0] enabled
[    0.009219] Calibrating delay loop (skipped), value calculated using timer frequency.. 150.00 BogoMIPS (lpj=300000)
[    0.009919] pid_max: default: 32768 minimum: 301
[    0.016255] Mount-cache hash table entries: 1024 (order: 0, 4096 bytes)
[    0.016802] Mountpoint-cache hash table entries: 1024 (order: 0, 4096 bytes)
[    0.044297] devtmpfs: initialized
[    0.061343] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.061981] futex hash table entries: 256 (order: -1, 3072 bytes)
[    0.117611] clocksource: Switched to clocksource riscv_clocksource
[    0.251970] Unpacking initramfs...
[    2.005474] workingset: timestamp_bits=30 max_order=15 bucket_order=0
[    2.178440] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 254)
[    2.178909] io scheduler mq-deadline registered
[    2.179271] io scheduler kyber registered
[    3.031140] random: get_random_bytes called from init_oops_id+0x4c/0x60 with crng_init=0
[    3.043743] Freeing unused kernel memory: 104K
[    3.044070] This architecture does not have kernel memory protection.
[    3.044472] Run /init as init process
mount: mounting tmpfs on /dev/shm failed: Invalid argument
mount: mounting tmpfs on /tmp failed: Invalid argument
mount: mounting tmpfs on /run failed: Invalid argument
Starting syslogd: OK
Starting klogd: OK
Initializing random number generator... [    4.374589] random: dd: uninitialized urandom read (512 bytes read)
done.
Starting network: ip: socket: Function not implemented
ip: socket: Function not implemented
FAIL


Welcome to Buildroot
buildroot login: root
login[48]: root login on 'hvc0'
# help
Built-in commands:
------------------
	. : [ [[ alias bg break cd chdir command continue echo eval exec
	exit export false fg getopts hash help history jobs kill let
	local printf pwd read readonly return set shift source test times
	trap true type ulimit umask unalias unset wait
#
#
```

## Running on hardware
### Build the FPGA bitstream (optional)
**The prebuilt bitstreams for the supported boards are provided**, so you can just use them for quick testing, if you want to rebuild the bitstreams you will need to install the toolchain for your FPGA:

| FPGA family       |      Toolchain        |
|-------------------|-----------------------|
| Xilinx Ultrascale |      Vivado           |
| Xilinx 7-Series   |      Vivado           |
| Xilinx Spartan6   |        ISE            |
| Lattice ECP5      | Yosys/Trellis/Nextpnr |
| Altera Cyclone4   |    Quartus Prime      |

Once installed, build the bitstream with:
```sh
$ ./make.py --board=XXYY --build
```

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
