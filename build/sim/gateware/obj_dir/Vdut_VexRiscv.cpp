// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut_VexRiscv.h"
#include "Vdut__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIGW(Vdut_VexRiscv::__Vtable1___PVT__decode_SRC1_CTRL_string[4],95,0,3);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable7___PVT__decode_SHIFT_CTRL_string[4],71,0,3);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable11___PVT__memory_SHIFT_CTRL_string[4],71,0,3);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable13___PVT__execute_SHIFT_CTRL_string[4],71,0,3);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable15___PVT__execute_SRC1_CTRL_string[4],95,0,3);
VL_ST_SIG64(Vdut_VexRiscv::__Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[8],47,0);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[4],71,0,3);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[4],71,0,3);
VL_ST_SIGW(Vdut_VexRiscv::__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string[4],95,0,3);
VL_ST_SIG8(Vdut_VexRiscv::__Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[8],0,0);

//--------------------

VL_CTOR_IMP(Vdut_VexRiscv) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vdut_VexRiscv::__Vconfigure(Vdut__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdut_VexRiscv::~Vdut_VexRiscv() {
}

//--------------------
// Internal Methods

void Vdut_VexRiscv::_initial__TOP__dut__VexRiscv__1(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdut_VexRiscv::_initial__TOP__dut__VexRiscv__1\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:2412
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcycle = VL_ULL(0);
    // INITIAL at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:2413
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_minstret = VL_ULL(0);
}

void Vdut_VexRiscv::_settle__TOP__dut__VexRiscv__2(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdut_VexRiscv::_settle__TOP__dut__VexRiscv__2\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_12_ 
	= (1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		    >> 7U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:226
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_36_ 
	= (3U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_195_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_196_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_197_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3688
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx11 = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx11][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx11][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx11][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3742
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx15 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx15][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx15][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx15][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3933
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx23 = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx23][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx23][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx23][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3986
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx24 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx24][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx24][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx24][2U];
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_390_ = (
						   (1U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2)
						    ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1
						    : VL_ULL(0));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_201_ = (
						   ((QData)((IData)(
								    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U])) 
						    << 1U) 
						   | (QData)((IData)(
								     (1U 
								      & (IData)(
										(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1 
										>> 0x1fU))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_) 
						   == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5457
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffff7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x100000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x200000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x400000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x800000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x1000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x2000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x4000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x8000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x10000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x20000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x40000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x80000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5688
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 3U;
    if ((8U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
	if ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SPF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LPF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IPF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	} else {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_ES) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_EU) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	}
    } else {
	if ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAM) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAM) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	} else {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code)))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_II) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAM) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_208_ = (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_207_ 
						   & vlSymsp->TOP__dut__VexRiscv.__PVT__externalInterruptArray_regNext);
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_210_ = (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_209_ 
						   & vlSymsp->TOP__dut__VexRiscv.__PVT__externalInterruptArray_regNext);
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_INPUT));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:924
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError 
	= ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)));
    vlSymsp->TOP__dut__VexRiscv.lastStagePc = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC;
    vlSymsp->TOP__dut__VexRiscv.lastStageIsValid = vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:186
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_317_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE) 
						    & (1U 
						       == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) 
						   | (1U 
						      > (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_321_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) 
						   | (3U 
						      > (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
	   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap) 
	      << 2U));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5822
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause 
	= vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_ 
	= ((vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
	    + ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu))
	        ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)) 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((4U 
							& (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu))
					  ? 1U : 0U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3706
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx13 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx13][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx13][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx13][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3924
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx22 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx22][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx22][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx22][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:201
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_) {
	if ((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:873
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultReg;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5118
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode;
    if (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv)) 
	 & (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_272_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4807
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (1U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1030
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	    ? vlSymsp->TOP__dut__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext
	    : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0);
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
	    = (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved)));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_18_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_20_ 
	= (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)) 
	    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_colisions) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits) 
	   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr) 
	      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4822
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.lastStageInstruction 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_address 
	= (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		    >> 7U));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4472
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_) 
	  | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_)) 
	 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3853
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx19 = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_;
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1___05Fstring 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx19];
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_ = (
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
						    >> 0x1fU) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4563
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_274_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5210
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		  >> 2U)))) {
	if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
	    if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address 
		    = ((0xffc00000U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN1) 
				       << 0x16U)) | 
		       (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN0) 
			 << 0xcU) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0) 
				     << 2U)));
	    }
	} else {
	    if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address 
		    = ((vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_ppn 
			<< 0xcU) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1) 
				    << 2U));
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
	    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_DO)) 
	   & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC 
	      >> 1U));
    vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
		   << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_298_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4797
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_MUL));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5190
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx25 = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_;
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx25];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6244
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_ = (
						   (VL_ULL(0xffffffff) 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_) 
						   | ((QData)((IData)(
								      ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED) 
								       & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1 
									  >> 0x1fU)))) 
						      << 0x20U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_ = (
						   (VL_ULL(0x100000000) 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_) 
						   | (IData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_203_ = (
						   (0x2000U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION)
						    ? 
						   vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U]
						    : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_275_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_303_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (3U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_283_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4598
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_271_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_300_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5804
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done 
	= ((0U == (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
		    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
			       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid)))) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5));
    if ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
		 << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
			    << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_ = (0U 
						   == 
						   ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack)) 
						     << 2U) 
						    | ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory)) 
							<< 1U) 
						       | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
							  | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5589
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x3ffU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x5ffU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x6ffU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x77fU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7bfU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7dfU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7efU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7f7U 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7fbU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7fdU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7feU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5604
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0x7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xf7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5628
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x3ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x5ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x6ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x77fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7bfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7dfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7efffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7f7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7feffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5324
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
						    ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1
						    : 
						   ((2U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
						     ? 4U
						     : 
						    ((1U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
						      ? 
						     (0xfffff000U 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
						      : 
						     (0x1fU 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5990
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
	 & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))) {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
	     < (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1cU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5868
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if ((0x80000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	if ((0x40000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((0x1000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    } else {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    } else {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    } else {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					} else {
					    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
	 < (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1cU)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid)) 
	       | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5343
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0x7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xf7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5367
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0x7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xf7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_data 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)
	    ? 0U : vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_11_);
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_85_ = (0U 
						  != 
						  (((0x17U 
						     == 
						     (0x5fU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
						    << 0x18U) 
						   | (((0x6fU 
							== 
							(0x7fU 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
						       << 0x17U) 
						      | (((3U 
							   == 
							   (0x106fU 
							    & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
							  << 0x16U) 
							 | (((0x1073U 
							      == 
							      (0x107fU 
							       & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
							     << 0x15U) 
							    | (((0x2073U 
								 == 
								 (0x207fU 
								  & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
								<< 0x14U) 
							       | (((0x4063U 
								    == 
								    (0x407fU 
								     & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
								   << 0x13U) 
								  | (((0x2013U 
								       == 
								       (0x207fU 
									& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
								      << 0x12U) 
								     | (((0x23U 
									  == 
									  (0x603fU 
									   & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									 << 0x11U) 
									| (((3U 
									     == 
									     (0x207fU 
									      & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									    << 0x10U) 
									   | (((3U 
										== 
										(0x505fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									       << 0xfU) 
									      | (((0x63U 
										== 
										(0x707bU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xeU) 
										| (((0xfU 
										== 
										(0x607fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xdU) 
										| (((0x202fU 
										== 
										(0x1800707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xcU) 
										| (((0x33U 
										== 
										(0xfc00007fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xbU) 
										| (((0x800202fU 
										== 
										(0xe800707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xaU) 
										| (((0x1013U 
										== 
										(0xfc00305fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 9U) 
										| (((0x500fU 
										== 
										(0x1f0707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 8U) 
										| (((0x5013U 
										== 
										(0xbc00707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 7U) 
										| (((0x5033U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 6U) 
										| (((0x33U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x1000202fU 
										== 
										(0xf9f0707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x12000073U 
										== 
										(0xfe007fffU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x10200073U 
										== 
										(0xdfffffffU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x10500073U 
										== vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
										<< 1U) 
										| (0x73U 
										== vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_177_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_178_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_179_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_180_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ = (
						   ((QData)((IData)(
								    (8U 
								     == 
								     (0x10000008U 
								      & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
						    << 0x22U) 
						   | (((QData)((IData)(
								       (0U 
									!= 
									(((0x20U 
									   == 
									   (0x34U 
									    & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									  << 3U) 
									 | (((0x20U 
									      == 
									      (0x64U 
									       & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									     << 2U) 
									    | (((0x8000020U 
										== 
										(0x8000070U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
									       | (0x20U 
										== 
										(0x10000070U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))) 
						       << 0x21U) 
						      | (((QData)((IData)(
									  (0U 
									   != 
									   (((0x40U 
									      == 
									      (0x44U 
									       & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									     << 2U) 
									    | (((0x2010U 
										== 
										(0x2014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
									       | (0x40000030U 
										== 
										(0x40000034U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
							  << 0x20U) 
							 | (QData)((IData)(
									   (((0U 
									      != 
									      (((0U 
										== 
										(0x44U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
									       | (((0U 
										== 
										(0x18U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x2000U 
										== 
										(0x6004U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x1000U 
										== 
										(0x5004U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x2000U 
										== 
										(0x2050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
									     << 0x1fU) 
									    | (((0U 
										!= 
										(((0x48U 
										== 
										(0x48U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x4050U 
										== 
										(0x4050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (4U 
										== 
										(0x2014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 0x1eU) 
									       | (((0U 
										!= 
										(((0x4050U 
										== 
										(0x4050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (4U 
										== 
										(0x4cU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1dU) 
										| (((0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x70U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1cU) 
										| (((0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0U 
										== 
										(0x20U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1bU) 
										| (((0U 
										!= 
										(((0x4000U 
										== 
										(0x5000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1000U 
										== 
										(0x7000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1aU) 
										| (((0x2000030U 
										== 
										(0x2004074U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x19U) 
										| (((0U 
										!= 
										(((0x48U 
										== 
										(0x48U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (4U 
										== 
										(0x1cU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x18U) 
										| (((0x40U 
										== 
										(0x58U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x17U) 
										| (((0x24U 
										== 
										(0x64U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x16U) 
										| (((0U 
										!= 
										(((0x2000U 
										== 
										(0x2050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0U 
										== 
										(0x58U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x15U) 
										| (((0U 
										!= 
										(((0x1050U 
										== 
										(0x1050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x2050U 
										== 
										(0x2050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x14U) 
										| (((0x1000U 
										== 
										(0x1000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x13U) 
										| (((0x2000U 
										== 
										(0x3000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x12U) 
										| (((0x2000050U 
										== 
										(0x2003050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x11U) 
										| (((0U 
										!= 
										(((0x2000U 
										== 
										(0x2010U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1000U 
										== 
										(0x5000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x10U) 
										| (((0U 
										!= 
										(((0x2040U 
										== 
										(0x2040U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x1040U 
										== 
										(0x1040U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x40U 
										== 
										(0x50U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x40U 
										== 
										(0x2400040U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0U 
										== 
										(0x38U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x10002008U 
										== 
										(0x18002008U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))) 
										<< 0xfU) 
										| (((0x10000008U 
										== 
										(0x10000008U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xeU) 
										| (((0U 
										!= 
										(((0x4000U 
										== 
										(0x5000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x2000U 
										== 
										(0x3000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1000U 
										== 
										(0x7000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 0xdU) 
										| (((0U 
										!= 
										(((4U 
										== 
										(0xcU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x2010U 
										== 
										(0x2030U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x10U 
										== 
										(0x1030U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x20U 
										== 
										(0x2003020U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x2020U 
										== 
										(0x2002068U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
										<< 0xcU) 
										| (((0x2004020U 
										== 
										(0x2004064U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xbU) 
										| (((0x1008U 
										== 
										(0x5048U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xaU) 
										| (((0x50U 
										== 
										(0x2203050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 9U) 
										| (((0x50U 
										== 
										(0x2403050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 8U) 
										| (((0x10U 
										== 
										(0x10U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 7U) 
										| (((0U 
										!= 
										(((0x8000020U 
										== 
										(0x8000020U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x20U 
										== 
										(0x10000020U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x28U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 6U) 
										| (((0x4010U 
										== 
										(0x4014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x2010U 
										== 
										(0x6014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0U 
										!= 
										(((0x5010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x5020U 
										== 
										(0x2007064U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 3U) 
										| (((0U 
										!= 
										(((0x40001010U 
										== 
										(0x40003054U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x1010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1010U 
										== 
										(0x2007054U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 2U) 
										| (((0U 
										!= 
										(((0x48U 
										== 
										(0x48U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 6U) 
										| (((0x1010U 
										== 
										(0x1010U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x2010U 
										== 
										(0x2010U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x2008U 
										== 
										(0x2008U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x10U 
										== 
										(0x50U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((4U 
										== 
										(0xcU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0U 
										== 
										(0x28U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))) 
										<< 1U) 
										| (0x4008U 
										== 
										(0x4048U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_215_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_) 
						   & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_dbus_ack));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_389_ = (VL_ULL(0x3ffffffff) 
						   & ((((QData)((IData)(
									(1U 
									 & (IData)(
										(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_390_ 
										>> 0x20U))))) 
							<< 0x21U) 
						       | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_390_) 
						      + 
						      (((QData)((IData)(
									(1U 
									 & vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[2U]))) 
							<< 0x21U) 
						       | (VL_ULL(0x1ffffffff) 
							  & (((QData)((IData)(
									      vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[2U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U])))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_318_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_322_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_319_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_323_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_202_ = (VL_ULL(0x1ffffffff) 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_201_ 
						      - (QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5815
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege 
	    = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
		< (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped))
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped)
	        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6030
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData = 0U;
    if ((0x80000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	if ((0x40000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_208_;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((0x1000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
						    = 
						    ((0xfffffffcU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
						     | ((0x100000U 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
							 ? 3U
							 : 2U));
					    } else {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							(1U 
							 | vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData);
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_210_;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							(0x1000U 
							 | (0xffffe000U 
							    & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							(0x2000000U 
							 | (0xfc0fffffU 
							    & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_207_;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_209_;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
							    << 0xbU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
							    << 7U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
							    << 3U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP) 
							    << 1U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR) 
							    << 9U));
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtval;
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_interrupt) 
							    << 0x1fU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff0U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode));
						}
					    } else {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
						    = 
						    ((0x100000U 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
						      ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc
						      : vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mscratch);
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE) 
							    << 0xbU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE) 
							    << 7U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE) 
							    << 3U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE) 
							    << 9U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE) 
							    << 1U));
						}
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfff7ffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
							    << 0x13U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffbffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum) 
							    << 0x12U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffdffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv) 
							    << 0x11U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffe7ffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP) 
							    << 0xbU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE) 
							    << 7U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) 
							    << 3U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffeffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP) 
							    << 8U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE) 
							    << 1U));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode) 
							    << 0x1fU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfff00000U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_ppn);
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP) 
							    << 1U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR) 
							    << 9U));
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stval;
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_interrupt) 
							    << 0x1fU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff0U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_exceptionCode));
						}
					    } else {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
						    = 
						    ((0x100000U 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
						      ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc
						      : vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sscratch);
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((3U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_base 
							    << 2U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffcU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_mode));
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE) 
							    << 9U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE) 
							    << 1U));
						}
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfff7ffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
							    << 0x13U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffbffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum) 
							    << 0x12U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffdffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv) 
							    << 0x11U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffeffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP) 
							    << 8U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE) 
							    << 1U));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
						   | (0U 
						      != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_281_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:193
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
	       | (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		     >> 7U))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_13_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
	   & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
		 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5019
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup 
	= ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode));
    if (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv)) 
	 & (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) {
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv)) 
		   | (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP))))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1042
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_leaf 
	= (1U & ((vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		  >> 1U) | (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			    >> 3U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4875
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data;
    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	    = ((0xffffff00U & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
	       | (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			   >> 8U)));
    } else {
	if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		= ((0xffff0000U & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		   | (0xffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x10U)));
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		    = ((0xffffff00U & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		       | (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 0x18U)));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1002
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:987
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? 0U : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)
			 ? 0U : 7U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:972
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? (0xfffffffcU & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
	        : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)
		    ? (0xfffffffcU & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
		    : (0xffffffe0U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:740
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
				 >> 2U));
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
	    = ((0x3f8U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			  >> 2U)) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:754
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:726
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:905
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_20_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_refilling))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
	   & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception) 
	       | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite)) 
		  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr))) 
	      | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowRead)) 
		 & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)) 
		    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
	   & (((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_size)) 
	       & (0U != (3U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress))) 
	      | ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_size)) 
		 & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:768
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = 0xfU;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1017
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr = 0U;
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_205_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_MUL) 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_)) 
						   | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_DIV) 
						       & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1 
							  >> 0x1fU)) 
						      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3) 
		   << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2) 
			      << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1) 
					 << 1U) | (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid) 
						    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1) 
						       == 
						       (0x3ffU 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
							   >> 0x16U)))) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage) 
						      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0) 
							 == 
							 (0x3ffU 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
							     >> 0xcU)))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_ = (
						   (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2) 
						     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3)) 
						    << 1U) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4271
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_93_ = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_93_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4397
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6180
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	if ((0x20U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6209
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4371
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	if ((0x20U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself = 1U;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4159
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) {
	if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_;
	} else {
	    if (((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL)) 
		 | (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
	    = ((0U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
			     >> 0xcU))) ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U]
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U]);
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_result;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5860
    vlSymsp->TOP__dut__VexRiscv.execute_CsrPlugin_inWfi = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_283_) {
	vlSymsp->TOP__dut__VexRiscv.execute_CsrPlugin_inWfi = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interruptJump 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4731
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_231_ = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_WR;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_231_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4773
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_LRSC) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_ = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4785
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_235_ = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_AMO;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_235_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4967
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4754
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_232_ = (
						   (0U 
						    == 
						    (3U 
						     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							>> 0xcU)))
						    ? 
						   ((0xff000000U 
						     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							<< 0x18U)) 
						    | ((0xff0000U 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							   << 0x10U)) 
						       | ((0xff00U 
							   & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							      << 8U)) 
							  | (0xffU 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2))))
						    : 
						   ((1U 
						     == 
						     (3U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)))
						     ? 
						    ((0xffff0000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							 << 0x10U)) 
						     | (0xffffU 
							& vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2))
						     : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_232_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4763
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_ = (3U 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						      >> 0xcU));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_ = 2U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5420
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffff7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x100000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x200000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x400000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x800000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x1000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x2000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x4000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x8000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x10000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x20000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x40000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x80000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_302_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess) 
						   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5390
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
						    ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
						     ? 
						    ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ 
						      << 0xcU) 
						     | (0xfffU 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							   >> 0x14U)))
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
						      ? 
						     ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ 
						       << 0xcU) 
						      | ((0xfe0U 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)) 
							 | (0x1fU 
							    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							       >> 7U))))
						      : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3) 
		   << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2) 
			      << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1) 
					 << 1U) | (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid) 
						    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1) 
						       == 
						       (0x3ffU 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
							   >> 0x16U)))) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage) 
						      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0) 
							 == 
							 (0x3ffU 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
							     >> 0xcU)))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_ = (
						   (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2) 
						     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3)) 
						    << 1U) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4207
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID 
	= (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			 >> 1U)));
    if ((0U == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
			 >> 7U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3386
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx1 = (3U 
						& (IData)(
							  (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							   >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable1___PVT__decode_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx1][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable1___PVT__decode_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx1][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable1___PVT__decode_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx1][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3580
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx7 = (3U 
						& (IData)(
							  (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							   >> 2U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable7___PVT__decode_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx7][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable7___PVT__decode_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx7][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable7___PVT__decode_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx7][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5492
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_298_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_177_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_300_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_179_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 1U;
	    }
	}
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			  >> 0x1fU))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5520
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_298_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_178_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_300_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_180_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 1U;
	    }
	}
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			  >> 0x21U))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready 
	= (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_)) 
		 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_215_) 
		    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_) 
		       | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_398_ = (
						   ((QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1)) 
						    << 1U) 
						   | (QData)((IData)(
								     (1U 
								      & (~ (IData)(
										(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_202_ 
										>> 0x20U)))))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5829
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode = 0U;
    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_mode;
    } else {
	if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_mode;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5843
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base = 0U;
    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_base;
    } else {
	if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_base;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_320_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_324_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6154
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData;
    if ((0x344U == (0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			      >> 0x14U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
	    = ((0xfffffdffU & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData) 
	       | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT) 
		  << 9U));
    } else {
	if ((0x144U == (0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x14U)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
		= ((0xfffffdffU & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData) 
		   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT) 
		      << 9U));
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6313
    vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6306
    vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4263
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_281_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1052
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_valueNext 
	= (7U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value) 
		 + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow 
	= ((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_ = (1U 
						   & ((vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
						       >> 7U) 
						      & (~ 
							 (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
							  >> 0xeU))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_ = (1U 
						   & ((vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
						       >> 0xfU) 
						      & (~ 
							 (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
							  >> 0xeU))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4831
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4711
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_ = 1U;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4860
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 7U : 5U);
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 6U : 4U);
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 0xfU : 0xdU);
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception 
	= (1U & (((~ vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data) 
		  | ((~ (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			 >> 1U)) & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				    >> 2U))) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) 
						| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4841
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_ 
	= ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_refilling) 
	     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError)) 
	    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException)) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5071
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_refilling 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_253_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_252_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_249_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_250_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_exception)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_exception)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_exception)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_exception))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_256_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowRead)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowRead)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowRead)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowRead))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_257_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowWrite)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowWrite)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowWrite)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowWrite))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowExecute)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowExecute)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowExecute)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowExecute))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowUser)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowUser)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowUser)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowUser))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_254_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_251_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_superPage)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_superPage)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_superPage))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_255_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_1))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) 
						   | (IData)(vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interruptJump));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
	= ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL))
	    ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_
	    : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6009
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_302_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code = 2U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_303_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code 
	    = ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))
	        ? 8U : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))
			 ? 9U : 0xbU));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5999
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_302_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_303_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq 
	= (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
	   == vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5408
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub 
	= ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
	    + ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	        ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
	        : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)) 
	   + ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	       ? 1U : 0U));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5168
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_refilling 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_264_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_263_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_260_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_261_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_exception)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_exception)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_exception)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_exception))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_267_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowRead)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowRead)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowRead)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowRead))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_268_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowWrite)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowWrite)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowWrite)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowWrite))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowExecute)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowExecute)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowExecute)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowExecute))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowUser)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowUser)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowUser)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowUser))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_265_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_262_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_superPage)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_superPage)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_superPage))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_266_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_1))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_ = (1U 
						   & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)) 
						      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6168
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
	= ((0x2000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
	    ? ((0x1000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
	        ? (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
		   & (~ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_))
	        : (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
		   | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_))
	    : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_);
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						    & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
						       & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
							  | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:675
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:685
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_error;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:692
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
	    = (0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			   >> 0xcU));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:665
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			>> 5U));
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			>> 5U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:655
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4893
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1fU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1eU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1dU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1cU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1bU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1aU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x19U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x18U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x17U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x16U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x15U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x14U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x13U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x12U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x11U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x10U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffff7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xfU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xeU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xdU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xcU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xbU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xaU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 9U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 8U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffff00U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | (0xffU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4922
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1fU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1eU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1dU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1cU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1bU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1aU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x19U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x18U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x17U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x16U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x15U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x14U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x13U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x12U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x11U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x10U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffff0000U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | (0xffffU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4425
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_19_ 
	= (((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_) 
	      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_))) 
	     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_))) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:936
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid 
		= (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent)));
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_18_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
	    }
	} else {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid)))) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
		    }
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_20_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
		}
	    } else {
		if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent)))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:642
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:699
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid)))) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
		    }
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:816
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:832
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt 
	= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    if ((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)
		        ? (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_))
		        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_18_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
	    }
	} else {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)) 
			   | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_))))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid)))) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 1U;
		    }
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_308_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_refilling));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5031
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)
	    ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_255_) 
		<< 0x16U) | ((0x3ff000U & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_251_)
					     ? (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						>> 0xcU)
					     : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_254_)) 
					   << 0xcU)) 
			     | (0xfffU & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA)))
	    : vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4489
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
	    = (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base 
	       << 2U);
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	if ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			  >> 0x1cU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc;
	} else {
	    if ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4479
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4432
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4364
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4722
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less 
	= (1U & (((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
			 >> 0x1fU)) == (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_ 
					      >> 0x1fU)))
		  ? (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub 
		     >> 0x1fU) : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
				   ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_ 
				      >> 0x1fU) : (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						   >> 0x1fU))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_307_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_refilling));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5128
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)
	    ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_266_) 
		<< 0x16U) | ((0x3ff000U & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_262_)
					     ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						>> 0xcU)
					     : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_265_)) 
					   << 0xcU)) 
			     | (0xfffU & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_)))
	    : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4256
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4219
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_ = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_ 
	    = ((0U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			     >> 0xcU))) ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_
	        : ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
				 >> 0xcU))) ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_
		    : vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5789
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4415
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:866
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_19_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:599
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_2_ = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_2_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:592
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_ = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:806
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid) 
	 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr))) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) 
	      | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4407
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
	   | (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
		     << 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed 
	= ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
		    << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext))) 
	   | (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
		     << 2U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed 
	= ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
		    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext) 
			       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext)))) 
	   | (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
		     << 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_mask 
	= (0xfU & (((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_))
		     ? 1U : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_))
			      ? 3U : 0xfU)) << (3U 
						& vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4082
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_ = ((2U 
						   == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
						   ? 
						  ((2U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
						    ? 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
						     ? 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						     | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
						     : 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						     ^ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)))
						   : 
						  ((1U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less)
						    : vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_271_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_)));
    vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_data 
	= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4332
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
    }
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) 
	  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid)) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_283_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_wfiWake)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_271_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
						    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo))) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_leaf) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_ 
	= (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
		 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4386
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5779
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4353
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5769
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4098
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_247_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_172_) {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_173_) 
	     == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
			  >> 0x14U)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_174_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_272_) {
	if (((0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					    >> 0x14U)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_274_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_178_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_275_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_180_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4128
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_246_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_172_) {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_173_) 
	     == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
			  >> 0xfU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_174_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_272_) {
	if (((0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					    >> 0xfU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_274_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_177_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_275_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_179_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4249
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4631
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_281_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5000
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5099
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement = 1U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.lastStageIsFiring = vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring;
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_171_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5285
    vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_159_) {
	vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6189
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6218
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error)) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4278
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_94_ = ((IData)(4U) 
						  + vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_);
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_94_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4644
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_ = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_ = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
		   << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
			      << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) 
					 << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_98_ = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) 
						   << 3U) 
						  | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
						      << 2U) 
						     | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
							 << 1U) 
							| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5012
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_valueNext 
	= (3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value) 
		 + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5111
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_valueNext 
	= (3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value) 
		 + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4199
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_55_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_55_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6198
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_valueNext 
	= (0x3fU & (((0x20U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value)) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement))
		     ? 0U : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value) 
			     + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement))));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_valueNext = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6227
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_valueNext 
	= (0x3fU & (((0x21U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value)) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement))
		     ? 0U : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value) 
			     + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement))));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_valueNext = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:614
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:628
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:621
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_payload = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_payload 
	    = (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
			>> 5U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:635
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload 
	    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
			 >> 2U));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable 
	= (((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
	     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE)) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4664
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4654
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4242
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected 
	= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4518
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_corrected = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_corrected = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_98_) 
						  & (~ 
						     ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_98_) 
						      - (IData)(1U))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_5_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4956
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready 
		    = (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4574
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_ = (
						   (2U 
						    & ((0x7ffffffeU 
							& ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							   >> 1U)) 
						       | (0x3ffffffeU 
							  & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							     >> 2U)))) 
						   | (1U 
						      & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							  >> 1U) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							    >> 3U))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_decodeRemoved)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4532
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
	   + ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc) 
	      << 2U));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	    = ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
	        ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC
	        : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
		    ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
		    : ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
		        ? vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
		        : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_)));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffeU & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffdU & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_220_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
						   & (IData)(
							     (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							      >> 0xaU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_85_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4288
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself = 0U;
    if (((((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)) 
	  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid)) 
	 & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
		    >> 0x15U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4295
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
	 & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_) 
	    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid;
    }
    if ((0U != ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
		  & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
		 << 2U) | ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
			     & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
			    << 1U) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
				      & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:210
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		  >> 7U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_3_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_220_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_198_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid) 
						    << 1U) 
						   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_ = (0U 
						   != 
						   (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid) 
						     << 1U) 
						    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself) 
	   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther) 
	      | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck) 
		  | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
		 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4552
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_385_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_198_) 
						   & (~ 
						      ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_198_) 
						       - (IData)(1U))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4311
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4322
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5759
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)
						   ? vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
						   : vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_data);
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready 
	= (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)) 
		 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4465
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
		 << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext) 
			    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext) 
				       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext)))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4452
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
		 << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
			    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
				       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid 
	= ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4525
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
    }
}

