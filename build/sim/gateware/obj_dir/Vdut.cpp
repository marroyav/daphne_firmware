// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut.h"
#include "Vdut__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vdut) {
    Vdut__Syms* __restrict vlSymsp = __VlSymsp = new Vdut__Syms(this, name());
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(dut, Vdut_dut);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdut::__Vconfigure(Vdut__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdut::~Vdut() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vdut::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdut::eval\n"); );
    Vdut__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vdut::_eval_initial_loop(Vdut__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vdut::_settle__TOP__1(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_settle__TOP__1\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->serial_source_valid = vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable;
    vlTOPp->serial_sink_ready = (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0));
    vlTOPp->serial_source_data = vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_payload_data;
}

void Vdut::_eval(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_eval\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk)))) {
	vlSymsp->TOP__dut._sequent__TOP__dut__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__dut__VexRiscv._sequent__TOP__dut__VexRiscv__3(vlSymsp);
	vlTOPp->_settle__TOP__1(vlSymsp);
	vlSymsp->TOP__dut._sequent__TOP__dut__5(vlSymsp);
	vlSymsp->TOP__dut__VexRiscv._sequent__TOP__dut__VexRiscv__4(vlSymsp);
    }
    vlSymsp->TOP__dut._combo__TOP__dut__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

void Vdut::_eval_initial(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_eval_initial\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dut._initial__TOP__dut__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__dut__VexRiscv._initial__TOP__dut__VexRiscv__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

void Vdut::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::final\n"); );
    // Variables
    Vdut__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdut::_eval_settle(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_eval_settle\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dut._settle__TOP__dut__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__dut__VexRiscv._settle__TOP__dut__VexRiscv__2(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__dut._settle__TOP__dut__3(vlSymsp);
}

VL_INLINE_OPT QData Vdut::_change_request(Vdut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_change_request\n"); );
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdut::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sys_clk & 0xfeU))) {
	Verilated::overWidthError("sys_clk");}
    if (VL_UNLIKELY((serial_source_ready & 0xfeU))) {
	Verilated::overWidthError("serial_source_ready");}
    if (VL_UNLIKELY((serial_sink_valid & 0xfeU))) {
	Verilated::overWidthError("serial_sink_valid");}
}
#endif // VL_DEBUG

void Vdut::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut::_ctor_var_reset\n"); );
    // Body
    sys_clk = VL_RAND_RESET_I(1);
    serial_source_valid = VL_RAND_RESET_I(1);
    serial_source_ready = VL_RAND_RESET_I(1);
    serial_source_data = VL_RAND_RESET_I(8);
    serial_sink_valid = VL_RAND_RESET_I(1);
    serial_sink_ready = VL_RAND_RESET_I(1);
    serial_sink_data = VL_RAND_RESET_I(8);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
