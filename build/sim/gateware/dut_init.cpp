#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vdut.h"
#include <verilated.h>
#include "dut_header.h"

extern "C" void litex_sim_init_tracer(void *vdut, long start, long end);
extern "C" void litex_sim_tracer_dump();

extern "C" void litex_sim_dump()
{
}

extern "C" void litex_sim_init(void **out)
{
    Vdut *dut;

    dut = new Vdut;

    litex_sim_init_tracer(dut, 0,-1);

    sys_clk[0].signal = &dut->sys_clk;
    litex_sim_register_pads(sys_clk, (char*)"sys_clk", 0);

    serial[0].signal = &dut->serial_source_valid;
    serial[1].signal = &dut->serial_source_ready;
    serial[2].signal = &dut->serial_source_data;
    serial[3].signal = &dut->serial_sink_valid;
    serial[4].signal = &dut->serial_sink_ready;
    serial[5].signal = &dut->serial_sink_data;
    litex_sim_register_pads(serial, (char*)"serial", 0);

    *out=dut;
}