VL_INLINE_OPT void Vdut_VexRiscv::_sequent__TOP__dut__VexRiscv__3(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdut_VexRiscv::_sequent__TOP__dut__VexRiscv__3\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdlyvdim0__RegFilePlugin_regFile__v0,4,0);
    VL_SIG8(__Vdlyvset__RegFilePlugin_regFile__v0,0,0);
    VL_SIG8(__Vdly__CsrPlugin_sstatus_SIE,0,0);
    VL_SIG8(__Vdly__CsrPlugin_mstatus_MPIE,0,0);
    VL_SIG8(__Vdly___zz_211_,2,0);
    VL_SIG8(__Vdly__MmuPlugin_shared_state_1_,2,0);
    VL_SIG8(__Vdly___zz_191_,1,0);
    VL_SIG8(__Vdly___zz_213_,2,0);
    VL_SIG8(__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0,6,0);
    VL_SIG8(__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0,0,0);
    VL_SIG8(__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0,0,0);
    VL_SIG8(__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex,2,0);
    VL_SIG8(__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter,7,0);
    VL_SIG8(__Vdlyvdim0__dataCache_1___DOT__ways_0_tags__v0,6,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_tags__v0,0,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol1__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0,0,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol0__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0,0,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol3__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0,0,0);
    VL_SIG8(__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol2__v0,7,0);
    VL_SIG8(__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0,0,0);
    VL_SIG8(__Vdly__dataCache_1___DOT__stageB_flusher_valid,0,0);
    VL_SIG8(__Vdly__dataCache_1___DOT__loader_error,0,0);
    VL_SIG16(__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_datas__v0,9,0);
    VL_SIG16(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol1__v0,9,0);
    VL_SIG16(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol0__v0,9,0);
    VL_SIG16(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol3__v0,9,0);
    VL_SIG16(__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol2__v0,9,0);
    VL_SIG(__Vdlyvval__RegFilePlugin_regFile__v0,31,0);
    VL_SIG(__Vdly__DBusCachedPlugin_rspCounter,31,0);
    VL_SIG(__Vdly__IBusCachedPlugin_rspCounter,31,0);
    VL_SIG(__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0,21,0);
    VL_SIG(__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_datas__v0,31,0);
    VL_SIG(__Vdlyvval__dataCache_1___DOT__ways_0_tags__v0,21,0);
    VL_SIG(__Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress,31,0);
    // Body
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_tags__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0 = 0U;
    __Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0 = 0U;
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    __Vdly__IBusCachedPlugin_rspCounter = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rspCounter;
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    __Vdly__dataCache_1___DOT__loader_error = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_error;
    __Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 = 0U;
    __Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0U;
    __Vdly___zz_211_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_;
    __Vdly___zz_213_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_;
    __Vdly__MmuPlugin_shared_state_1_ = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_;
    __Vdly__DBusCachedPlugin_rspCounter = vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_rspCounter;
    __Vdly__dataCache_1___DOT__stageB_flusher_valid 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid;
    __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress;
    __Vdly__CsrPlugin_mstatus_MPIE = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE;
    __Vdly__CsrPlugin_sstatus_SIE = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE;
    __Vdly___zz_191_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
		      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt))) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	VL_WRITEF("ERROR writeBack stuck by another plugin is not allowed\n");
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcycle 
	= (VL_ULL(1) + vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcycle);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_valid 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_error 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_address 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_address 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_way 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_valid 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3065
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_55_) {
	__Vdlyvval__RegFilePlugin_regFile__v0 = vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_data;
	__Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
	__Vdlyvdim0__RegFilePlugin_regFile__v0 = vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:553
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_2_) {
	__Vdlyvval__dataCache_1___DOT__ways_0_tags__v0 
	    = ((vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
		<< 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error) 
			   << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid)));
	__Vdlyvset__dataCache_1___DOT__ways_0_tags__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_tags__v0 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_minstret 
	    = (VL_ULL(1) + vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_minstret);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:568
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	  >> 2U) & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol2__v0 
	    = (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
			>> 0x10U));
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol2__v0 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:568
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	  >> 3U) & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol3__v0 
	    = (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
			>> 0x18U));
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol3__v0 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:568
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol0__v0 
	    = (0xffU & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data);
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol0__v0 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:568
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask) 
	  >> 1U) & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_))) {
	__Vdlyvval__dataCache_1___DOT__ways_0_data_symbol1__v0 
	    = (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
			>> 8U));
	__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0 = 1U;
	__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol1__v0 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3077
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_247_ = vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile
	[(0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_ 
		   >> 0x14U))];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3071
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_246_ = vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile
	[(0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_ 
		   >> 0xfU))];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowExecute 
	    = (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)) 
		     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess 
	    = (((0xbU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
				  >> 0x1cU))) | (0xeU 
						 == 
						 (0xfU 
						  & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
						     >> 0x1cU)))) 
	       | (0xfU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
				   >> 0x1cU))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_317_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_318_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 5U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_319_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_320_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 9U;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_321_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_322_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 5U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_323_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_324_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 9U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_195_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 7U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_196_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 3U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_197_) {
	    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code = 0xbU;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_159_ = vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite 
	    = (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)) 
		     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_268_)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_corrected) 
	     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
	}
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
	     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 1U;
	}
	if (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
	     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_171_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_174_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_172_ = (
						   (~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_171_));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_12_) {
	__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
	    = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_3_ 
	= (1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		 >> 7U));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_13_) {
	__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:180
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_11_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__ways_0_datas
	    [(0x3ffU & (vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
			>> 2U))];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:271
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_220_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_13_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value 
	= ((IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)
	    ? 0U : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_valueNext));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_317_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_318_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_319_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_320_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 1U;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_321_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_322_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_323_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_324_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_195_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_196_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_197_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__IBusCachedPlugin_rspCounter = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_116_;
	__Vdly__IBusCachedPlugin_rspCounter = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_) {
	    __Vdly__IBusCachedPlugin_rspCounter = ((IData)(1U) 
						   + vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rspCounter);
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:271
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_) {
	    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
		= (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__dataCache_1___DOT__loader_error = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	    __Vdly__dataCache_1___DOT__loader_error 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_error;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	    __Vdly__dataCache_1___DOT__loader_error = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:174
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1_) {
	__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext;
	__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 = 1U;
	__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_datas__v0 
	    = ((0x3f8U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
			  >> 2U)) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:162
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2_) {
	__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
	    = ((0x3ffffcU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
			     >> 0xaU)) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
					   << 1U) | 
					  (1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
						 >> 7U))));
	__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 1U;
	__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
	    = (0x7fU & ((0x80U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
			 ? (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
			    >> 5U) : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MEIP 
	= (0U != vlSymsp->TOP__dut__VexRiscv.__PVT___zz_208_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_wfiWake 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_197_) 
		      << 5U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_196_) 
				 << 4U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_195_) 
					    << 3U) 
					   | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_) 
					       << 2U) 
					      | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_) 
						  << 1U) 
						 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_))))))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_INPUT 
	= (0U != vlSymsp->TOP__dut__VexRiscv.__PVT___zz_210_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__externalInterruptArray_regNext 
	= vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MTIP 
	= (vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time 
	   >= vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_LRSC 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0xeU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_AMO 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x22U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0xdU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 4U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x12U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
	    = ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_385_))
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code)
	        : 2U);
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x10U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:271
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly___zz_211_ = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_) {
	    if (vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_ibus_ack) {
		__Vdly___zz_211_ = (7U & ((IData)(1U) 
					  + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_)));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_93_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO 
	    = (1U & ((IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			      >> 0x16U)) & (~ (IData)(
						      (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						       >> 0x20U)))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x20U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:271
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
	     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_ibus_ack))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_decodeRemoved = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_decodeRemoved = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_decodeRemoved = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_valid 
	    = (1U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_address 
	    = (0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
			   >> 2U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0xcU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
	    = (IData)((VL_ULL(0x1ffffffff) & VL_SHIFTRS_QQI(33,33,5, 
							    (((QData)((IData)(
									      ((3U 
										== (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
									       & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
										>> 0x1fU)))) 
							      << 0x20U) 
							     | (QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
							    (0x1fU 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x1bU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x1dU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_WR;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 0U;
    } else {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 0U;
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_317_) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_318_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_319_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_320_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_321_) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_322_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_323_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_324_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_195_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_196_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_197_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x14U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext 
	= vlSymsp->TOP__dut.__PVT__builder_shared_dat_r;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowUser 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 4U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowRead 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowExecute 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowWrite 
		    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_1 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_0 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0xaU));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1 
		= ((VL_ULL(0x100000000) & vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1) 
		   | (IData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_398_)));
	}
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1 
	    = (VL_ULL(0x1ffffffff) & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_205_)
				        ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_)
				        : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_) 
				      + (QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_205_))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT 
	    = (1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	if ((0x20U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2 
		= (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2 
		   >> 1U);
	}
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2 
	    = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_)
		 ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2)
		 : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2) 
	       + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DIV 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_DIV;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_MUL 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_MUL;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_superPage 
		    = (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_interrupt 
		    = (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException)));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_G 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 5U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_X 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 3U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_R 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 1U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_W 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 2U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_U 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 4U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_A 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 6U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_RSW 
	    = (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 8U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_D 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		     >> 7U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_V 
	    = (1U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_130_ 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_123_)
	        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_127_ 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
	        ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_120_
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_lastStageWasWfi 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring) 
	      & (2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN0 
	    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			 >> 0xaU));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN1 
	    = (0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			 >> 0x14U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_ 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
	        ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_119_
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_ 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_122_)
	        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE 
	    = (0x20U != (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
				  >> 7U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE 
	    = (1U & (~ (((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
				       >> 0xdU))) & 
			 (0U == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					  >> 0xfU)))) 
			| ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					 >> 0xdU))) 
			   & (0U == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					      >> 0xfU)))))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly___zz_213_ = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_) 
	     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_215_))) {
	    __Vdly___zz_213_ = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_)));
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_) {
		__Vdly___zz_213_ = 0U;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5 = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5 = 0U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5 = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent = 1U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	if ((0x20U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U] 
		= ((0x80000000U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_389_) 
				   << 0x1fU)) | (0x7fffffffU 
						 & ((vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U] 
						     << 0x1fU) 
						    | (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U] 
						       >> 1U))));
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U] 
		= ((0x7fffffffU & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_389_) 
				   >> 1U)) | (0x80000000U 
					      & ((IData)(
							 (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_389_ 
							  >> 0x20U)) 
						 << 0x1fU)));
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[2U] 
		= (0x7fffffffU & ((IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_389_ 
					   >> 0x20U)) 
				  >> 1U));
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U] 
		= ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_202_ 
				  >> 0x20U))) ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_201_)
		    : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_202_));
	}
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U] = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U] = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[2U] = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_128_ 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_121_)
	        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
		     >> 1U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)
	       ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute)
	       : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
		  & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)
	       ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory)
	       : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
		  & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
	      & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
		 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__MmuPlugin_shared_state_1_ = 0U;
    } else {
	if ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) {
		__Vdly__MmuPlugin_shared_state_1_ = 0U;
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) {
		    __Vdly__MmuPlugin_shared_state_1_ = 3U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready) {
			__Vdly__MmuPlugin_shared_state_1_ = 4U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) {
			__Vdly__MmuPlugin_shared_state_1_ = 3U;
			if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_leaf) 
			     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception))) {
			    __Vdly__MmuPlugin_shared_state_1_ = 0U;
			}
			if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) {
			    __Vdly__MmuPlugin_shared_state_1_ = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready) {
			__Vdly__MmuPlugin_shared_state_1_ = 2U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_307_) {
			__Vdly__MmuPlugin_shared_state_1_ = 1U;
		    }
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_308_) {
			__Vdly__MmuPlugin_shared_state_1_ = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_mode 
							    = 
							    (3U 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData);
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(0x100000U 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(0x100000U 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 9U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(0x100000U 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_base 
							    = 
							    (0x3fffffffU 
							     & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								>> 2U));
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mscratch 
							    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sscratch 
							    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP = 0U;
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP 
							    = 
							    (1U 
							     & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								>> 3U));
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_mode 
							    = 
							    (3U 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData);
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 3U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0xbU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 7U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 9U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 9U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_base 
							    = 
							    (0x3fffffffU 
							     & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								>> 2U));
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead 
	    = (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)) 
		     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_267_) 
			| ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
			   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_)))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAM = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAM 
								= 
								(1U 
								 & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData);
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAF = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAF 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LPF = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LPF 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0xdU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_II = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_II 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 2U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAM = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAM 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 4U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAF = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAF 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAM = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAM 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 6U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAF = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAF 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 7U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_EU = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_EU 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 8U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_ES = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_ES 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 9U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IPF = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IPF 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0xcU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SPF = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (0x200000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SPF 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0xfU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			      >> 0x1dU)))) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x1fU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x11U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x11U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_ppn 
							    = 
							    (0xfffffU 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData);
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator = 1U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator 
		= (1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_36_));
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 9U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((0x400000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 9U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_207_ = 0U;
    } else {
	if ((0x80000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_207_ 
								= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_209_ = 0U;
    } else {
	if ((0x80000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			      >> 0x1dU)))) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_209_ 
								= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_exceptionCode 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause;
	}
    }
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_exceptionCode 
							    = 
							    (0xfU 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData);
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_DO 
	    = ((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
	       & ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
		  | ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
		     | ((0U == (7U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0xcU))) ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq)
			 : ((1U == (7U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0xcU)))
			     ? (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq))
			     : ((5U == (5U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0xcU)))
				 ? (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less))
				 : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less)))))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_171_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_173_ 
	    = (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			>> 7U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__DBusCachedPlugin_rspCounter = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_131_;
	__Vdly__DBusCachedPlugin_rspCounter = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_) {
	    __Vdly__DBusCachedPlugin_rspCounter = ((IData)(1U) 
						   + vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_rspCounter);
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC;
	}
    }
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc 
							    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC;
	    }
	}
    }
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc 
							    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    if ((0x20U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_result 
		    = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_needRevert)
			 ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_203_)
			 : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_203_) 
		       + (IData)((QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_needRevert))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_interrupt 
		= (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException)));
	}
    }
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_interrupt 
							    = 
							    (1U 
							     & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								>> 0x1fU));
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite 
	    = (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)) 
		     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_257_)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_refilling 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_refilling;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_size 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_size;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
		     >> 1U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_colisions 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen) 
	       | ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
		    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
		   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
		      == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
				    >> 2U)))) & (0U 
						 != 
						 ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_mask) 
						  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask)))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultReg 
	= ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_))
	    ? ((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap) 
		      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
			 ^ (((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
				    >> 0x1fU)) == (1U 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
						      >> 0x1fU)))
			     ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_ 
				>> 0x1fU) : ((3U == 
					      (3U & 
					       ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
						>> 1U)))
					      ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
						 >> 0x1fU)
					      : (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
						 >> 0x1fU))))))
	        ? vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)
	    : ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_))
	        ? ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_))
		    ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
		       & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)
		    : (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
		       | vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0))
	        : ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_))
		    ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
		       ^ vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)
		    : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__dataCache_1___DOT__stageB_flusher_valid = 1U;
	__Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	    __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	    if ((0x7fU != (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
				    >> 5U)))) {
		__Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		    = ((0xfffff01fU & __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress) 
		       | (0xfe0U & (((IData)(1U) + 
				     (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
				      >> 5U)) << 5U)));
	    } else {
		__Vdly__dataCache_1___DOT__stageB_flusher_valid = 0U;
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_19_) {
	    __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
		= (0xfffff01fU & __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress);
	    __Vdly__dataCache_1___DOT__stageB_flusher_valid = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowRead 
	    = (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)) 
		     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_256_) 
			| ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
			   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_)))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup) 
	       & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit) 
		  & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_250_) 
		      | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_) 
			  & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) 
			 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum)))) 
		     | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_)) 
			& (0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess 
	    = (((0xbU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
				  >> 0x1cU))) | (0xeU 
						 == 
						 (0xfU 
						  & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
						     >> 0x1cU)))) 
	       | (0xfU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
				   >> 0x1cU))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid 
	    = (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
	       & ((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
			       >> 2U)) == (0xfffffU 
					   & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
					      >> 0xcU))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stval 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr;
	    }
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtval 
			= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr;
		}
	    }
	}
    }
    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1fU)))) {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1dU)))) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stval 
							    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__CsrPlugin_mstatus_MPIE = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    if ((1U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		    __Vdly__CsrPlugin_mstatus_MPIE 
			= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE;
		}
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		__Vdly__CsrPlugin_mstatus_MPIE = 1U;
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    __Vdly__CsrPlugin_mstatus_MPIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 7U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly__CsrPlugin_sstatus_SIE = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		__Vdly__CsrPlugin_sstatus_SIE = 0U;
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U != (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		if ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
				  >> 0x1cU)))) {
		    __Vdly__CsrPlugin_sstatus_SIE = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE;
		}
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    __Vdly__CsrPlugin_sstatus_SIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    __Vdly__CsrPlugin_sstatus_SIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 1U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	__Vdly___zz_191_ = 3U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    __Vdly___zz_191_ = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		__Vdly___zz_191_ = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP;
	    } else {
		if ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
				  >> 0x1cU)))) {
		    __Vdly___zz_191_ = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP;
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits 
	    = (((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
			     >> 0xcU)) == (0xfffffU 
					   & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
					      >> 2U))) 
	       & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_isAmo;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved = 0U;
    } else {
	if ((((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
		& (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself))) 
	       & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo))) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc)) 
	     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid = 0U;
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid = 0U;
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_exception) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid = 0U;
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
		if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid = 1U;
		}
		if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid = 1U;
		}
		if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid = 1U;
		}
		if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid = 1U;
		}
	    }
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
		if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid = 1U;
		}
		if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid = 1U;
		}
		if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid = 1U;
		}
		if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid = 1U;
		}
	    }
	}
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
	     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_SFENCE_VMA))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid = 0U;
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute 
	    = (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)) 
		     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup) 
	       & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit) 
		  & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_261_) 
		      | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_) 
			  & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) 
			 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum)))) 
		     | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_)) 
			& (0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_refilling;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_ = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_ 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_) 
		   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_ = 0U;
	}
    }
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3067
    if (__Vdlyvset__RegFilePlugin_regFile__v0) {
	vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[__Vdlyvdim0__RegFilePlugin_regFile__v0] 
	    = __Vdlyvval__RegFilePlugin_regFile__v0;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rspCounter 
	= __Vdly__IBusCachedPlugin_rspCounter;
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_error 
	= __Vdly__dataCache_1___DOT__loader_error;
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:176
    if (__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_datas__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__ways_0_datas[__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_datas__v0] 
	    = __Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_datas__v0;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
	= __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
	= __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_ = __Vdly___zz_211_;
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_ = __Vdly___zz_213_;
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_rspCounter 
	= __Vdly__DBusCachedPlugin_rspCounter;
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid 
	= __Vdly__dataCache_1___DOT__stageB_flusher_valid;
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
	= __Vdly__dataCache_1___DOT__stageB_mmuRsp_physicalAddress;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_ = (
						   (~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC) 
						      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_ibus_ack)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext 
	= vlSymsp->TOP__dut.__PVT__builder_shared_dat_r;
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_12_ 
	= (1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		    >> 7U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:271
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_94_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:226
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3688
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx11 = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx11][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx11][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx11][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3933
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx23 = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx23][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx23][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx23][2U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5457
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffffbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffff7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 >> 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x100000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x200000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x400000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x800000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x1000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x2000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x4000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x8000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x10000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x20000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x40000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_) 
						   | (0x80000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
							 << 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 2U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3742
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx15 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx15][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx15][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx15][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3986
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx24 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx24][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx24][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx24][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 7U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_WR 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_WR;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW 
	    = (3U & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_);
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_390_ = (
						   (1U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2)
						    ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1
						    : VL_ULL(0));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_DIV 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0xbU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_MUL 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x19U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_123_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_120_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_119_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_122_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_) 
						   == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_201_ = (
						   ((QData)((IData)(
								    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U])) 
						    << 1U) 
						   | (QData)((IData)(
								     (1U 
								      & (IData)(
										(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1 
										>> 0x1fU))))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value 
	= ((IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)
	    ? 0U : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_valueNext));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)))) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_307_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1 
			= (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
				     >> 0x16U));
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_308_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1 
			= (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
				     >> 0x16U));
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)))) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_307_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0 
			= (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
				     >> 0xcU));
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_308_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0 
			= (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
				     >> 0xcU));
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_121_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_196_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_197_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_195_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5688
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 3U;
    if ((8U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
	if ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SPF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LPF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IPF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	} else {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_ES) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_EU) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	}
    } else {
	if ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAM) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAM) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	} else {
	    if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code)))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_II) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAF) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		} else {
		    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAM) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_36_ 
	= (3U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1125
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_INPUT));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_208_ = (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_207_ 
						   & vlSymsp->TOP__dut__VexRiscv.__PVT__externalInterruptArray_regNext);
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_210_ = (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_209_ 
						   & vlSymsp->TOP__dut__VexRiscv.__PVT__externalInterruptArray_regNext);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_ = (
						   (~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
						   & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_) 
						       & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_))) 
						      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_dbus_ack)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
	       & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_PC;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((0x20U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_needRevert 
	    = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_205_) 
		^ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_) 
		   & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			 >> 0xdU)))) & (~ (((0U == vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2) 
					    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED)) 
					   & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						 >> 0xdU)))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_size 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen 
	    = ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
		 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
		& ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
		   == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
				 >> 2U)))) & (0U != 
					      ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_mask) 
					       & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_data;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
	    = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_41_) 
		<< 0x18U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_40_) 
			      << 0x10U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_39_) 
					    << 8U) 
					   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_38_))));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_amoCtrl_swap;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_amoCtrl_alu;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x13U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x13U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:168
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags
	    [(0x7fU & (vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
		       >> 5U))];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException 
	= ((~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_385_))
	        ? (0xfffffffcU & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_)
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen);
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    if ((1U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE = 0U;
		}
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE;
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 3U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE;
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U != (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		if ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
				  >> 0x1cU)))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE = 1U;
		}
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 5U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP = 1U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP 
		    = (1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_));
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U != (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		if ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
				  >> 0x1cU)))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP = 0U;
		}
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 8U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 8U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP = 3U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	    if ((1U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP 
			= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_;
		}
	    }
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	    if ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP = 0U;
	    }
	}
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP 
								= 
								(3U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0xbU));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:559
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_valid) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_tags
	    [vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_payload];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:924
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError 
	= ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_isAmo 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_235_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) 
		   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready));
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_isLrsc;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_wr;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_SFENCE_VMA 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_SFENCE_VMA;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_exception 
		    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception) 
		       | ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			  & (0U != (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
					      >> 0xaU)))));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid = 0U;
    } else {
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
		   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid = 0U;
	}
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
		   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt))))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum = 0U;
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1fU)))) {
	    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			  >> 0x1eU)))) {
		if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x12U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1bU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x1aU)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x19U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x18U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x17U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x16U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)))) {
						    if (
							(1U 
							 & (~ 
							    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)))) {
							if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
							    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum 
								= 
								(1U 
								 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
								    >> 0x12U));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_ = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_ 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_) 
		   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt)));
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_ = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
						   | (0U 
						      != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_389_ = (VL_ULL(0x3ffffffff) 
						   & ((((QData)((IData)(
									(1U 
									 & (IData)(
										(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_390_ 
										>> 0x20U))))) 
							<< 0x21U) 
						       | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_390_) 
						      + 
						      (((QData)((IData)(
									(1U 
									 & vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[2U]))) 
							<< 0x21U) 
						       | (VL_ULL(0x1ffffffff) 
							  & (((QData)((IData)(
									      vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[2U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U])))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_202_ = (VL_ULL(0x1ffffffff) 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_201_ 
						      - (QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_318_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_322_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_192_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_319_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_323_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_193_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE));
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:164
    if (__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0] 
	    = __Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE 
	= __Vdly__CsrPlugin_mstatus_MPIE;
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE 
	= __Vdly__CsrPlugin_sstatus_SIE;
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_ = __Vdly___zz_191_;
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:555
    if (__Vdlyvset__dataCache_1___DOT__ways_0_tags__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_tags[__Vdlyvdim0__dataCache_1___DOT__ways_0_tags__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_tags__v0;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_281_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:186
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:201
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_) {
	if ((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6313
    vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6306
    vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_305_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3706
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx13 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx13][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx13][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx13][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3924
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx22 = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx22][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx22][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx22][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_WR 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 6U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
	}
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_398_ = (
						   ((QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1)) 
						    << 1U) 
						   | (QData)((IData)(
								     (1U 
								      & (~ (IData)(
										(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_202_ 
										>> 0x20U)))))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_mask;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_320_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_324_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_194_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_ 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_118_)
	        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_ = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_ 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid) 
		   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_));
	}
    }
    vlSymsp->TOP__dut__VexRiscv.lastStagePc = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_PC 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value 
	= ((IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)
	    ? 0U : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_valueNext));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x1aU)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:873
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultReg;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_data 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_232_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:583
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_41_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol3
	    [vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:583
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_40_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol2
	    [vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:583
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_39_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol1
	    [vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:583
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_5_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_38_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol0
	    [vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload];
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_amoCtrl_swap 
	    = (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		     >> 0x1bU));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
	   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap) 
	      << 2U));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_ 
	= ((vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
	    + ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu))
	        ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0)) 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((4U 
							& (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu))
					  ? 1U : 0U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_amoCtrl_alu 
	    = (7U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		     >> 0x1dU));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5822
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause 
	= vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC 
	    = (0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
			        ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1
			        : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC) 
			      + ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
				  ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_) 
				      << 0x15U) | (
						   (0x100000U 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						       >> 0xbU)) 
						   | ((0xff000U 
						       & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION) 
						      | ((0x800U 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 9U)) 
							 | (0x7feU 
							    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							       >> 0x14U))))))
				  : ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
				      ? ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ 
					  << 0xcU) 
					 | (0xfffU 
					    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					       >> 0x14U)))
				      : ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ 
					  << 0xdU) 
					 | ((0x1000U 
					     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						>> 0x13U)) 
					    | ((0x800U 
						& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						   << 4U)) 
					       | ((0x7e0U 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						      >> 0x14U)) 
						  | (0x1eU 
						     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							>> 7U))))))))));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_317_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE) 
						    & (1U 
						       == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) 
						   | (1U 
						      > (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_321_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) 
						   | (3U 
						      > (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5118
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode;
    if (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv)) 
	 & (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5815
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege 
	    = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
		< (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped))
	        ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped)
	        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION = 0U;
    } else {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4807
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x15U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_isLrsc 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_18_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_wr 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_231_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1030
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	    ? vlSymsp->TOP__dut__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext
	    : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0);
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
	    = (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved)));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_20_ 
	= (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)) 
	    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo)) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_colisions) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits) 
	   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr) 
	      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_SFENCE_VMA 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_SFENCE_VMA;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value 
	= ((IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)
	    ? 0U : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_valueNext));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value 
	= ((IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)
	    ? 0U : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_valueNext));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		  >> 2U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)))) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_307_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId = 0U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_308_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid = 0U;
    } else {
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
		   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid = 0U;
	}
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)) 
		   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt))))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.lastStageIsValid = vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_272_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (1U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4822
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_ = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_ = 0U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_ 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4263
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_281_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:193
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
	       | (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		     >> 7U))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1042
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement = 1U;
    }
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:579
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol3__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol3[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol3__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol3__v0;
    }
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:576
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol2__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol2[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol2__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol2__v0;
    }
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:573
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol1__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol1[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol1__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol1__v0;
    }
    // ALWAYSPOST at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:570
    if (__Vdlyvset__dataCache_1___DOT__ways_0_data_symbol0__v0) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__ways_0_data_symbol0[__Vdlyvdim0__dataCache_1___DOT__ways_0_data_symbol0__v0] 
	    = __Vdlyvval__dataCache_1___DOT__ways_0_data_symbol0__v0;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5829
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode = 0U;
    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_mode;
    } else {
	if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_mode;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5843
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base = 0U;
    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_base;
    } else {
	if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_base;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5019
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup 
	= ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode));
    if (((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv)) 
	 & (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) {
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv)) 
		   | (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP))))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_leaf 
	= (1U & ((vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
		  >> 1U) | (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			    >> 3U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4875
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data;
    if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
	    = ((0xffffff00U & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
	       | (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			   >> 8U)));
    } else {
	if ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		= ((0xffff0000U & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		   | (0xffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				 >> 0x10U)));
	} else {
	    if ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
		    = ((0xffffff00U & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
		       | (0xffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 0x18U)));
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_ 
	= __Vdly__MmuPlugin_shared_state_1_;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1002
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:987
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? 0U : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)
			 ? 0U : 7U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:972
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address 
	    = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)
	        ? (0xfffffffcU & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
	        : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)
		    ? (0xfffffffcU & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)
		    : (0xffffffe0U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:740
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
		    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
				 >> 2U));
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address 
	    = ((0x3f8U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			  >> 2U)) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:754
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:726
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:905
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_20_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_refilling))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
	   & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception) 
	       | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite)) 
		  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr))) 
	      | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowRead)) 
		 & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)) 
		    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) 
	   & (((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_size)) 
	       & (0U != (3U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress))) 
	      | ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_size)) 
		 & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_13_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
	   & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
		 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						    & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
						       & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
							  | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 8U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						    >> 0xcU)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:768
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = 0xfU;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1059
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_mask 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_mask;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1052
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_valueNext 
	= (7U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value) 
		 + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow 
	= ((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_118_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_ = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_ = 0U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_ 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_ = (
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
						    >> 0x1fU) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL 
	    = (3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x17U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_;
    }
    vlSymsp->TOP__dut__VexRiscv.lastStageInstruction 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_address 
	= (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		    >> 7U));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_ = (1U 
						   & ((vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
						       >> 7U) 
						      & (~ 
							 (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
							  >> 0xeU))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_ = (1U 
						   & ((vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
						       >> 0xfU) 
						      & (~ 
							 (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
							  >> 0xeU))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_SFENCE_VMA 
	    = (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			     >> 0x11U)));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3853
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx19 = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_;
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1___05Fstring 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx19];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4563
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5210
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_) 
		  >> 2U)))) {
	if ((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
	    if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address 
		    = ((0xffc00000U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN1) 
				       << 0x16U)) | 
		       (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN0) 
			 << 0xcU) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0) 
				     << 2U)));
	    }
	} else {
	    if ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address 
		    = ((vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_ppn 
			<< 0xcU) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1) 
				    << 2U));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5190
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx25 = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_;
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx25];
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_274_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
	    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_DO)) 
	   & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC 
	      >> 1U));
    vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
		   << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_298_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4797
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_MUL));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid = 0U;
    } else {
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)) 
		   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid = 0U;
	}
	if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)) 
		   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt))))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4831
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4860
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 7U : 5U);
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 6U : 4U);
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
		= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
		    ? 0xfU : 0xdU);
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception 
	= (1U & (((~ vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data) 
		  | ((~ (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
			 >> 1U)) & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				    >> 2U))) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) 
						| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4841
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_292_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_ 
	= ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_refilling) 
	     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError)) 
	    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException)) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4472
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_) 
	  | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_)) 
	 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4256
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_91_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_ = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3) 
		   << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2) 
			      << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1) 
					 << 1U) | (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid) 
						    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1) 
						       == 
						       (0x3ffU 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
							   >> 0x16U)))) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage) 
						      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0) 
							 == 
							 (0x3ffU 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
							     >> 0xcU)))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_ = (
						   (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2) 
						     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3)) 
						    << 1U) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:675
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:685
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_error;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:692
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address 
	    = (0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			   >> 0xcU));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:665
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			>> 5U));
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address 
	    = (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress 
			>> 5U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:655
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:1017
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr = 0U;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4893
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1fU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1eU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1dU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1cU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1bU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x1aU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x19U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x18U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x17U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x16U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x15U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x14U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x13U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x12U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x11U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0x10U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffff7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xfU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xeU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xdU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xcU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xbU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 0xaU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 9U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xfffffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_133_) 
						      << 8U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_ = (
						   (0xffffff00U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_) 
						   | (0xffU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4922
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1fU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1eU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1dU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1cU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1bU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x1aU));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x19U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x18U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x17U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x16U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x15U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x14U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x13U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x12U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x11U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_135_) 
						      << 0x10U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_ = (
						   (0xffff0000U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_) 
						   | (0xffffU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4271
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_93_ = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_93_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4397
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6180
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	if ((0x20U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6209
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4371
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	if ((0x20U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself = 1U;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4425
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:936
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid 
		= (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent)));
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_18_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
	    }
	} else {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid)))) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
		    }
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_20_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
		}
	    } else {
		if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent)))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:642
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:699
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid)))) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
		    }
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_17_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4598
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5071
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_refilling 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_253_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_252_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_249_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_250_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_exception)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_exception)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_exception)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_exception))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_256_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowRead)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowRead)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowRead)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowRead))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_257_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowWrite)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowWrite)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowWrite)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowWrite))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowExecute)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowExecute)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowExecute)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowExecute))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowUser)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowUser)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowUser)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowUser))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_254_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_251_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_superPage)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_superPage)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_superPage))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3203
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_255_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_139_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_1))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:816
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess)))) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid = 1U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:832
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt 
	= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess) {
	    if ((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)
		        ? (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_))
		        : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
	    }
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_18_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
	    }
	} else {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_14_) {
		if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr)) 
			   | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_))))) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid)))) {
			vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 1U;
		    }
		}
		if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_16_) {
		    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
		}
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_13_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6244
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_ = (
						   (VL_ULL(0xffffffff) 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_) 
						   | ((QData)((IData)(
								      ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED) 
								       & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1 
									  >> 0x1fU)))) 
						      << 0x20U));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_ = (
						   (VL_ULL(0x100000000) 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_206_) 
						   | (IData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_205_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_MUL) 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_204_)) 
						   | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_DIV) 
						       & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1 
							  >> 0x1fU)) 
						      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_203_ = (
						   (0x2000U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION)
						    ? 
						   vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U]
						    : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4159
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) {
	if ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_168_;
	} else {
	    if (((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL)) 
		 | (3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_276_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
	    = ((0U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
			     >> 0xcU))) ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[0U]
	        : vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator[1U]);
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_277_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_result;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4219
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_ = vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_ 
	    = ((0U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			     >> 0xcU))) ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_
	        : ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
				 >> 0xcU))) ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_
		    : vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_275_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_303_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (3U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_283_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_271_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_300_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5804
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done 
	= ((0U == (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
		    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
			       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid)))) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5));
    if ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
		 << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
			    << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_ = (0U 
						   == 
						   ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack)) 
						     << 2U) 
						    | ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory)) 
							<< 1U) 
						       | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
							  | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5789
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4415
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:599
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_2_ = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_2_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:592
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_ = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_1_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4249
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_ = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_90_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4631
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_281_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_308_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_refilling));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5031
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)
	    ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_255_) 
		<< 0x16U) | ((0x3ff000U & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_251_)
					     ? (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						>> 0xcU)
					     : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_254_)) 
					   << 0xcU)) 
			     | (0xfffU & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA)))
	    : vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:806
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid) 
	 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr))) 
	   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) 
	      | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4407
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_data 
	= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5860
    vlSymsp->TOP__dut__VexRiscv.execute_CsrPlugin_inWfi = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_283_) {
	vlSymsp->TOP__dut__VexRiscv.execute_CsrPlugin_inWfi = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interruptJump 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4731
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_231_ = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_WR;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_231_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4773
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_LRSC) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_ = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4785
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_235_ = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_AMO;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_235_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4967
    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4711
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_ = 1U;
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_) 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error)) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
    } else {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
	}
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4644
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) 
						   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_279_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_ = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_ = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid) 
						    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo))) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_leaf) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_21_ 
	= (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
		 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4278
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_94_ = ((IData)(4U) 
						  + vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_);
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_94_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6919
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
	    = vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5589
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x3ffU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x5ffU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x6ffU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x77fU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7bfU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7dfU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7efU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7f7U 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7fbU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7fdU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_ = (
						   (0x7feU 
						    & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_)) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5604
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0x7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xf7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xfffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ = (
						   (0xffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5628
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x3ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x5ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x6ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x77fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7bfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7dfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7efffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7f7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7feffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7ffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ = (
						   (0x7fffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4754
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_232_ = (
						   (0U 
						    == 
						    (3U 
						     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							>> 0xcU)))
						    ? 
						   ((0xff000000U 
						     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							<< 0x18U)) 
						    | ((0xff0000U 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							   << 0x10U)) 
						       | ((0xff00U 
							   & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							      << 8U)) 
							  | (0xffU 
							     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2))))
						    : 
						   ((1U 
						     == 
						     (3U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)))
						     ? 
						    ((0xffff0000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2 
							 << 0x10U)) 
						     | (0xffffU 
							& vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2))
						     : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_232_ = 0U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4763
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_ = (3U 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						      >> 0xcU));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_ = 2U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6030
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData = 0U;
    if ((0x80000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	if ((0x40000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_208_;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((0x1000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
						    = 
						    ((0xfffffffcU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
						     | ((0x100000U 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
							 ? 3U
							 : 2U));
					    } else {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							(1U 
							 | vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData);
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_210_;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							(0x1000U 
							 | (0xffffe000U 
							    & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							(0x2000000U 
							 | (0xfc0fffffU 
							    & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_207_;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_209_;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
							    << 0xbU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
							    << 7U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
							    << 3U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP) 
							    << 1U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR) 
							    << 9U));
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtval;
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_interrupt) 
							    << 0x1fU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff0U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode));
						}
					    } else {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
						    = 
						    ((0x100000U 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
						      ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc
						      : vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mscratch);
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffff7ffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE) 
							    << 0xbU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE) 
							    << 7U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE) 
							    << 3U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE) 
							    << 9U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE) 
							    << 1U));
						}
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfff7ffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
							    << 0x13U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffbffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum) 
							    << 0x12U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffdffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv) 
							    << 0x11U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffe7ffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP) 
							    << 0xbU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffff7fU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE) 
							    << 7U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff7U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) 
							    << 3U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffeffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP) 
							    << 8U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE) 
							    << 1U));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode) 
							    << 0x1fU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfff00000U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_ppn);
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP) 
							    << 1U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR) 
							    << 9U));
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stval;
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0x7fffffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_interrupt) 
							    << 0x1fU));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffff0U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_exceptionCode));
						}
					    } else {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
						    = 
						    ((0x100000U 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
						      ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc
						      : vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sscratch);
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((3U 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_base 
							    << 2U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffcU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_mode));
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffdffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE) 
							    << 9U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE) 
							    << 1U));
						}
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfff7ffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
							    << 0x13U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffbffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum) 
							    << 0x12U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffdffffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv) 
							    << 0x11U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffeffU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP) 
							    << 8U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xffffffdfU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE) 
							    << 5U));
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData 
							= 
							((0xfffffffdU 
							  & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE) 
							    << 1U));
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5324
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
						    ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1
						    : 
						   ((2U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
						     ? 4U
						     : 
						    ((1U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
						      ? 
						     (0xfffff000U 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
						      : 
						     (0x1fU 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5990
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
	 & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))) {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
	     < (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1cU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5868
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if ((0x80000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	if ((0x40000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((0x1000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    } else {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		      >> 0x1eU)))) {
	    if ((0x20000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x1bU)))) {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    } else {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						if (
						    (0x100000U 
						     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						} else {
						    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
							vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						    }
						}
					    } else {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
		    if ((0x8000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				      >> 0x1aU)))) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((1U & (~ 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						    >> 0x16U)))) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					} else {
					    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					  >> 0x19U)))) {
				if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					      >> 0x18U)))) {
				    if ((1U & (~ (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						  >> 0x17U)))) {
					if ((0x400000U 
					     & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)) {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
					    }
					} else {
					    if ((1U 
						 & (~ 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x15U)))) {
						if (
						    (1U 
						     & (~ 
							(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)))) {
						    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
	 < (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
		  >> 0x1cU)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid)) 
	       | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5343
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0x7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xf7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xfffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ = (
						   (0xffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5367
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0x7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xcU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xeU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xf7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x10U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x12U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x16U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x18U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1aU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xfffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1cU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1eU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ = (
						   (0xffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							 >> 0x1fU)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:309
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_data;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException) 
						   | (IData)(vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interruptJump));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_19_ 
	= (((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_) 
	      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_))) 
	     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_))) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4664
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4654
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_280_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4242
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected 
	= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_89_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_278_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5000
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5099
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_293_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement = 1U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.lastStageIsFiring = vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring;
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_171_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5285
    vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_159_) {
	vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6189
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6218
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6154
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData;
    if ((0x344U == (0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
			      >> 0x14U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
	    = ((0xfffffdffU & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData) 
	       | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT) 
		  << 9U));
    } else {
	if ((0x144U == (0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				  >> 0x14U)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
		= ((0xfffffdffU & vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData) 
		   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT) 
		      << 9U));
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5420
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffffeU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (1U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffffdU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (2U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffffbU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (4U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffff7U 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (8U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffffefU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x10U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffffdfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x20U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffffbfU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x40U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffff7fU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x80U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffeffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x100U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffdffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x200U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffffbffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x400U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffff7ffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x800U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffefffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x1000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffdfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x2000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffffbfffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x4000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffff7fffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x8000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 >> 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffeffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x10000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffdffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x20000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 3U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfffbffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x40000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 5U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfff7ffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x80000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 7U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffefffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x100000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 9U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffdfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x200000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0xbU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xffbfffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x400000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0xdU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xff7fffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x800000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfeffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x1000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x11U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfdffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x2000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x13U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xfbffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x4000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x15U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xf7ffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x8000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x17U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xefffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x10000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x19U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xdfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x20000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x1bU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0xbfffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x40000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_ = (
						   (0x7fffffffU 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_) 
						   | (0x80000000U 
						      & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
							 << 0x1fU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_302_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess) 
						   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5390
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
						    ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
						     ? 
						    ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_163_ 
						      << 0xcU) 
						     | (0xfffU 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							   >> 0x14U)))
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
						      ? 
						     ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_165_ 
						       << 0xcU) 
						      | ((0xfe0U 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							     >> 0x14U)) 
							 | (0x1fU 
							    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							       >> 7U))))
						      : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_data 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)
	    ? 0U : vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_11_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4489
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
	    = (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base 
	       << 2U);
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	if ((3U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			  >> 0x1cU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc;
	} else {
	    if ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
			      >> 0x1cU)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4479
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4432
    vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:866
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_19_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4574
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5012
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_valueNext 
	= (3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value) 
		 + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5111
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_valueNext 
	= (3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value) 
		 + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4199
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_55_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_55_ = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6198
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_valueNext 
	= (0x3fU & (((0x20U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value)) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement))
		     ? 0U : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value) 
			     + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement))));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_valueNext = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6227
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_valueNext 
	= (0x3fU & (((0x21U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value)) 
		     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement))
		     ? 0U : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value) 
			     + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement))));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_valueNext = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:614
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_valid = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:628
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable 
	= (((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
	      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
	     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE)) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    if (vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset) {
	vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
	     & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready) 
		 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt)) 
		| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))) {
	    vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						    >> 0xcU)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid) 
	    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1) 
	       == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
			     >> 0x16U)))) & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_superPage) 
					     | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0) 
						== 
						(0x3ffU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						    >> 0xcU)))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6168
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData 
	= ((0x2000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
	    ? ((0x1000U & vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
	        ? (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
		   & (~ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_))
	        : (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData 
		   | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_))
	    : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_);
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
	= ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL))
	    ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_167_
	    : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6009
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_302_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code = 2U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_303_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code 
	    = ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))
	        ? 8U : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))
			 ? 9U : 0xbU));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5999
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_302_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_303_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq 
	= (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
	   == vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5408
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub 
	= ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
	    + ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	        ? (~ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
	        : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)) 
	   + ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
	       ? 1U : 0U));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_85_ = (0U 
						  != 
						  (((0x17U 
						     == 
						     (0x5fU 
						      & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
						    << 0x18U) 
						   | (((0x6fU 
							== 
							(0x7fU 
							 & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
						       << 0x17U) 
						      | (((3U 
							   == 
							   (0x106fU 
							    & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
							  << 0x16U) 
							 | (((0x1073U 
							      == 
							      (0x107fU 
							       & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
							     << 0x15U) 
							    | (((0x2073U 
								 == 
								 (0x207fU 
								  & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
								<< 0x14U) 
							       | (((0x4063U 
								    == 
								    (0x407fU 
								     & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
								   << 0x13U) 
								  | (((0x2013U 
								       == 
								       (0x207fU 
									& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
								      << 0x12U) 
								     | (((0x23U 
									  == 
									  (0x603fU 
									   & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									 << 0x11U) 
									| (((3U 
									     == 
									     (0x207fU 
									      & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									    << 0x10U) 
									   | (((3U 
										== 
										(0x505fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									       << 0xfU) 
									      | (((0x63U 
										== 
										(0x707bU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xeU) 
										| (((0xfU 
										== 
										(0x607fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xdU) 
										| (((0x202fU 
										== 
										(0x1800707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xcU) 
										| (((0x33U 
										== 
										(0xfc00007fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xbU) 
										| (((0x800202fU 
										== 
										(0xe800707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xaU) 
										| (((0x1013U 
										== 
										(0xfc00305fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 9U) 
										| (((0x500fU 
										== 
										(0x1f0707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 8U) 
										| (((0x5013U 
										== 
										(0xbc00707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 7U) 
										| (((0x5033U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 6U) 
										| (((0x33U 
										== 
										(0xbe00707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x1000202fU 
										== 
										(0xf9f0707fU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x12000073U 
										== 
										(0xfe007fffU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x10200073U 
										== 
										(0xdfffffffU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x10500073U 
										== vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
										<< 1U) 
										| (0x73U 
										== vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_177_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_178_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_179_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0xfU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_180_ = (
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						       >> 7U)) 
						   == 
						   (0x1fU 
						    & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						       >> 0x14U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ = (
						   ((QData)((IData)(
								    (8U 
								     == 
								     (0x10000008U 
								      & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
						    << 0x22U) 
						   | (((QData)((IData)(
								       (0U 
									!= 
									(((0x20U 
									   == 
									   (0x34U 
									    & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									  << 3U) 
									 | (((0x20U 
									      == 
									      (0x64U 
									       & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									     << 2U) 
									    | (((0x8000020U 
										== 
										(0x8000070U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
									       | (0x20U 
										== 
										(0x10000070U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))) 
						       << 0x21U) 
						      | (((QData)((IData)(
									  (0U 
									   != 
									   (((0x40U 
									      == 
									      (0x44U 
									       & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
									     << 2U) 
									    | (((0x2010U 
										== 
										(0x2014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
									       | (0x40000030U 
										== 
										(0x40000034U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
							  << 0x20U) 
							 | (QData)((IData)(
									   (((0U 
									      != 
									      (((0U 
										== 
										(0x44U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
									       | (((0U 
										== 
										(0x18U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x2000U 
										== 
										(0x6004U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x1000U 
										== 
										(0x5004U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x2000U 
										== 
										(0x2050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
									     << 0x1fU) 
									    | (((0U 
										!= 
										(((0x48U 
										== 
										(0x48U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x4050U 
										== 
										(0x4050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (4U 
										== 
										(0x2014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 0x1eU) 
									       | (((0U 
										!= 
										(((0x4050U 
										== 
										(0x4050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (4U 
										== 
										(0x4cU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1dU) 
										| (((0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x70U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1cU) 
										| (((0U 
										!= 
										(((4U 
										== 
										(4U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0U 
										== 
										(0x20U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1bU) 
										| (((0U 
										!= 
										(((0x4000U 
										== 
										(0x5000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1000U 
										== 
										(0x7000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x1aU) 
										| (((0x2000030U 
										== 
										(0x2004074U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x19U) 
										| (((0U 
										!= 
										(((0x48U 
										== 
										(0x48U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (4U 
										== 
										(0x1cU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x18U) 
										| (((0x40U 
										== 
										(0x58U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x17U) 
										| (((0x24U 
										== 
										(0x64U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x16U) 
										| (((0U 
										!= 
										(((0x2000U 
										== 
										(0x2050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0U 
										== 
										(0x58U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x15U) 
										| (((0U 
										!= 
										(((0x1050U 
										== 
										(0x1050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x2050U 
										== 
										(0x2050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x14U) 
										| (((0x1000U 
										== 
										(0x1000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x13U) 
										| (((0x2000U 
										== 
										(0x3000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x12U) 
										| (((0x2000050U 
										== 
										(0x2003050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0x11U) 
										| (((0U 
										!= 
										(((0x2000U 
										== 
										(0x2010U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1000U 
										== 
										(0x5000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 0x10U) 
										| (((0U 
										!= 
										(((0x2040U 
										== 
										(0x2040U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x1040U 
										== 
										(0x1040U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x40U 
										== 
										(0x50U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x40U 
										== 
										(0x2400040U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0U 
										== 
										(0x38U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x10002008U 
										== 
										(0x18002008U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))) 
										<< 0xfU) 
										| (((0x10000008U 
										== 
										(0x10000008U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xeU) 
										| (((0U 
										!= 
										(((0x4000U 
										== 
										(0x5000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x2000U 
										== 
										(0x3000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1000U 
										== 
										(0x7000U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 0xdU) 
										| (((0U 
										!= 
										(((4U 
										== 
										(0xcU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x2010U 
										== 
										(0x2030U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x10U 
										== 
										(0x1030U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x20U 
										== 
										(0x2003020U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x2020U 
										== 
										(0x2002068U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
										<< 0xcU) 
										| (((0x2004020U 
										== 
										(0x2004064U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xbU) 
										| (((0x1008U 
										== 
										(0x5048U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 0xaU) 
										| (((0x50U 
										== 
										(0x2203050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 9U) 
										| (((0x50U 
										== 
										(0x2403050U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 8U) 
										| (((0x10U 
										== 
										(0x10U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 7U) 
										| (((0U 
										!= 
										(((0x8000020U 
										== 
										(0x8000020U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x20U 
										== 
										(0x10000020U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x20U 
										== 
										(0x28U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 6U) 
										| (((0x4010U 
										== 
										(0x4014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x2010U 
										== 
										(0x6014U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0U 
										!= 
										(((0x5010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x5020U 
										== 
										(0x2007064U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
										<< 3U) 
										| (((0U 
										!= 
										(((0x40001010U 
										== 
										(0x40003054U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((0x1010U 
										== 
										(0x7034U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0x1010U 
										== 
										(0x2007054U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))) 
										<< 2U) 
										| (((0U 
										!= 
										(((0x48U 
										== 
										(0x48U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 6U) 
										| (((0x1010U 
										== 
										(0x1010U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 5U) 
										| (((0x2010U 
										== 
										(0x2010U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 4U) 
										| (((0x2008U 
										== 
										(0x2008U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 3U) 
										| (((0x10U 
										== 
										(0x50U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 2U) 
										| (((4U 
										== 
										(0xcU 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
										<< 1U) 
										| (0U 
										== 
										(0x28U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))) 
										<< 1U) 
										| (0x4008U 
										== 
										(0x4048U 
										& vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
		   << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
			      << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) 
					 << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_98_ = (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) 
						   << 3U) 
						  | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
						      << 2U) 
						     | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
							 << 1U) 
							| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
	   | (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
		     << 1U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed 
	= ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
		    << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext))) 
	   | (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
		     << 2U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4332
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 0U;
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_) 
	 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
    }
    if ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo) 
	  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid)) 
	 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_283_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_wfiWake)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_271_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid 
	= (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_) 
	    & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_decodeRemoved)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_5_ 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit 
	= (0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3) 
		   << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2) 
			      << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1) 
					 << 1U) | (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid) 
						    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1) 
						       == 
						       (0x3ffU 
							& (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
							   >> 0x16U)))) 
						   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage) 
						      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0) 
							 == 
							 (0x3ffU 
							  & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
							     >> 0xcU)))))))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_ = (
						   (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2) 
						     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3)) 
						    << 1U) 
						   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1) 
						      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4364
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4722
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
		= vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address;
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less 
	= (1U & (((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
			 >> 0x1fU)) == (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_ 
					      >> 0x1fU)))
		  ? (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub 
		     >> 0x1fU) : ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
				   ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_ 
				      >> 0x1fU) : (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						   >> 0x1fU))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4207
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID 
	= (1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			 >> 1U)));
    if ((0U == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
			 >> 7U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3386
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx1 = (3U 
						& (IData)(
							  (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							   >> 0x1dU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable1___PVT__decode_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx1][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable1___PVT__decode_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx1][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable1___PVT__decode_SRC1_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx1][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3580
    vlSymsp->TOP__dut__VexRiscv.__Vtableidx7 = (3U 
						& (IData)(
							  (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							   >> 2U)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string[0U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable7___PVT__decode_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx7][0U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string[1U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable7___PVT__decode_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx7][1U];
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string[2U] 
	= vlSymsp->TOP__dut__VexRiscv.__Vtable7___PVT__decode_SHIFT_CTRL_string
	[vlSymsp->TOP__dut__VexRiscv.__Vtableidx7][2U];
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5492
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_298_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_177_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_300_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_179_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 1U;
	    }
	}
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			  >> 0x1fU))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_ = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5520
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_298_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_178_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 1U;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_300_) {
	if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_180_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 1U;
	    }
	}
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
			  >> 0x21U))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_ = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4518
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_corrected = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_corrected = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_98_) 
						  & (~ 
						     ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_98_) 
						      - (IData)(1U))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4386
    vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5779
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4353
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5769
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_220_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
						   & (IData)(
							     (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							      >> 0xaU)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_85_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4288
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself = 0U;
    if (((((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)) 
	  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid)) 
	 & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
		    >> 0x15U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:6341
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted 
	= (1U & (~ (IData)(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5168
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_refilling 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_264_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_263_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_260_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_261_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_exception)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_exception)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_exception)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_exception))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_267_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowRead)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowRead)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowRead)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowRead))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_268_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowWrite)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowWrite)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowWrite)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowWrite))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowExecute)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowExecute)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowExecute)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowExecute))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowUser)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowUser)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowUser)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowUser))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_265_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_0)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_0)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_0)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_0))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_262_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_superPage)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_superPage)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_superPage))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:3260
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_266_ = (
						   (0U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_1)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						     ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_1)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_142_))
						      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_1)
						      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_1))));
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed 
	= ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
		    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext) 
			       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext)))) 
	   | (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
		     << 3U)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:621
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_payload = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_payload 
	    = (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
			>> 5U));
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:635
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_12_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload 
	    = (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
			 >> 2U));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_mask 
	= (0xfU & (((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_))
		     ? 1U : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_))
			      ? 3U : 0xfU)) << (3U 
						& vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4082
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_ = ((2U 
						   == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
						   ? 
						  ((2U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
						    ? 
						   (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						    & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
						     ? 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						     | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
						     : 
						    (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
						     ^ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)))
						   : 
						  ((1U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
						    ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less)
						    : vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_271_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath) {
	vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_ 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4295
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
	 & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_169_) 
	    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_170_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther 
	    = vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid;
    }
    if ((0U != ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid) 
		  & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
		 << 2U) | ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
			     & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
			    << 1U) | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
				      & (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_ = (
						   (2U 
						    & ((0x7ffffffeU 
							& ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							   >> 1U)) 
						       | (0x3ffffffeU 
							  & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							     >> 2U)))) 
						   | (1U 
						      & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							  >> 1U) 
							 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_99_) 
							    >> 3U))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4956
    vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_290_) {
	    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo)))) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready 
		    = (1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)));
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:210
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
	   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
		  >> 7U)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_3_)))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_220_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_198_ = (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid) 
						    << 1U) 
						   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_ = (0U 
						   != 
						   (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid) 
						     << 1U) 
						    | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_307_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_) 
						   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_refilling));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5128
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)
	    ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_266_) 
		<< 0x16U) | ((0x3ff000U & (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_262_)
					     ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						>> 0xcU)
					     : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_265_)) 
					   << 0xcU)) 
			     | (0xfffU & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_)))
	    : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4098
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_247_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_172_) {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_173_) 
	     == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
			  >> 0x14U)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_174_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_272_) {
	if (((0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					    >> 0x14U)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_274_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_178_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_275_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_180_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_;
	    }
	}
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4128
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_246_;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_172_) {
	if (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_173_) 
	     == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
			  >> 0xfU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_174_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_272_) {
	if (((0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
		       >> 7U)) == (0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
					    >> 0xfU)))) {
	    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		= vlSymsp->TOP__dut__VexRiscv.__PVT___zz_87_;
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_274_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_177_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_37_;
	    }
	}
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_275_) {
	if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
	    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_179_) {
		vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1 
		    = vlSymsp->TOP__dut__VexRiscv.__PVT___zz_36_;
	    }
	}
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself) 
	   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther) 
	      | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck) 
		  | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
		 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4532
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
	   + ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc) 
	      << 2U));
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	    = ((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
	        ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC
	        : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
		    ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
		    : ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
		        ? vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
		        : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_)));
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffeU & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
	= (0xfffffffdU & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4552
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_385_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_198_) 
						   & (~ 
						      ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_198_) 
						       - (IData)(1U))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4311
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4322
    vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:5759
    vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
	= vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_282_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)
						   ? vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
						   : vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_data);
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready 
	= (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)) 
		 & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt))));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4465
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
		 << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext) 
			    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext) 
				       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext)))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt = 1U;
    }
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4452
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
		 << 3U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
			    << 2U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
				       << 1U) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_286_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_287_) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid 
	= ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt)) 
	   & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready 
	= ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
	   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt)));
    // ALWAYS at /home/mam/fpga/linux/litex/litex/soc/cores/cpu/vexriscv/verilog/VexRiscv_Linux.v:4525
    vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready) {
	vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
    }
}

VL_INLINE_OPT void Vdut_VexRiscv::_sequent__TOP__dut__VexRiscv__4(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdut_VexRiscv::_sequent__TOP__dut__VexRiscv__4\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_215_ = ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_) 
						   & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_dbus_ack));
    vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready 
	= (1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_)) 
		 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_215_) 
		    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_) 
		       | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_)))));
    vlSymsp->TOP__dut__VexRiscv.__PVT___zz_306_ = (1U 
						   & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)) 
						      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready))));
}

void Vdut_VexRiscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdut_VexRiscv::_ctor_var_reset\n"); );
    // Body
    __PVT__externalResetVector = VL_RAND_RESET_I(32);
    __PVT__timerInterrupt = VL_RAND_RESET_I(1);
    __PVT__softwareInterrupt = VL_RAND_RESET_I(1);
    __PVT__externalInterruptArray = VL_RAND_RESET_I(32);
    __PVT__iBusWishbone_CYC = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_STB = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_ACK = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_WE = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_ADR = VL_RAND_RESET_I(30);
    __PVT__iBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    __PVT__iBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    __PVT__iBusWishbone_SEL = VL_RAND_RESET_I(4);
    __PVT__iBusWishbone_ERR = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_BTE = VL_RAND_RESET_I(2);
    __PVT__iBusWishbone_CTI = VL_RAND_RESET_I(3);
    __PVT__dBusWishbone_CYC = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_STB = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_ACK = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_WE = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_ADR = VL_RAND_RESET_I(30);
    __PVT__dBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    __PVT__dBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    __PVT__dBusWishbone_SEL = VL_RAND_RESET_I(4);
    __PVT__dBusWishbone_ERR = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_BTE = VL_RAND_RESET_I(2);
    __PVT__dBusWishbone_CTI = VL_RAND_RESET_I(3);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__reset = VL_RAND_RESET_I(1);
    __PVT___zz_220_ = VL_RAND_RESET_I(1);
    __PVT___zz_222_ = VL_RAND_RESET_I(1);
    __PVT___zz_225_ = VL_RAND_RESET_I(1);
    __PVT___zz_228_ = VL_RAND_RESET_I(1);
    __PVT___zz_229_ = VL_RAND_RESET_I(1);
    __PVT___zz_230_ = VL_RAND_RESET_I(32);
    __PVT___zz_231_ = VL_RAND_RESET_I(1);
    __PVT___zz_232_ = VL_RAND_RESET_I(32);
    __PVT___zz_233_ = VL_RAND_RESET_I(2);
    __PVT___zz_234_ = VL_RAND_RESET_I(1);
    __PVT___zz_235_ = VL_RAND_RESET_I(1);
    __PVT___zz_238_ = VL_RAND_RESET_I(1);
    __PVT___zz_241_ = VL_RAND_RESET_I(1);
    __PVT___zz_244_ = VL_RAND_RESET_I(1);
    __PVT___zz_246_ = VL_RAND_RESET_I(32);
    __PVT___zz_247_ = VL_RAND_RESET_I(32);
    __PVT___zz_249_ = VL_RAND_RESET_I(1);
    __PVT___zz_250_ = VL_RAND_RESET_I(1);
    __PVT___zz_251_ = VL_RAND_RESET_I(1);
    __PVT___zz_252_ = VL_RAND_RESET_I(10);
    __PVT___zz_253_ = VL_RAND_RESET_I(10);
    __PVT___zz_254_ = VL_RAND_RESET_I(10);
    __PVT___zz_255_ = VL_RAND_RESET_I(10);
    __PVT___zz_256_ = VL_RAND_RESET_I(1);
    __PVT___zz_257_ = VL_RAND_RESET_I(1);
    __PVT___zz_258_ = VL_RAND_RESET_I(1);
    __PVT___zz_259_ = VL_RAND_RESET_I(1);
    __PVT___zz_260_ = VL_RAND_RESET_I(1);
    __PVT___zz_261_ = VL_RAND_RESET_I(1);
    __PVT___zz_262_ = VL_RAND_RESET_I(1);
    __PVT___zz_263_ = VL_RAND_RESET_I(10);
    __PVT___zz_264_ = VL_RAND_RESET_I(10);
    __PVT___zz_265_ = VL_RAND_RESET_I(10);
    __PVT___zz_266_ = VL_RAND_RESET_I(10);
    __PVT___zz_267_ = VL_RAND_RESET_I(1);
    __PVT___zz_268_ = VL_RAND_RESET_I(1);
    __PVT___zz_269_ = VL_RAND_RESET_I(1);
    __PVT___zz_270_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_cpu_fetch_data = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_haltIt = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___05Fio_cpu_writeBack_mmuException = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_writeBack_accessError = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_flush_ready = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_cpu_redo = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_address = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_length = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___05Fio_mem_cmd_payload_last = VL_RAND_RESET_I(1);
    __PVT___zz_271_ = VL_RAND_RESET_I(1);
    __PVT___zz_272_ = VL_RAND_RESET_I(1);
    __PVT___zz_274_ = VL_RAND_RESET_I(1);
    __PVT___zz_275_ = VL_RAND_RESET_I(1);
    __PVT___zz_276_ = VL_RAND_RESET_I(1);
    __PVT___zz_277_ = VL_RAND_RESET_I(1);
    __PVT___zz_278_ = VL_RAND_RESET_I(1);
    __PVT___zz_279_ = VL_RAND_RESET_I(1);
    __PVT___zz_280_ = VL_RAND_RESET_I(1);
    __PVT___zz_281_ = VL_RAND_RESET_I(1);
    __PVT___zz_282_ = VL_RAND_RESET_I(1);
    __PVT___zz_283_ = VL_RAND_RESET_I(1);
    __PVT___zz_286_ = VL_RAND_RESET_I(1);
    __PVT___zz_287_ = VL_RAND_RESET_I(1);
    __PVT___zz_290_ = VL_RAND_RESET_I(1);
    __PVT___zz_292_ = VL_RAND_RESET_I(1);
    __PVT___zz_293_ = VL_RAND_RESET_I(1);
    __PVT___zz_298_ = VL_RAND_RESET_I(1);
    __PVT___zz_300_ = VL_RAND_RESET_I(1);
    __PVT___zz_302_ = VL_RAND_RESET_I(1);
    __PVT___zz_303_ = VL_RAND_RESET_I(1);
    __PVT___zz_305_ = VL_RAND_RESET_I(1);
    __PVT___zz_306_ = VL_RAND_RESET_I(1);
    __PVT___zz_307_ = VL_RAND_RESET_I(1);
    __PVT___zz_308_ = VL_RAND_RESET_I(1);
    __PVT___zz_317_ = VL_RAND_RESET_I(1);
    __PVT___zz_318_ = VL_RAND_RESET_I(1);
    __PVT___zz_319_ = VL_RAND_RESET_I(1);
    __PVT___zz_320_ = VL_RAND_RESET_I(1);
    __PVT___zz_321_ = VL_RAND_RESET_I(1);
    __PVT___zz_322_ = VL_RAND_RESET_I(1);
    __PVT___zz_323_ = VL_RAND_RESET_I(1);
    __PVT___zz_324_ = VL_RAND_RESET_I(1);
    __PVT___zz_385_ = VL_RAND_RESET_I(2);
    __PVT___zz_389_ = VL_RAND_RESET_Q(34);
    __PVT___zz_390_ = VL_RAND_RESET_Q(33);
    __PVT___zz_398_ = VL_RAND_RESET_Q(33);
    __PVT___zz_458_ = VL_RAND_RESET_I(2);
    __PVT___zz_36_ = VL_RAND_RESET_I(32);
    __PVT__decode_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_RS1 = VL_RAND_RESET_I(32);
    __PVT___zz_37_ = VL_RAND_RESET_I(32);
    __PVT___zz_55_ = VL_RAND_RESET_I(1);
    __PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT___zz_85_ = VL_RAND_RESET_I(1);
    __PVT___zz_87_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_rsp_issueDetected = VL_RAND_RESET_I(1);
    __PVT___zz_89_ = VL_RAND_RESET_I(1);
    __PVT___zz_90_ = VL_RAND_RESET_I(1);
    __PVT___zz_91_ = VL_RAND_RESET_I(1);
    __PVT___zz_92_ = VL_RAND_RESET_I(32);
    __PVT___zz_93_ = VL_RAND_RESET_I(32);
    __PVT___zz_94_ = VL_RAND_RESET_I(32);
    __PVT__decode_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_flushIt = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_isFiring = VL_RAND_RESET_I(1);
    lastStageInstruction = VL_RAND_RESET_I(32);
    lastStagePc = VL_RAND_RESET_I(32);
    lastStageIsValid = VL_RAND_RESET_I(1);
    lastStageIsFiring = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetcherHalt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetcherflushIt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_incomingInstruction = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_mmuBus_rsp_refilling = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__DBusCachedPlugin_mmuBus_rsp_refilling = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_redoBranch_valid = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_exceptionBus_valid = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_exceptionBus_payload_code = VL_RAND_RESET_I(4);
    __PVT__MmuPlugin_dBusAccess_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_dBusAccess_cmd_ready = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_dBusAccess_cmd_payload_address = VL_RAND_RESET_I(32);
    __PVT__MmuPlugin_dBusAccess_rsp_valid = VL_RAND_RESET_I(1);
    __PVT__decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__BranchPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__BranchPlugin_branchExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_selfException_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_selfException_payload_code = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_jump_pcLoad_valid = VL_RAND_RESET_I(1);
    __PVT___zz_98_ = VL_RAND_RESET_I(4);
    __PVT___zz_99_ = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_fetchPc_output_valid = VL_RAND_RESET_I(1);
    IBusCachedPlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_fetchPc_corrected = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_booted = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_1_halt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_1_inputSample = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_2_inputSample = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_inputSample = VL_RAND_RESET_I(1);
    __PVT___zz_109_ = VL_RAND_RESET_I(1);
    __PVT___zz_111_ = VL_RAND_RESET_I(1);
    __PVT___zz_112_ = VL_RAND_RESET_I(32);
    __PVT___zz_114_ = VL_RAND_RESET_I(1);
    __PVT___zz_115_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_iBusRsp_readyForError = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_decodeInput_payload_rsp_error = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_decodeInput_payload_isRvc = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_decodeRemoved = VL_RAND_RESET_I(1);
    __PVT___zz_116_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_s1_tightlyCoupledHit = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_s2_tightlyCoupledHit = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_rsp_redoFetch = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready = VL_RAND_RESET_I(1);
    __PVT___zz_117_ = VL_RAND_RESET_I(1);
    __PVT___zz_118_ = VL_RAND_RESET_I(1);
    __PVT___zz_119_ = VL_RAND_RESET_I(32);
    __PVT___zz_120_ = VL_RAND_RESET_I(32);
    __PVT___zz_121_ = VL_RAND_RESET_I(4);
    __PVT___zz_122_ = VL_RAND_RESET_I(3);
    __PVT___zz_123_ = VL_RAND_RESET_I(1);
    __PVT___zz_124_ = VL_RAND_RESET_I(1);
    __PVT___zz_125_ = VL_RAND_RESET_I(1);
    __PVT___zz_126_ = VL_RAND_RESET_I(32);
    __PVT___zz_127_ = VL_RAND_RESET_I(32);
    __PVT___zz_128_ = VL_RAND_RESET_I(4);
    __PVT___zz_129_ = VL_RAND_RESET_I(3);
    __PVT___zz_130_ = VL_RAND_RESET_I(1);
    __PVT___zz_131_ = VL_RAND_RESET_I(32);
    __PVT__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    __PVT__writeBack_DBusCachedPlugin_rspShifted = VL_RAND_RESET_I(32);
    __PVT___zz_133_ = VL_RAND_RESET_I(1);
    __PVT___zz_134_ = VL_RAND_RESET_I(32);
    __PVT___zz_135_ = VL_RAND_RESET_I(1);
    __PVT___zz_136_ = VL_RAND_RESET_I(32);
    __PVT__DBusCachedPlugin_forceDatapath = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_status_sum = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_status_mxr = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_status_mprv = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_satp_mode = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_satp_ppn = VL_RAND_RESET_I(20);
    __PVT__MmuPlugin_ports_0_cache_0_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_0_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_0_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_0_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_0_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_0_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_0_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_0_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_0_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_1_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_1_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_1_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_1_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_2_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_2_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_2_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_2_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_3_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_3_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_0_cache_3_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cache_3_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cacheHits_1 = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cacheHits_2 = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cacheHits_3 = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_cacheHit = VL_RAND_RESET_I(1);
    __PVT___zz_139_ = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_ports_0_entryToReplace_willIncrement = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_0_entryToReplace_valueNext = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_ports_0_entryToReplace_value = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_ports_0_requireMmuLockup = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_0_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_0_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_0_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_0_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_1_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_1_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_1_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_1_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_2_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_2_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_2_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_2_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_valid = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_superPage = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_3_physicalAddress_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_3_physicalAddress_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_ports_1_cache_3_allowRead = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_allowWrite = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_allowExecute = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cache_3_allowUser = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cacheHits_1 = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cacheHits_2 = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cacheHits_3 = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_cacheHit = VL_RAND_RESET_I(1);
    __PVT___zz_142_ = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_ports_1_entryToReplace_willIncrement = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_ports_1_entryToReplace_valueNext = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_ports_1_entryToReplace_value = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_ports_1_requireMmuLockup = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_state_1_ = VL_RAND_RESET_I(3);
    __PVT__MmuPlugin_shared_vpn_0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_shared_vpn_1 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_shared_portId = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_dBusRsp_exception = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_dBusRsp_leaf = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_V = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_R = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_W = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_X = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_U = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_G = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_A = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_D = VL_RAND_RESET_I(1);
    __PVT__MmuPlugin_shared_pteBuffer_RSW = VL_RAND_RESET_I(2);
    __PVT__MmuPlugin_shared_pteBuffer_PPN0 = VL_RAND_RESET_I(10);
    __PVT__MmuPlugin_shared_pteBuffer_PPN1 = VL_RAND_RESET_I(12);
    __PVT___zz_143_ = VL_RAND_RESET_Q(35);
    lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    __PVT___zz_159_ = VL_RAND_RESET_I(1);
    __PVT___zz_161_ = VL_RAND_RESET_I(32);
    __PVT___zz_163_ = VL_RAND_RESET_I(20);
    __PVT___zz_165_ = VL_RAND_RESET_I(20);
    __PVT___zz_166_ = VL_RAND_RESET_I(32);
    __PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    __PVT__execute_SrcPlugin_less = VL_RAND_RESET_I(1);
    __PVT___zz_167_ = VL_RAND_RESET_I(32);
    __PVT__execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    __PVT___zz_168_ = VL_RAND_RESET_I(32);
    __PVT___zz_169_ = VL_RAND_RESET_I(1);
    __PVT___zz_170_ = VL_RAND_RESET_I(1);
    __PVT___zz_171_ = VL_RAND_RESET_I(1);
    __PVT___zz_172_ = VL_RAND_RESET_I(1);
    __PVT___zz_173_ = VL_RAND_RESET_I(5);
    __PVT___zz_174_ = VL_RAND_RESET_I(32);
    __PVT___zz_177_ = VL_RAND_RESET_I(1);
    __PVT___zz_178_ = VL_RAND_RESET_I(1);
    __PVT___zz_179_ = VL_RAND_RESET_I(1);
    __PVT___zz_180_ = VL_RAND_RESET_I(1);
    __PVT__execute_BranchPlugin_eq = VL_RAND_RESET_I(1);
    __PVT___zz_185_ = VL_RAND_RESET_I(11);
    __PVT___zz_187_ = VL_RAND_RESET_I(20);
    __PVT___zz_189_ = VL_RAND_RESET_I(19);
    __PVT___zz_191_ = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_mtvec_mode = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_mtvec_base = VL_RAND_RESET_I(30);
    __PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mscratch = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_mtval = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_mcycle = VL_RAND_RESET_Q(64);
    __PVT__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    __PVT__CsrPlugin_medeleg_IAM = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_IAF = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_II = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_LAM = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_LAF = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_SAM = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_SAF = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_EU = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_ES = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_IPF = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_LPF = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_medeleg_SPF = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mideleg_ST = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mideleg_SE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mideleg_SS = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sstatus_SIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sstatus_SPIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sstatus_SPP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sip_SEIP_SOFT = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sip_SEIP_INPUT = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sip_SEIP_OR = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sip_STIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sip_SSIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sie_SEIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sie_STIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_sie_SSIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_stvec_mode = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_stvec_base = VL_RAND_RESET_I(30);
    __PVT__CsrPlugin_sscratch = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_scause_interrupt = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_scause_exceptionCode = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_stval = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_sepc = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_satp_PPN = VL_RAND_RESET_I(22);
    __PVT__CsrPlugin_satp_ASID = VL_RAND_RESET_I(9);
    __PVT__CsrPlugin_satp_MODE = VL_RAND_RESET_I(1);
    __PVT___zz_192_ = VL_RAND_RESET_I(1);
    __PVT___zz_193_ = VL_RAND_RESET_I(1);
    __PVT___zz_194_ = VL_RAND_RESET_I(1);
    __PVT___zz_195_ = VL_RAND_RESET_I(1);
    __PVT___zz_196_ = VL_RAND_RESET_I(1);
    __PVT___zz_197_ = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = VL_RAND_RESET_I(2);
    __PVT___zz_198_ = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_lastStageWasWfi = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_pipelineLiberator_done = VL_RAND_RESET_I(1);
    CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_hadException = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_targetPrivilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_trapCause = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_xtvec_mode = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    execute_CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_wfiWake = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_blockedBySideEffects = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_illegalAccess = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_illegalInstruction = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_readData = VL_RAND_RESET_I(32);
    __PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_readToWriteData = VL_RAND_RESET_I(32);
    __PVT__execute_CsrPlugin_writeData = VL_RAND_RESET_I(32);
    __PVT__memory_MulDivIterativePlugin_rs1 = VL_RAND_RESET_Q(33);
    __PVT__memory_MulDivIterativePlugin_rs2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65,__PVT__memory_MulDivIterativePlugin_accumulator);
    __PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__memory_MulDivIterativePlugin_mul_counter_willClear = VL_RAND_RESET_I(1);
    __PVT__memory_MulDivIterativePlugin_mul_counter_valueNext = VL_RAND_RESET_I(6);
    __PVT__memory_MulDivIterativePlugin_mul_counter_value = VL_RAND_RESET_I(6);
    __PVT__memory_MulDivIterativePlugin_div_needRevert = VL_RAND_RESET_I(1);
    __PVT__memory_MulDivIterativePlugin_div_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__memory_MulDivIterativePlugin_div_counter_willClear = VL_RAND_RESET_I(1);
    __PVT__memory_MulDivIterativePlugin_div_counter_valueNext = VL_RAND_RESET_I(6);
    __PVT__memory_MulDivIterativePlugin_div_counter_value = VL_RAND_RESET_I(6);
    __PVT__memory_MulDivIterativePlugin_div_done = VL_RAND_RESET_I(1);
    __PVT__memory_MulDivIterativePlugin_div_result = VL_RAND_RESET_I(32);
    __PVT___zz_201_ = VL_RAND_RESET_Q(33);
    __PVT___zz_202_ = VL_RAND_RESET_Q(33);
    __PVT___zz_203_ = VL_RAND_RESET_I(32);
    __PVT___zz_204_ = VL_RAND_RESET_I(1);
    __PVT___zz_205_ = VL_RAND_RESET_I(1);
    __PVT___zz_206_ = VL_RAND_RESET_Q(33);
    __PVT__externalInterruptArray_regNext = VL_RAND_RESET_I(32);
    __PVT___zz_207_ = VL_RAND_RESET_I(32);
    __PVT___zz_208_ = VL_RAND_RESET_I(32);
    __PVT___zz_209_ = VL_RAND_RESET_I(32);
    __PVT___zz_210_ = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_BRANCH_DO = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_MEMORY_LRSC = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_SHIFT_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_MEMORY_MANAGMENT = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_SHIFT_RIGHT = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(2);
    __PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_SRC2_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_CSR_READ_OPCODE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_MEMORY_AMO = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC1_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_IS_RS1_SIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_DIV = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_DIV = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    __PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_IS_DBUS_SHARING = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_IS_DBUS_SHARING = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_SFENCE_VMA = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_SFENCE_VMA = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_IS_SFENCE_VMA = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_RS1 = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_BRANCH_CALC = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_IS_RS2_SIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    __PVT___zz_211_ = VL_RAND_RESET_I(3);
    __PVT___zz_212_ = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    __PVT___zz_213_ = VL_RAND_RESET_I(3);
    __PVT___zz_215_ = VL_RAND_RESET_I(1);
    __PVT___zz_217_ = VL_RAND_RESET_I(1);
    __PVT___zz_219_ = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96,__PVT__decode_SRC1_CTRL_string);
    VL_RAND_RESET_W(72,__PVT__decode_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72,__PVT__memory_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72,__PVT__execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(96,__PVT__execute_SRC1_CTRL_string);
    __PVT__MmuPlugin_shared_state_1___05Fstring = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(72,__PVT__decode_to_execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72,__PVT__execute_to_memory_SHIFT_CTRL_string);
    VL_RAND_RESET_W(96,__PVT__decode_to_execute_SRC1_CTRL_string);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__IBusCachedPlugin_cache__DOT___zz_10_ = VL_RAND_RESET_I(22);
    __PVT__IBusCachedPlugin_cache__DOT___zz_11_ = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT___zz_12_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_13_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_1_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_2_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_address = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    __PVT__IBusCachedPlugin_cache__DOT___zz_3_ = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    __PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
	    __PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__IBusCachedPlugin_cache__DOT__ways_0_datas[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__dataCache_1___DOT___zz_10_ = VL_RAND_RESET_I(22);
    __PVT__dataCache_1___DOT___zz_12_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_13_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_14_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_16_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_17_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_18_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_19_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_20_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_21_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_22_ = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT___zz_25_ = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT___zz_36_ = VL_RAND_RESET_I(2);
    __PVT__dataCache_1___DOT___zz_1_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT___zz_2_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsReadCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsReadCmd_payload = VL_RAND_RESET_I(7);
    __PVT__dataCache_1___DOT__tagsWriteCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_address = VL_RAND_RESET_I(7);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address = VL_RAND_RESET_I(20);
    __PVT__dataCache_1___DOT__tagsWriteLastCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_address = VL_RAND_RESET_I(7);
    __PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_address = VL_RAND_RESET_I(20);
    __PVT__dataCache_1___DOT__dataReadCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__dataReadCmd_payload = VL_RAND_RESET_I(10);
    __PVT__dataCache_1___DOT__dataWriteCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_address = VL_RAND_RESET_I(10);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__dataWriteCmd_payload_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT___zz_5_ = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stage0_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT__stageA_request_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageA_request_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageA_request_size = VL_RAND_RESET_I(2);
    __PVT__dataCache_1___DOT__stageA_request_isLrsc = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageA_request_isAmo = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageA_request_amoCtrl_swap = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageA_request_amoCtrl_alu = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__stageA_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT__stage0_colisions_regNextWhen = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_request_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_request_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_request_size = VL_RAND_RESET_I(2);
    __PVT__dataCache_1___DOT__stageB_request_isLrsc = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_isAmo = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__stageB_mmuRspFreeze = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_exception = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mmuRsp_refilling = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_address = VL_RAND_RESET_I(20);
    __PVT__dataCache_1___DOT__stageB_dataReadRsp_0 = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_waysHits = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1___DOT__stageB_colisions = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_loaderValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_flusher_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_lrsc_reserved = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_requestDataBypass = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_amo_resultRegValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__stageB_amo_resultReg = VL_RAND_RESET_I(32);
    __PVT__dataCache_1___DOT__stageB_memCmdSent = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_counter_valueNext = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__loader_counter_value = VL_RAND_RESET_I(3);
    __PVT__dataCache_1___DOT__loader_counter_willOverflow = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_waysAllocator = VL_RAND_RESET_I(1);
    __PVT__dataCache_1___DOT__loader_error = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    __PVT__dataCache_1___DOT__ways_0_data_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__dataCache_1___DOT___zz_38_ = VL_RAND_RESET_I(8);
    __PVT__dataCache_1___DOT___zz_39_ = VL_RAND_RESET_I(8);
    __PVT__dataCache_1___DOT___zz_40_ = VL_RAND_RESET_I(8);
    __PVT__dataCache_1___DOT___zz_41_ = VL_RAND_RESET_I(8);
    __Vtableidx1 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(96,__Vtable1___PVT__decode_SRC1_CTRL_string[0],0x52532020,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable1___PVT__decode_SRC1_CTRL_string[1],0x494d5520,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable1___PVT__decode_SRC1_CTRL_string[2],0x50435f49,0x4e435245,0x4d454e54);
    VL_CONST_W_3X(96,__Vtable1___PVT__decode_SRC1_CTRL_string[3],0x55525331,0x20202020,0x20202020);
    __Vtableidx7 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(72,__Vtable7___PVT__decode_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable7___PVT__decode_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable7___PVT__decode_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable7___PVT__decode_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx11 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx13 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx15 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[0],0x52532020,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[1],0x494d5520,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[2],0x50435f49,0x4e435245,0x4d454e54);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[3],0x55525331,0x20202020,0x20202020);
    __Vtableidx19 = VL_RAND_RESET_I(3);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[0] = VL_ULL(0x49444c452020);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[1] = VL_ULL(0x4c315f434d44);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[2] = VL_ULL(0x4c315f525350);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[3] = VL_ULL(0x4c305f434d44);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[4] = VL_ULL(0x4c305f525350);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[5] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[6] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable19___PVT__MmuPlugin_shared_state_1___05Fstring[7] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtableidx22 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx23 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx24 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(96,__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string[0],0x52532020,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string[1],0x494d5520,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string[2],0x50435f49,0x4e435245,0x4d454e54);
    VL_CONST_W_3X(96,__Vtable24___PVT__decode_to_execute_SRC1_CTRL_string[3],0x55525331,0x20202020,0x20202020);
    __Vtableidx25 = VL_RAND_RESET_I(3);
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[0] = 0U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[1] = 1U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[2] = 0U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[3] = 1U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[4] = 0U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[5] = 0U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[6] = 0U;
    __Vtable25___PVT__MmuPlugin_dBusAccess_cmd_valid[7] = 0U;
}
