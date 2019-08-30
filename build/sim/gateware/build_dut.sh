rm -rf obj_dir/
make -C . -f /home/mam/fpga/linux/litex/litex/build/sim/core/Makefile CC_SRCS="--cc /home/mam/fpga/linux/linux-on-litex-vexriscv/build/sim/gateware/dut.v --cc /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v "   OPT_LEVEL=O3
mkdir -p modules && cp obj_dir/*.so modules
