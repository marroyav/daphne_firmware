// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


//======================

void Vdut::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdut* t=(Vdut*)userthis;
    Vdut__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vdut::traceChgThis(Vdut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vdut::traceChgThis__2(Vdut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlSymsp->TOP__dut.__PVT__builder_array_muxed7),2);
    }
}

void Vdut::traceChgThis__3(Vdut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+2,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable));
	vcdp->chgBus(c+3,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_payload_data),8);
	vcdp->chgBit(c+4,((0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0))));
	vcdp->chgBit(c+5,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					     >> 9U))) 
			    & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			   & (0U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBit(c+6,((1U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_dat_w))));
	vcdp->chgBus(c+7,(vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage_full),32);
	vcdp->chgBit(c+8,(vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_re));
	vcdp->chgBus(c+9,(vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors),32);
	vcdp->chgBit(c+10,(vlSymsp->TOP__dut.__PVT__builder_error));
	vcdp->chgBus(c+11,(vlSymsp->TOP__dut.__PVT__builder_shared_dat_r),32);
	vcdp->chgBit(c+12,(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_CYC));
	vcdp->chgBit(c+13,(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_STB));
	vcdp->chgBit(c+14,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_ibus_ack));
	vcdp->chgBit(c+15,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_dbus_ack));
	vcdp->chgBus(c+16,(((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_))
			     ? ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_)
				 ? 7U : 2U) : 0U)),3);
	vcdp->chgBus(c+17,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_interrupt0),32);
	vcdp->chgBit(c+18,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_latch_re));
	vcdp->chgQuad(c+19,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status),64);
	vcdp->chgQuad(c+21,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full),64);
	vcdp->chgBit(c+23,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_re));
	vcdp->chgBit(c+24,((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time 
			    >= vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp)));
	vcdp->chgQuad(c+25,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time),64);
	vcdp->chgQuad(c+27,(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp),64);
	vcdp->chgBus(c+29,(vlSymsp->TOP__dut.__PVT__builder_array_muxed0),30);
	vcdp->chgBus(c+30,(vlSymsp->TOP__dut.__PVT__builder_array_muxed1),32);
	vcdp->chgBus(c+31,(vlSymsp->TOP__dut.__PVT__builder_array_muxed2),4);
	vcdp->chgBit(c+32,(((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
			    & (IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel))));
	vcdp->chgBit(c+33,(vlSymsp->TOP__dut.__PVT__builder_array_muxed4));
	vcdp->chgBit(c+34,(vlSymsp->TOP__dut.__PVT__main_soclinux_rom_bus_ack));
	vcdp->chgBit(c+35,(vlSymsp->TOP__dut.__PVT__builder_array_muxed5));
	vcdp->chgBus(c+36,(vlSymsp->TOP__dut.__PVT__builder_array_muxed6),3);
	vcdp->chgBus(c+37,((0x1fffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0)),13);
	vcdp->chgBus(c+38,(vlSymsp->TOP__dut.__PVT__mem_1
			   [vlSymsp->TOP__dut.__PVT__memadr]),32);
	vcdp->chgBit(c+39,(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_cyc));
	vcdp->chgBit(c+40,(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_bus_ack));
	vcdp->chgBus(c+41,((0x3ffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0)),10);
	vcdp->chgBus(c+42,(vlSymsp->TOP__dut.__PVT__main_soclinux_sram_we),4);
	vcdp->chgBus(c+43,(vlSymsp->TOP__dut.__PVT__mem_2
			   [vlSymsp->TOP__dut.__PVT__memadr_1]),32);
	vcdp->chgBit(c+44,(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_cyc));
	vcdp->chgBit(c+45,(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_bus_ack));
	vcdp->chgBus(c+46,((0x7fffffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0)),23);
	vcdp->chgBus(c+47,(vlSymsp->TOP__dut.__PVT__main_soclinux_main_ram_we),4);
	vcdp->chgBus(c+48,(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr),14);
	vcdp->chgBit(c+49,(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we));
	vcdp->chgBus(c+50,(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_dat_w),8);
	vcdp->chgBus(c+51,((((((IData)(vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r) 
			       | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r)) 
			      | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r)) 
			     | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r)) 
			    | (IData)(vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r))),8);
	vcdp->chgBus(c+52,(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_dat_r),32);
	vcdp->chgBit(c+53,(((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3) 
			    & ((IData)(vlSymsp->TOP__dut.__PVT__builder_slave_sel) 
			       >> 3U))));
	vcdp->chgBit(c+54,(vlSymsp->TOP__dut.__PVT__main_soclinux_bus_wishbone_ack));
	vcdp->chgBus(c+55,(vlSymsp->TOP__dut.__PVT__main_soclinux_counter),2);
	vcdp->chgBus(c+56,(vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage_full),32);
	vcdp->chgBit(c+57,(vlSymsp->TOP__dut.__PVT__main_soclinux_load_re));
	vcdp->chgBus(c+58,(vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage_full),32);
	vcdp->chgBit(c+59,(vlSymsp->TOP__dut.__PVT__main_soclinux_reload_re));
	vcdp->chgBit(c+60,(vlSymsp->TOP__dut.__PVT__main_soclinux_en_storage_full));
	vcdp->chgBit(c+61,(vlSymsp->TOP__dut.__PVT__main_soclinux_en_re));
	vcdp->chgBit(c+62,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					      >> 9U))) 
			     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			    & (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+63,(vlSymsp->TOP__dut.__PVT__main_soclinux_value_status),32);
	vcdp->chgBit(c+64,(((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending) 
			    & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage_full))));
	vcdp->chgBit(c+65,((0U != vlSymsp->TOP__dut.__PVT__main_soclinux_value)));
	vcdp->chgBit(c+66,(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_pending));
	vcdp->chgBit(c+67,(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_clear));
	vcdp->chgBit(c+68,(vlSymsp->TOP__dut.__PVT__main_soclinux_zero_old_trigger));
	vcdp->chgBit(c+69,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					      >> 9U))) 
			     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			    & (0xeU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBit(c+70,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					      >> 9U))) 
			     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			    & (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBit(c+71,(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_storage_full));
	vcdp->chgBit(c+72,(vlSymsp->TOP__dut.__PVT__main_soclinux_eventmanager_re));
	vcdp->chgBus(c+73,(vlSymsp->TOP__dut.__PVT__main_soclinux_value),32);
	vcdp->chgBit(c+74,((((4U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					      >> 9U))) 
			     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			    & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr)))));
	vcdp->chgBit(c+75,(vlSymsp->TOP__dut.__PVT__main_int_rst));
	vcdp->chgBus(c+76,(vlSymsp->TOP__dut.__PVT__mem_3
			   [vlSymsp->TOP__dut.__PVT__memadr_2]),32);
	vcdp->chgBit(c+77,(vlSymsp->TOP__dut.__PVT__main_bus_cyc));
	vcdp->chgBit(c+78,(vlSymsp->TOP__dut.__PVT__main_bus_ack));
	vcdp->chgBus(c+79,((0xfffU & vlSymsp->TOP__dut.__PVT__builder_array_muxed0)),12);
	vcdp->chgBus(c+80,(vlSymsp->TOP__dut.__PVT__main_we),4);
	vcdp->chgBit(c+81,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_first));
	vcdp->chgBit(c+82,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_fifo_out_last));
	vcdp->chgBit(c+83,(vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re));
	vcdp->chgBus(c+84,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_payload_data),8);
	vcdp->chgBit(c+85,((0x10U == (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0))));
	vcdp->chgBit(c+86,((1U & (~ (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)))));
	vcdp->chgBit(c+87,((1U & (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w) 
				   & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage_full)) 
				  | (((IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w) 
				      & (IData)(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage_full)) 
				     >> 1U)))));
	vcdp->chgBit(c+88,(vlSymsp->TOP__dut.__PVT__main_uart_tx_pending));
	vcdp->chgBit(c+89,(vlSymsp->TOP__dut.__PVT__main_uart_tx_clear));
	vcdp->chgBit(c+90,(vlSymsp->TOP__dut.__PVT__main_uart_tx_old_trigger));
	vcdp->chgBit(c+91,(vlSymsp->TOP__dut.__PVT__main_uart_rx_pending));
	vcdp->chgBit(c+92,(vlSymsp->TOP__dut.__PVT__main_uart_rx_clear));
	vcdp->chgBit(c+93,(vlSymsp->TOP__dut.__PVT__main_uart_rx_old_trigger));
	vcdp->chgBit(c+94,((((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					      >> 9U))) 
			     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			    & (3U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+95,((3U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_dat_w))),2);
	vcdp->chgBus(c+96,(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_status_w),2);
	vcdp->chgBit(c+97,(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_re));
	vcdp->chgBus(c+98,(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_pending_w),2);
	vcdp->chgBus(c+99,(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_storage_full),2);
	vcdp->chgBit(c+100,(vlSymsp->TOP__dut.__PVT__main_uart_eventmanager_re));
	vcdp->chgBit(c+101,((0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0))));
	vcdp->chgBit(c+102,((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0))));
	vcdp->chgBus(c+103,(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_dat_w),10);
	vcdp->chgBus(c+104,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0),5);
	vcdp->chgBus(c+105,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_produce),4);
	vcdp->chgBus(c+106,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_consume),4);
	vcdp->chgBus(c+107,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_wrport_adr),4);
	vcdp->chgBit(c+108,(((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rxtx_re) 
			     & (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0)))));
	vcdp->chgBus(c+109,((0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_level0) 
				      + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_readable)))),5);
	vcdp->chgBit(c+110,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable));
	vcdp->chgBit(c+111,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_first));
	vcdp->chgBit(c+112,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_fifo_out_last));
	vcdp->chgBit(c+113,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_syncfifo_re));
	vcdp->chgBit(c+114,((0U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0))));
	vcdp->chgBus(c+115,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0),5);
	vcdp->chgBus(c+116,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_produce),4);
	vcdp->chgBus(c+117,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_consume),4);
	vcdp->chgBus(c+118,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_wrport_adr),4);
	vcdp->chgBit(c+119,(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_do_read));
	vcdp->chgBus(c+120,((0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0) 
				      + (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_readable)))),5);
	vcdp->chgBit(c+121,(vlSymsp->TOP__dut.__PVT__builder_array_muxed3));
	vcdp->chgBit(c+122,(vlSymsp->TOP__dut.__PVT__builder_shared_ack));
	vcdp->chgBus(c+123,(vlSymsp->TOP__dut.__PVT__builder_request),2);
	vcdp->chgBit(c+124,(vlSymsp->TOP__dut.__PVT__builder_grant));
	vcdp->chgBus(c+125,(vlSymsp->TOP__dut.__PVT__builder_slave_sel),5);
	vcdp->chgBus(c+126,(vlSymsp->TOP__dut.__PVT__builder_slave_sel_r),5);
	vcdp->chgBit(c+127,((((IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed4) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__builder_array_muxed3)) 
			     & (~ (IData)(vlSymsp->TOP__dut.__PVT__builder_shared_ack)))));
	vcdp->chgBit(c+128,((0U == vlSymsp->TOP__dut.__PVT__builder_count)));
	vcdp->chgBus(c+129,(vlSymsp->TOP__dut.__PVT__builder_count),20);
	vcdp->chgBus(c+130,(vlSymsp->TOP__dut.__PVT__builder_interface0_bank_bus_dat_r),8);
	vcdp->chgBit(c+131,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+132,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 0x38U)))),8);
	vcdp->chgBit(c+133,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+134,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 0x30U)))),8);
	vcdp->chgBit(c+135,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (3U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+136,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 0x28U)))),8);
	vcdp->chgBit(c+137,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (4U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+138,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 0x20U)))),8);
	vcdp->chgBit(c+139,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (5U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+140,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 0x18U)))),8);
	vcdp->chgBit(c+141,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (6U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+142,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 0x10U)))),8);
	vcdp->chgBit(c+143,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (7U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+144,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status 
					      >> 8U)))),8);
	vcdp->chgBit(c+145,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (8U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+146,((0xffU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_status))),8);
	vcdp->chgBit(c+147,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (9U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+148,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 0x38U)))),8);
	vcdp->chgBit(c+149,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+150,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 0x30U)))),8);
	vcdp->chgBit(c+151,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xbU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+152,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 0x28U)))),8);
	vcdp->chgBit(c+153,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xcU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+154,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 0x20U)))),8);
	vcdp->chgBit(c+155,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xdU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+156,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 0x18U)))),8);
	vcdp->chgBit(c+157,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xeU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+158,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 0x10U)))),8);
	vcdp->chgBit(c+159,((((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xfU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+160,((0xffU & (IData)((vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full 
					      >> 8U)))),8);
	vcdp->chgBit(c+161,(vlSymsp->TOP__dut.__PVT__builder_csrbank0_timer_time_cmp0_re));
	vcdp->chgBus(c+162,((0xffU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_time_cmp_storage_full))),8);
	vcdp->chgBit(c+163,((1U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					     >> 9U)))));
	vcdp->chgBus(c+164,(vlSymsp->TOP__dut.__PVT__builder_interface1_bank_bus_dat_r),8);
	vcdp->chgBit(c+165,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (1U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+166,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage_full 
				      >> 0x18U))),8);
	vcdp->chgBit(c+167,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (2U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+168,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage_full 
				      >> 0x10U))),8);
	vcdp->chgBit(c+169,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (3U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+170,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage_full 
				      >> 8U))),8);
	vcdp->chgBit(c+171,(vlSymsp->TOP__dut.__PVT__builder_csrbank1_scratch0_re));
	vcdp->chgBus(c+172,((0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_storage_full)),8);
	vcdp->chgBit(c+173,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (5U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+174,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
				      >> 0x18U))),8);
	vcdp->chgBit(c+175,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (6U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+176,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
				      >> 0x10U))),8);
	vcdp->chgBit(c+177,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (7U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+178,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors 
				      >> 8U))),8);
	vcdp->chgBit(c+179,((((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (8U == (0xfU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+180,((0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_ctrl_bus_errors)),8);
	vcdp->chgBit(c+181,((0U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					     >> 9U)))));
	vcdp->chgBus(c+182,(vlSymsp->TOP__dut.__PVT__builder_interface2_bank_bus_dat_r),8);
	vcdp->chgBit(c+183,((4U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					     >> 9U)))));
	vcdp->chgBus(c+184,(vlSymsp->TOP__dut.__PVT__builder_interface3_bank_bus_dat_r),8);
	vcdp->chgBit(c+185,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+186,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage_full 
				      >> 0x18U))),8);
	vcdp->chgBit(c+187,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (1U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+188,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage_full 
				      >> 0x10U))),8);
	vcdp->chgBit(c+189,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (2U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+190,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage_full 
				      >> 8U))),8);
	vcdp->chgBit(c+191,(vlSymsp->TOP__dut.__PVT__builder_csrbank3_load0_re));
	vcdp->chgBus(c+192,((0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_load_storage_full)),8);
	vcdp->chgBit(c+193,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (4U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+194,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage_full 
				      >> 0x18U))),8);
	vcdp->chgBit(c+195,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (5U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+196,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage_full 
				      >> 0x10U))),8);
	vcdp->chgBit(c+197,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (6U == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+198,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage_full 
				      >> 8U))),8);
	vcdp->chgBit(c+199,(vlSymsp->TOP__dut.__PVT__builder_csrbank3_reload0_re));
	vcdp->chgBus(c+200,((0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_reload_storage_full)),8);
	vcdp->chgBit(c+201,(vlSymsp->TOP__dut.__PVT__builder_csrbank3_en0_re));
	vcdp->chgBit(c+202,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xaU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+203,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
				      >> 0x18U))),8);
	vcdp->chgBit(c+204,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xbU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+205,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
				      >> 0x10U))),8);
	vcdp->chgBit(c+206,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xcU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+207,((0xffU & (vlSymsp->TOP__dut.__PVT__main_soclinux_value_status 
				      >> 8U))),8);
	vcdp->chgBit(c+208,((((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (0xdU == (0x1fU & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBus(c+209,((0xffU & vlSymsp->TOP__dut.__PVT__main_soclinux_value_status)),8);
	vcdp->chgBit(c+210,(vlSymsp->TOP__dut.__PVT__builder_csrbank3_ev_enable0_re));
	vcdp->chgBit(c+211,((3U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					     >> 9U)))));
	vcdp->chgBus(c+212,(vlSymsp->TOP__dut.__PVT__builder_interface4_bank_bus_dat_r),8);
	vcdp->chgBit(c+213,((((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (1U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBit(c+214,((((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					       >> 9U))) 
			      & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_we)) 
			     & (2U == (7U & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr))))));
	vcdp->chgBit(c+215,(vlSymsp->TOP__dut.__PVT__builder_csrbank4_ev_enable0_re));
	vcdp->chgBit(c+216,((2U == (0x1fU & ((IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_interface_adr) 
					     >> 9U)))));
	vcdp->chgBit(c+217,(vlSymsp->TOP__dut.__Vcellinp__VexRiscv__reset));
	vcdp->chgBit(c+218,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
	vcdp->chgBus(c+219,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_data),32);
	vcdp->chgBus(c+220,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress),32);
	vcdp->chgBit(c+221,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_222_));
	vcdp->chgBit(c+222,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
			     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt))));
	vcdp->chgBit(c+223,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
	vcdp->chgBit(c+224,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_238_));
	vcdp->chgBit(c+225,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
				   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt)))));
	vcdp->chgBit(c+226,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_haltIt));
	vcdp->chgBus(c+227,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data),32);
	vcdp->chgBit(c+228,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_mmuException));
	vcdp->chgBit(c+229,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess));
	vcdp->chgBit(c+230,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError));
	vcdp->chgBit(c+231,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_flush_ready));
	vcdp->chgBit(c+232,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_redo));
	vcdp->chgBit(c+233,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid));
	vcdp->chgBit(c+234,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr));
	vcdp->chgBus(c+235,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address),32);
	vcdp->chgBus(c+236,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass),32);
	vcdp->chgBus(c+237,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length),3);
	vcdp->chgBit(c+238,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last));
	vcdp->chgBit(c+239,((1U & ((IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					    >> 0x16U)) 
				   & (~ (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						 >> 0x20U)))))));
	vcdp->chgBit(c+240,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0xcU)))));
	vcdp->chgBit(c+241,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x1aU)))));
	vcdp->chgBus(c+242,((0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
					      ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1
					      : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC) 
					    + ((2U 
						== (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
					        ? (
						   ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_) 
						    << 0x15U) 
						   | ((0x100000U 
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
					        : (
						   (3U 
						    == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
						    ? 
						   ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_187_ 
						     << 0xcU) 
						    | (0xfffU 
						       & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
							  >> 0x14U)))
						    : 
						   ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ 
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
								   >> 7U))))))))))),32);
	vcdp->chgBus(c+243,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x17U)))),2);
	vcdp->chgBus(c+244,(((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
			      ? ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				  ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
				     & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
				  : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				      ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
					 | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
				      : (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
					 ^ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)))
			      : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
				  ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less)
				  : vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
	vcdp->chgBit(c+245,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x11U)))));
	vcdp->chgBit(c+246,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready))));
	vcdp->chgBus(c+247,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x12U)))),2);
	vcdp->chgBus(c+248,((3U & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_)),2);
	vcdp->chgBit(c+249,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0xbU)))));
	vcdp->chgBit(c+250,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0xdU)))));
	vcdp->chgBus(c+251,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x1dU)))),2);
	vcdp->chgBit(c+252,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 6U)))));
	vcdp->chgBit(c+253,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x22U)))));
	vcdp->chgBit(c+254,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 7U)))));
	vcdp->chgBus(c+255,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x1bU)))),2);
	vcdp->chgBus(c+256,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 8U)))),2);
	vcdp->chgBit(c+257,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x10U)))));
	vcdp->chgBus(c+258,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 4U)))),2);
	vcdp->chgBus(c+259,((IData)((VL_ULL(0x1ffffffff) 
				     & VL_SHIFTRS_QQI(33,33,5, 
						      (((QData)((IData)(
									((3U 
									  == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
									 & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
									    >> 0x1fU)))) 
							<< 0x20U) 
						       | (QData)((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
						      (0x1fU 
						       & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_))))),32);
	vcdp->chgBit(c+260,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x14U)))));
	vcdp->chgBit(c+261,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x19U)))));
	vcdp->chgBit(c+262,((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_))));
	vcdp->chgBus(c+263,((3U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 2U)))),2);
	vcdp->chgBit(c+264,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0xeU)))));
	vcdp->chgBit(c+265,(((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
			     & ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
				| ((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
				   | ((0U == (7U & 
					      (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					       >> 0xcU)))
				       ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq)
				       : ((1U == (7U 
						  & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0xcU)))
					   ? (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq))
					   : ((5U == 
					       (5U 
						& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						   >> 0xcU)))
					       ? (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less))
					       : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less)))))))));
	vcdp->chgBit(c+266,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x21U)))));
	vcdp->chgBit(c+267,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x1fU)))));
	vcdp->chgBus(c+268,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS2),32);
	vcdp->chgBus(c+269,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_RS1),32);
	vcdp->chgBit(c+270,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x20U)))));
	vcdp->chgBit(c+271,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x16U)))));
	vcdp->chgBus(c+272,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
	vcdp->chgBit(c+273,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SrcPlugin_less));
	vcdp->chgBus(c+274,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_),32);
	vcdp->chgBus(c+275,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_),32);
	vcdp->chgBus(c+276,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_),32);
	vcdp->chgBit(c+277,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
	vcdp->chgBit(c+278,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_85_));
	vcdp->chgBit(c+279,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0x15U)))));
	vcdp->chgBit(c+280,((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					   >> 0xaU)))));
	vcdp->chgBit(c+281,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected));
	vcdp->chgBit(c+282,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltItself));
	vcdp->chgBit(c+283,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther));
	vcdp->chgBit(c+284,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt));
	vcdp->chgBit(c+285,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_flushNext));
	vcdp->chgBit(c+286,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid));
	vcdp->chgBit(c+287,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck));
	vcdp->chgBit(c+288,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_haltByOther) 
			     | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck) 
				 | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
				| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
	vcdp->chgBit(c+289,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isFlushed));
	vcdp->chgBit(c+290,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)) 
				   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt))))));
	vcdp->chgBit(c+291,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isValid) 
			      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck))) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_removeIt)))));
	vcdp->chgBit(c+292,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_haltItself));
	vcdp->chgBit(c+293,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt));
	vcdp->chgBit(c+294,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_flushNext));
	vcdp->chgBit(c+295,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck));
	vcdp->chgBit(c+296,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers));
	vcdp->chgBit(c+297,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isFlushed));
	vcdp->chgBit(c+298,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck)) 
				   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt))))));
	vcdp->chgBit(c+299,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
			      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuck))) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_removeIt)))));
	vcdp->chgBit(c+300,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_haltItself));
	vcdp->chgBit(c+301,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt));
	vcdp->chgBit(c+302,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_flushNext));
	vcdp->chgBit(c+303,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck));
	vcdp->chgBit(c+304,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself));
	vcdp->chgBit(c+305,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isFlushed));
	vcdp->chgBit(c+306,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck)) 
				   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt))))));
	vcdp->chgBit(c+307,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid) 
			      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isStuck))) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_removeIt)))));
	vcdp->chgBit(c+308,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt));
	vcdp->chgBit(c+309,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushIt));
	vcdp->chgBit(c+310,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_flushNext));
	vcdp->chgBit(c+311,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
				   & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
	vcdp->chgBit(c+312,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isFiring));
	vcdp->chgBit(c+313,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
	vcdp->chgBit(c+314,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetcherflushIt));
	vcdp->chgBit(c+315,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
	vcdp->chgBit(c+316,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
	vcdp->chgBit(c+317,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
	vcdp->chgBus(c+318,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
	vcdp->chgBit(c+319,((((0xbU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
						>> 0x1cU))) 
			      | (0xeU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
						  >> 0x1cU)))) 
			     | (0xfU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
						 >> 0x1cU))))));
	vcdp->chgBit(c+320,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)) 
				   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_267_) 
				      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
					 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_)))))));
	vcdp->chgBit(c+321,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)) 
				   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_268_)))));
	vcdp->chgBit(c+322,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup)) 
				   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_)))));
	vcdp->chgBit(c+323,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup) 
			     & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit) 
				& (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_261_) 
				    | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_) 
					& (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) 
				       & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum)))) 
				   | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_)) 
				      & (0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))))))));
	vcdp->chgBit(c+324,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_refilling));
	vcdp->chgBit(c+325,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_cmd_bypassTranslation));
	vcdp->chgBus(c+326,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress),32);
	vcdp->chgBit(c+327,((((0xbU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
						>> 0x1cU))) 
			      | (0xeU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
						  >> 0x1cU)))) 
			     | (0xfU == (0xfU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
						 >> 0x1cU))))));
	vcdp->chgBit(c+328,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)) 
				   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_256_) 
				      | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr) 
					 & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_)))))));
	vcdp->chgBit(c+329,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)) 
				   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_257_)))));
	vcdp->chgBit(c+330,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup)) 
				   | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_)))));
	vcdp->chgBit(c+331,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup) 
			     & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit) 
				& (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_250_) 
				    | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_) 
					& (1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))) 
				       & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum)))) 
				   | ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_)) 
				      & (0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))))))));
	vcdp->chgBit(c+332,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_refilling));
	vcdp->chgBit(c+333,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
	vcdp->chgBit(c+334,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
	vcdp->chgBus(c+335,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
	vcdp->chgBit(c+336,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_valid));
	vcdp->chgBit(c+337,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_ready));
	vcdp->chgBus(c+338,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_cmd_payload_address),32);
	vcdp->chgBit(c+339,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_dBusAccess_rsp_valid));
	vcdp->chgBit(c+340,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_unalignedAccess) 
			     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_accessError))));
	vcdp->chgBit(c+341,(vlSymsp->TOP__dut__VexRiscv.__PVT__decodeExceptionPort_valid));
	vcdp->chgBit(c+342,(vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
	vcdp->chgBit(c+343,(vlSymsp->TOP__dut__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
	vcdp->chgBit(c+344,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
	vcdp->chgBus(c+345,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
	vcdp->chgBit(c+346,((0U != vlSymsp->TOP__dut__VexRiscv.__PVT___zz_208_)));
	vcdp->chgBit(c+347,((0U != vlSymsp->TOP__dut__VexRiscv.__PVT___zz_210_)));
	vcdp->chgBit(c+348,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_valid));
	vcdp->chgBus(c+349,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
	vcdp->chgBit(c+350,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
	vcdp->chgBus(c+351,(((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
			      ? vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC
			      : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
				  ? vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
				  : ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_458_))
				      ? vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
				      : vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_)))),32);
	vcdp->chgBit(c+352,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
	vcdp->chgBit(c+353,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_input_ready));
	vcdp->chgBus(c+354,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
	vcdp->chgBit(c+355,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_corrected));
	vcdp->chgBit(c+356,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
	vcdp->chgBit(c+357,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt)))));
	vcdp->chgBit(c+358,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
	vcdp->chgBit(c+359,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_halt));
	vcdp->chgBit(c+360,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)))));
	vcdp->chgBit(c+361,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready));
	vcdp->chgBit(c+362,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
	vcdp->chgBit(c+363,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt)))));
	vcdp->chgBit(c+364,((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_arbitration_isStuck)))));
	vcdp->chgBit(c+365,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_halt));
	vcdp->chgBit(c+366,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
	vcdp->chgBit(c+367,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
			     & (IData)(vlSymsp->TOP__dut.__PVT__main_soclinux_vexriscv_ibus_ack))));
	vcdp->chgBit(c+368,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_215_) 
			     & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_) 
				| (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_217_)))));
	vcdp->chgBit(c+369,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_valid) 
			     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_))));
	vcdp->chgBit(c+370,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_s2mPipe_ready));
	vcdp->chgBit(c+371,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
			      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_118_)
			      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_wr))));
	vcdp->chgBus(c+372,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
			      ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_119_
			      : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_address)),32);
	vcdp->chgBus(c+373,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
			      ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_120_
			      : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_requestDataBypass)),32);
	vcdp->chgBus(c+374,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
			      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_122_)
			      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_length))),3);
	vcdp->chgBit(c+375,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
			      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_123_)
			      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_mem_cmd_payload_last))));
	vcdp->chgBus(c+376,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
	vcdp->chgBus(c+377,(((0U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
					   >> 0xcU)))
			      ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_134_
			      : ((1U == (3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
					       >> 0xcU)))
				  ? vlSymsp->TOP__dut__VexRiscv.__PVT___zz_136_
				  : vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
	vcdp->chgBit(c+378,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_forceDatapath));
	vcdp->chgBit(c+379,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_1));
	vcdp->chgBit(c+380,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_2));
	vcdp->chgBit(c+381,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHits_3));
	vcdp->chgBit(c+382,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cacheHit));
	vcdp->chgBit(c+383,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_249_));
	vcdp->chgBit(c+384,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_250_));
	vcdp->chgBit(c+385,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_251_));
	vcdp->chgBus(c+386,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_252_),10);
	vcdp->chgBus(c+387,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_253_),10);
	vcdp->chgBus(c+388,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_254_),10);
	vcdp->chgBus(c+389,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_255_),10);
	vcdp->chgBit(c+390,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_256_));
	vcdp->chgBit(c+391,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_257_));
	vcdp->chgBit(c+392,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_258_));
	vcdp->chgBit(c+393,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_259_));
	vcdp->chgBit(c+394,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement));
	vcdp->chgBus(c+395,((3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value) 
				   + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement)))),2);
	vcdp->chgBit(c+396,(((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_willIncrement))));
	vcdp->chgBit(c+397,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_requireMmuLockup));
	vcdp->chgBit(c+398,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_1));
	vcdp->chgBit(c+399,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_2));
	vcdp->chgBit(c+400,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHits_3));
	vcdp->chgBit(c+401,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cacheHit));
	vcdp->chgBit(c+402,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_260_));
	vcdp->chgBit(c+403,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_261_));
	vcdp->chgBit(c+404,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_262_));
	vcdp->chgBus(c+405,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_263_),10);
	vcdp->chgBus(c+406,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_264_),10);
	vcdp->chgBus(c+407,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_265_),10);
	vcdp->chgBus(c+408,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_266_),10);
	vcdp->chgBit(c+409,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_267_));
	vcdp->chgBit(c+410,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_268_));
	vcdp->chgBit(c+411,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_269_));
	vcdp->chgBit(c+412,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_270_));
	vcdp->chgBit(c+413,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement));
	vcdp->chgBus(c+414,((3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value) 
				   + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement)))),2);
	vcdp->chgBit(c+415,(((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_willIncrement))));
	vcdp->chgBit(c+416,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_requireMmuLockup));
	vcdp->chgBit(c+417,((1U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data)));
	vcdp->chgBit(c+418,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 1U))));
	vcdp->chgBit(c+419,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 2U))));
	vcdp->chgBit(c+420,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 3U))));
	vcdp->chgBit(c+421,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 4U))));
	vcdp->chgBit(c+422,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 5U))));
	vcdp->chgBit(c+423,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 6U))));
	vcdp->chgBit(c+424,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 7U))));
	vcdp->chgBus(c+425,((3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				   >> 8U))),2);
	vcdp->chgBus(c+426,((0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				       >> 0xaU))),10);
	vcdp->chgBus(c+427,((0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___05Fio_cpu_writeBack_data 
				       >> 0x14U))),12);
	vcdp->chgBit(c+428,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_exception));
	vcdp->chgBit(c+429,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_dBusRsp_leaf));
	vcdp->chgBus(c+430,((0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_ 
				      >> 0xfU))),5);
	vcdp->chgBus(c+431,((0x1fU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_92_ 
				      >> 0x14U))),5);
	vcdp->chgBus(c+432,(((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
			      ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
				 & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
			      : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				  ? (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
				     | vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)
				  : (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_161_ 
				     ^ vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)))),32);
	vcdp->chgBus(c+433,((0x1fU & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_166_)),5);
	vcdp->chgBus(c+434,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
	vcdp->chgBit(c+435,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_BranchPlugin_eq));
	vcdp->chgBus(c+436,(((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
			      ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_) 
				  << 0x15U) | ((0x100000U 
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
				      << 0xcU) | (0xfffU 
						  & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 0x14U)))
				  : ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ 
				      << 0xdU) | ((0x1000U 
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
							      >> 7U))))))))),32);
	vcdp->chgBus(c+437,((((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
			       ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1
			       : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC) 
			     + ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
				 ? (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_185_) 
				     << 0x15U) | ((0x100000U 
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
					 << 0xcU) | 
					(0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						   >> 0x14U)))
				     : ((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_189_ 
					 << 0xdU) | 
					((0x1000U & 
					  (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
					   >> 0x13U)) 
					 | ((0x800U 
					     & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						<< 4U)) 
					    | ((0x7e0U 
						& (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						   >> 0x14U)) 
					       | (0x1eU 
						  & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
						     >> 7U)))))))))),32);
	vcdp->chgQuad(c+438,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcycle),64);
	vcdp->chgQuad(c+440,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_minstret),64);
	vcdp->chgBit(c+442,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_OR));
	vcdp->chgBit(c+443,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
	vcdp->chgBit(c+444,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
	vcdp->chgBit(c+445,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
	vcdp->chgBit(c+446,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
	vcdp->chgBus(c+447,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped),2);
	vcdp->chgBus(c+448,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_) 
			      < (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped))
			      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped)
			      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))),2);
	vcdp->chgBit(c+449,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
	vcdp->chgBus(c+450,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
	vcdp->chgBus(c+451,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_trapCause),4);
	vcdp->chgBus(c+452,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
	vcdp->chgBus(c+453,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
	vcdp->chgBit(c+454,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects));
	vcdp->chgBit(c+455,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
	vcdp->chgBit(c+456,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
	vcdp->chgBus(c+457,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readData),32);
	vcdp->chgBit(c+458,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
	vcdp->chgBit(c+459,((((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
				& (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
			       & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE)) 
			      & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isStuckByOthers)))));
	vcdp->chgBus(c+460,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_readToWriteData),32);
	vcdp->chgBus(c+461,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_writeData),32);
	vcdp->chgBit(c+462,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement));
	vcdp->chgBit(c+463,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willClear));
	vcdp->chgBus(c+464,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_valueNext),6);
	vcdp->chgBit(c+465,(((0x20U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_willIncrement))));
	vcdp->chgBit(c+466,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement));
	vcdp->chgBit(c+467,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willClear));
	vcdp->chgBus(c+468,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_valueNext),6);
	vcdp->chgBit(c+469,(((0x21U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_willIncrement))));
	vcdp->chgBus(c+470,(((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					    >> 0x18U)))
			      ? ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						>> 0x17U)))
				  ? 0x4a414c52U : 0x4a414c20U)
			      : ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						>> 0x17U)))
				  ? 0x42202020U : 0x494e4320U))),32);
	vcdp->chgQuad(c+471,(((0U == (3U & (IData)(
						   (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						    >> 0x12U))))
			       ? VL_ULL(0x584f525f31)
			       : ((1U == (3U & (IData)(
						       (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							>> 0x12U))))
				   ? VL_ULL(0x4f525f3120)
				   : ((2U == (3U & (IData)(
							   (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							    >> 0x12U))))
				       ? VL_ULL(0x414e445f31)
				       : VL_ULL(0x3f3f3f3f3f))))),40);
	vcdp->chgArray(c+473,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
	vcdp->chgBus(c+476,(((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					    >> 0x1cU)))
			      ? ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						>> 0x1bU)))
				  ? 0x504320U : 0x494d53U)
			      : ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						>> 0x1bU)))
				  ? 0x494d49U : 0x525320U))),24);
	vcdp->chgQuad(c+477,(((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
					     >> 9U)))
			       ? ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						 >> 8U)))
				   ? VL_ULL(0x4543414c4c)
				   : VL_ULL(0x5746492020))
			       : ((1U & (IData)((vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						 >> 8U)))
				   ? VL_ULL(0x5852455420)
				   : VL_ULL(0x4e4f4e4520)))),40);
	vcdp->chgQuad(c+479,(((0U == (3U & (IData)(
						   (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
						    >> 4U))))
			       ? VL_ULL(0x4144445f53554220)
			       : ((1U == (3U & (IData)(
						       (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							>> 4U))))
				   ? VL_ULL(0x534c545f534c5455)
				   : ((2U == (3U & (IData)(
							   (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_143_ 
							    >> 4U))))
				       ? VL_ULL(0x4249545749534520)
				       : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
	vcdp->chgArray(c+481,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+484,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+487,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+490,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
	vcdp->chgQuad(c+493,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1___05Fstring),48);
	vcdp->chgArray(c+495,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+498,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
	vcdp->chgArray(c+501,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
	vcdp->chgBit(c+504,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_220_));
	vcdp->chgBit(c+505,((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
	vcdp->chgBit(c+506,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_225_));
	vcdp->chgBit(c+507,((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_cacheRspArbitration_input_ready)))));
	vcdp->chgBit(c+508,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_228_));
	vcdp->chgBit(c+509,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
	vcdp->chgBit(c+510,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
	vcdp->chgBit(c+511,((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
				   | (~ ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
					 >> 7U))))));
	vcdp->chgBit(c+512,((vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
			     & ((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
					     >> 2U)) 
				== (0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_physicalAddress 
						>> 0xcU))))));
	vcdp->chgBit(c+513,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_229_));
	vcdp->chgBus(c+514,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_),32);
	vcdp->chgBit(c+515,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_231_));
	vcdp->chgBus(c+516,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_232_),32);
	vcdp->chgBus(c+517,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_233_),2);
	vcdp->chgBit(c+518,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_234_));
	vcdp->chgBit(c+519,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_235_));
	vcdp->chgBit(c+520,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_241_));
	vcdp->chgBit(c+521,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_244_));
	vcdp->chgBit(c+522,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_valid));
	vcdp->chgBus(c+523,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsReadCmd_payload),7);
	vcdp->chgBit(c+524,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_valid));
	vcdp->chgBit(c+525,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_way));
	vcdp->chgBus(c+526,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_address),7);
	vcdp->chgBit(c+527,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_valid));
	vcdp->chgBit(c+528,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_error));
	vcdp->chgBus(c+529,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteCmd_payload_data_address),20);
	vcdp->chgBit(c+530,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_valid));
	vcdp->chgBus(c+531,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataReadCmd_payload),10);
	vcdp->chgBit(c+532,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid));
	vcdp->chgBit(c+533,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way));
	vcdp->chgBus(c+534,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address),10);
	vcdp->chgBus(c+535,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_data),32);
	vcdp->chgBus(c+536,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask),4);
	vcdp->chgBus(c+537,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_mask),4);
	vcdp->chgBit(c+538,(((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
			       & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
			      & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
				 == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_230_ 
					       >> 2U)))) 
			     & (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_mask) 
				       & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask))))));
	vcdp->chgBit(c+539,((((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_physicalAddress 
					   >> 0xcU)) 
			      == (0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
					      >> 2U))) 
			     & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_)));
	vcdp->chgBit(c+540,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen) 
			     | ((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_valid) 
				  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_way)) 
				 & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_address) 
				    == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						  >> 2U)))) 
				& (0U != ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_mask) 
					  & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__dataWriteCmd_payload_mask)))))));
	vcdp->chgBit(c+541,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRspFreeze));
	vcdp->chgBit(c+542,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_loaderValid));
	vcdp->chgBus(c+543,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_),32);
	vcdp->chgBit(c+544,((1U & (((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
					   >> 0x1fU)) 
				    == (1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
					      >> 0x1fU)))
				    ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_ 
				       >> 0x1fU) : 
				   ((3U == (3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
						  >> 1U)))
				     ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
					>> 0x1fU) : 
				    (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
				     >> 0x1fU))))));
	vcdp->chgBit(c+545,((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap) 
				   | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
				      ^ (((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
						 >> 0x1fU)) 
					  == (1U & 
					      (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
					       >> 0x1fU)))
					  ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_ 
					     >> 0x1fU)
					  : ((3U == 
					      (3U & 
					       ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
						>> 1U)))
					      ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
						 >> 0x1fU)
					      : (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
						 >> 0x1fU))))))));
	vcdp->chgBus(c+546,(((4U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_22_))
			      ? ((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap) 
					| ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
					   ^ (((1U 
						& (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
						   >> 0x1fU)) 
					       == (1U 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
						      >> 0x1fU)))
					       ? (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_ 
						  >> 0x1fU)
					       : ((3U 
						   == 
						   (3U 
						    & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
						       >> 1U)))
						   ? 
						  (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0 
						   >> 0x1fU)
						   : 
						  (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data 
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
				      : vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_25_)))),32);
	vcdp->chgBit(c+547,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement));
	vcdp->chgBus(c+548,((7U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value) 
				   + (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willIncrement)))),3);
	vcdp->chgBit(c+549,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_willOverflow));
    }
}

void Vdut::traceChgThis__4(Vdut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+550,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_syncfifo_re));
	vcdp->chgBit(c+551,(vlSymsp->TOP__dut.__PVT__main_uart_tx_fifo_do_read));
    }
}

void Vdut::traceChgThis__5(Vdut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+552,(((0x3ffffff8U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					     >> 2U)) 
			     | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_))),30);
	vcdp->chgBus(c+553,(((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_211_))
			      ? 7U : 2U)),3);
	vcdp->chgBus(c+554,((0x3fffffffU & (((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_))
					      ? ((0xffffffe0U 
						  & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_) 
						 | ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_213_) 
						    << 2U))
					      : (0xfffffffcU 
						 & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_)) 
					    >> 2U))),30);
	vcdp->chgBus(c+555,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_127_),32);
	vcdp->chgBus(c+556,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_)
			      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_128_)
			      : 0xfU)),4);
	vcdp->chgBit(c+557,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_124_));
	vcdp->chgBit(c+558,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_125_));
	vcdp->chgBus(c+559,(vlSymsp->TOP__dut.__PVT__memdat),32);
	vcdp->chgBus(c+560,(vlSymsp->TOP__dut.__PVT__memdat_2),10);
	vcdp->chgBus(c+561,(vlSymsp->TOP__dut.__PVT__memdat_1),10);
	vcdp->chgBus(c+562,(vlSymsp->TOP__dut.__PVT__memdat_4),10);
	vcdp->chgBus(c+563,(vlSymsp->TOP__dut.__PVT__memdat_3),10);
	vcdp->chgBus(c+564,(vlSymsp->TOP__dut.__PVT__memadr),10);
	vcdp->chgBus(c+565,(vlSymsp->TOP__dut.__PVT__memadr_1),23);
	vcdp->chgBus(c+566,(vlSymsp->TOP__dut.__PVT__memadr_2),12);
	vcdp->chgBus(c+567,(vlSymsp->TOP__dut.__PVT__storage[0]),10);
	vcdp->chgBus(c+568,(vlSymsp->TOP__dut.__PVT__storage[1]),10);
	vcdp->chgBus(c+569,(vlSymsp->TOP__dut.__PVT__storage[2]),10);
	vcdp->chgBus(c+570,(vlSymsp->TOP__dut.__PVT__storage[3]),10);
	vcdp->chgBus(c+571,(vlSymsp->TOP__dut.__PVT__storage[4]),10);
	vcdp->chgBus(c+572,(vlSymsp->TOP__dut.__PVT__storage[5]),10);
	vcdp->chgBus(c+573,(vlSymsp->TOP__dut.__PVT__storage[6]),10);
	vcdp->chgBus(c+574,(vlSymsp->TOP__dut.__PVT__storage[7]),10);
	vcdp->chgBus(c+575,(vlSymsp->TOP__dut.__PVT__storage[8]),10);
	vcdp->chgBus(c+576,(vlSymsp->TOP__dut.__PVT__storage[9]),10);
	vcdp->chgBus(c+577,(vlSymsp->TOP__dut.__PVT__storage[10]),10);
	vcdp->chgBus(c+578,(vlSymsp->TOP__dut.__PVT__storage[11]),10);
	vcdp->chgBus(c+579,(vlSymsp->TOP__dut.__PVT__storage[12]),10);
	vcdp->chgBus(c+580,(vlSymsp->TOP__dut.__PVT__storage[13]),10);
	vcdp->chgBus(c+581,(vlSymsp->TOP__dut.__PVT__storage[14]),10);
	vcdp->chgBus(c+582,(vlSymsp->TOP__dut.__PVT__storage[15]),10);
	vcdp->chgBus(c+583,(vlSymsp->TOP__dut.__PVT__storage_1[0]),10);
	vcdp->chgBus(c+584,(vlSymsp->TOP__dut.__PVT__storage_1[1]),10);
	vcdp->chgBus(c+585,(vlSymsp->TOP__dut.__PVT__storage_1[2]),10);
	vcdp->chgBus(c+586,(vlSymsp->TOP__dut.__PVT__storage_1[3]),10);
	vcdp->chgBus(c+587,(vlSymsp->TOP__dut.__PVT__storage_1[4]),10);
	vcdp->chgBus(c+588,(vlSymsp->TOP__dut.__PVT__storage_1[5]),10);
	vcdp->chgBus(c+589,(vlSymsp->TOP__dut.__PVT__storage_1[6]),10);
	vcdp->chgBus(c+590,(vlSymsp->TOP__dut.__PVT__storage_1[7]),10);
	vcdp->chgBus(c+591,(vlSymsp->TOP__dut.__PVT__storage_1[8]),10);
	vcdp->chgBus(c+592,(vlSymsp->TOP__dut.__PVT__storage_1[9]),10);
	vcdp->chgBus(c+593,(vlSymsp->TOP__dut.__PVT__storage_1[10]),10);
	vcdp->chgBus(c+594,(vlSymsp->TOP__dut.__PVT__storage_1[11]),10);
	vcdp->chgBus(c+595,(vlSymsp->TOP__dut.__PVT__storage_1[12]),10);
	vcdp->chgBus(c+596,(vlSymsp->TOP__dut.__PVT__storage_1[13]),10);
	vcdp->chgBus(c+597,(vlSymsp->TOP__dut.__PVT__storage_1[14]),10);
	vcdp->chgBus(c+598,(vlSymsp->TOP__dut.__PVT__storage_1[15]),10);
	vcdp->chgBit(c+599,(((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			     & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId)))));
	vcdp->chgBus(c+600,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_),32);
	vcdp->chgBit(c+601,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
	vcdp->chgBit(c+602,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
	vcdp->chgBit(c+603,((1U & ((~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
				   & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
				      | (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)))))));
	vcdp->chgBus(c+604,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
	vcdp->chgBit(c+605,((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
	vcdp->chgBus(c+606,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
	vcdp->chgBus(c+607,((0xffffffe0U & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
	vcdp->chgBit(c+608,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_wr));
	vcdp->chgBus(c+609,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
	vcdp->chgBit(c+610,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_wr));
	vcdp->chgBus(c+611,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask),4);
	vcdp->chgBit(c+612,((1U & (~ (((1U == (3U & 
					       (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						>> 0xdU))) 
				       & (0U == (0x1fU 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						    >> 0xfU)))) 
				      | ((3U == (3U 
						 & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						    >> 0xdU))) 
					 & (0U == (0x1fU 
						   & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						      >> 0xfU)))))))));
	vcdp->chgBit(c+613,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_SFENCE_VMA));
	vcdp->chgBit(c+614,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_SFENCE_VMA));
	vcdp->chgBus(c+615,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW),2);
	vcdp->chgBit(c+616,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
	vcdp->chgBus(c+617,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
	vcdp->chgBus(c+618,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
	vcdp->chgBus(c+619,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
	vcdp->chgBus(c+620,(((IData)(4U) + vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_)),32);
	vcdp->chgBit(c+621,((0x20U != (0x7fU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
						>> 7U)))));
	vcdp->chgBit(c+622,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
	vcdp->chgBus(c+623,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_PC),32);
	vcdp->chgBit(c+624,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
	vcdp->chgBit(c+625,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_DIV));
	vcdp->chgBit(c+626,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_MUL));
	vcdp->chgBit(c+627,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
	vcdp->chgBit(c+628,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DIV));
	vcdp->chgBit(c+629,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_MUL));
	vcdp->chgBit(c+630,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
	vcdp->chgBit(c+631,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
	vcdp->chgBit(c+632,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR));
	vcdp->chgBus(c+633,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
	vcdp->chgBus(c+634,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
	vcdp->chgBus(c+635,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
	vcdp->chgBus(c+636,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
	vcdp->chgBit(c+637,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
	vcdp->chgBus(c+638,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC),32);
	vcdp->chgBus(c+639,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1),32);
	vcdp->chgBus(c+640,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
	vcdp->chgBit(c+641,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
	vcdp->chgBit(c+642,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
	vcdp->chgBit(c+643,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
	vcdp->chgBus(c+644,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
	vcdp->chgBit(c+645,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
	vcdp->chgBit(c+646,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
	vcdp->chgBus(c+647,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
	vcdp->chgBus(c+648,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
	vcdp->chgBus(c+649,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
	vcdp->chgBit(c+650,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
	vcdp->chgBit(c+651,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
	vcdp->chgBit(c+652,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
	vcdp->chgBus(c+653,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
	vcdp->chgBus(c+654,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
	vcdp->chgBus(c+655,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
	vcdp->chgBus(c+656,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
	vcdp->chgBit(c+657,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_SFENCE_VMA));
	vcdp->chgBit(c+658,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_IS_DBUS_SHARING));
	vcdp->chgBit(c+659,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_IS_DBUS_SHARING));
	vcdp->chgBus(c+660,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW),2);
	vcdp->chgBit(c+661,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
	vcdp->chgBus(c+662,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
	vcdp->chgBit(c+663,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
	vcdp->chgBit(c+664,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
	vcdp->chgBit(c+665,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_AMO));
	vcdp->chgBit(c+666,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_LRSC));
	vcdp->chgBit(c+667,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
	vcdp->chgBus(c+668,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS2),32);
	vcdp->chgBit(c+669,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
	vcdp->chgBit(c+670,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
	vcdp->chgBus(c+671,(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
	vcdp->chgBus(c+672,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_),32);
	vcdp->chgBus(c+673,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_PC),32);
	vcdp->chgBus(c+674,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
	vcdp->chgBit(c+675,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid));
	vcdp->chgBit(c+676,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_arbitration_isValid));
	vcdp->chgBit(c+677,(vlSymsp->TOP__dut__VexRiscv.__PVT__writeBack_arbitration_isValid));
	vcdp->chgBit(c+678,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
	vcdp->chgBit(c+679,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
	vcdp->chgBit(c+680,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
	vcdp->chgBit(c+681,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_5));
	vcdp->chgBus(c+682,((0xfffffffcU & vlSymsp->TOP__dut__VexRiscv.__PVT___zz_115_)),32);
	vcdp->chgBit(c+683,(((0U != (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId))));
	vcdp->chgBit(c+684,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
	vcdp->chgBit(c+685,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
	vcdp->chgBit(c+686,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
	vcdp->chgBit(c+687,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
	vcdp->chgBus(c+688,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_),2);
	vcdp->chgBit(c+689,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
	vcdp->chgBit(c+690,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
	vcdp->chgBit(c+691,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_109_));
	vcdp->chgBit(c+692,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_111_));
	vcdp->chgBit(c+693,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_114_));
	vcdp->chgBit(c+694,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
	vcdp->chgBit(c+695,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
	vcdp->chgBit(c+696,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_injector_decodeRemoved));
	vcdp->chgBit(c+697,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_212_));
	vcdp->chgBus(c+698,(vlSymsp->TOP__dut__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
	vcdp->chgBus(c+699,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
	vcdp->chgBit(c+700,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
	vcdp->chgBit(c+701,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
	vcdp->chgBus(c+702,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_126_),32);
	vcdp->chgBus(c+703,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_128_),4);
	vcdp->chgBus(c+704,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_129_),3);
	vcdp->chgBit(c+705,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_130_));
	vcdp->chgBit(c+706,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_219_));
	vcdp->chgBus(c+707,(vlSymsp->TOP__dut__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
	vcdp->chgBus(c+708,(((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)
			      ? (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_121_)
			      : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mask))),4);
	vcdp->chgBus(c+709,(vlSymsp->TOP__dut__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
	vcdp->chgBus(c+710,((3U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				   >> 0xcU))),2);
	vcdp->chgBit(c+711,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_sum));
	vcdp->chgBit(c+712,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mxr));
	vcdp->chgBit(c+713,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_status_mprv));
	vcdp->chgBit(c+714,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_mode));
	vcdp->chgBus(c+715,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_satp_ppn),20);
	vcdp->chgBit(c+716,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid));
	vcdp->chgBit(c+717,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_exception));
	vcdp->chgBit(c+718,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage));
	vcdp->chgBus(c+719,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0),10);
	vcdp->chgBus(c+720,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1),10);
	vcdp->chgBus(c+721,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_0),10);
	vcdp->chgBus(c+722,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_physicalAddress_1),10);
	vcdp->chgBit(c+723,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowRead));
	vcdp->chgBit(c+724,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowWrite));
	vcdp->chgBit(c+725,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowExecute));
	vcdp->chgBit(c+726,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_allowUser));
	vcdp->chgBit(c+727,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_valid));
	vcdp->chgBit(c+728,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_exception));
	vcdp->chgBit(c+729,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_superPage));
	vcdp->chgBus(c+730,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_0),10);
	vcdp->chgBus(c+731,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_virtualAddress_1),10);
	vcdp->chgBus(c+732,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_0),10);
	vcdp->chgBus(c+733,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_physicalAddress_1),10);
	vcdp->chgBit(c+734,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowRead));
	vcdp->chgBit(c+735,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowWrite));
	vcdp->chgBit(c+736,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowExecute));
	vcdp->chgBit(c+737,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_1_allowUser));
	vcdp->chgBit(c+738,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_valid));
	vcdp->chgBit(c+739,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_exception));
	vcdp->chgBit(c+740,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_superPage));
	vcdp->chgBus(c+741,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_0),10);
	vcdp->chgBus(c+742,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_virtualAddress_1),10);
	vcdp->chgBus(c+743,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_0),10);
	vcdp->chgBus(c+744,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_physicalAddress_1),10);
	vcdp->chgBit(c+745,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowRead));
	vcdp->chgBit(c+746,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowWrite));
	vcdp->chgBit(c+747,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowExecute));
	vcdp->chgBit(c+748,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_2_allowUser));
	vcdp->chgBit(c+749,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_valid));
	vcdp->chgBit(c+750,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_exception));
	vcdp->chgBit(c+751,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_superPage));
	vcdp->chgBus(c+752,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_0),10);
	vcdp->chgBus(c+753,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_virtualAddress_1),10);
	vcdp->chgBus(c+754,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_0),10);
	vcdp->chgBus(c+755,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_physicalAddress_1),10);
	vcdp->chgBit(c+756,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowRead));
	vcdp->chgBit(c+757,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowWrite));
	vcdp->chgBit(c+758,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowExecute));
	vcdp->chgBit(c+759,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_3_allowUser));
	vcdp->chgBit(c+760,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_valid) 
			      & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_1) 
				 == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
					       >> 0x16U)))) 
			     & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_superPage) 
				| ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_cache_0_virtualAddress_0) 
				   == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
						 >> 0xcU)))))));
	vcdp->chgBus(c+761,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value),2);
	vcdp->chgBit(c+762,((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_0_entryToReplace_value))));
	vcdp->chgBit(c+763,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid));
	vcdp->chgBit(c+764,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_exception));
	vcdp->chgBit(c+765,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage));
	vcdp->chgBus(c+766,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0),10);
	vcdp->chgBus(c+767,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1),10);
	vcdp->chgBus(c+768,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_0),10);
	vcdp->chgBus(c+769,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_physicalAddress_1),10);
	vcdp->chgBit(c+770,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowRead));
	vcdp->chgBit(c+771,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowWrite));
	vcdp->chgBit(c+772,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowExecute));
	vcdp->chgBit(c+773,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_allowUser));
	vcdp->chgBit(c+774,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_valid));
	vcdp->chgBit(c+775,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_exception));
	vcdp->chgBit(c+776,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_superPage));
	vcdp->chgBus(c+777,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_0),10);
	vcdp->chgBus(c+778,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_virtualAddress_1),10);
	vcdp->chgBus(c+779,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_0),10);
	vcdp->chgBus(c+780,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_physicalAddress_1),10);
	vcdp->chgBit(c+781,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowRead));
	vcdp->chgBit(c+782,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowWrite));
	vcdp->chgBit(c+783,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowExecute));
	vcdp->chgBit(c+784,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_1_allowUser));
	vcdp->chgBit(c+785,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_valid));
	vcdp->chgBit(c+786,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_exception));
	vcdp->chgBit(c+787,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_superPage));
	vcdp->chgBus(c+788,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_0),10);
	vcdp->chgBus(c+789,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_virtualAddress_1),10);
	vcdp->chgBus(c+790,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_0),10);
	vcdp->chgBus(c+791,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_physicalAddress_1),10);
	vcdp->chgBit(c+792,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowRead));
	vcdp->chgBit(c+793,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowWrite));
	vcdp->chgBit(c+794,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowExecute));
	vcdp->chgBit(c+795,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_2_allowUser));
	vcdp->chgBit(c+796,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_valid));
	vcdp->chgBit(c+797,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_exception));
	vcdp->chgBit(c+798,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_superPage));
	vcdp->chgBus(c+799,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_0),10);
	vcdp->chgBus(c+800,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_virtualAddress_1),10);
	vcdp->chgBus(c+801,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_0),10);
	vcdp->chgBus(c+802,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_physicalAddress_1),10);
	vcdp->chgBit(c+803,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowRead));
	vcdp->chgBit(c+804,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowWrite));
	vcdp->chgBit(c+805,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowExecute));
	vcdp->chgBit(c+806,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_3_allowUser));
	vcdp->chgBit(c+807,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_valid) 
			      & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_1) 
				 == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
					       >> 0x16U)))) 
			     & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_superPage) 
				| ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_cache_0_virtualAddress_0) 
				   == (0x3ffU & (vlSymsp->TOP__dut__VexRiscv.__PVT___zz_112_ 
						 >> 0xcU)))))));
	vcdp->chgBus(c+808,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value),2);
	vcdp->chgBit(c+809,((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_ports_1_entryToReplace_value))));
	vcdp->chgBus(c+810,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_state_1_),3);
	vcdp->chgBus(c+811,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_0),10);
	vcdp->chgBus(c+812,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_vpn_1),10);
	vcdp->chgBit(c+813,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_portId));
	vcdp->chgBit(c+814,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_V));
	vcdp->chgBit(c+815,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_R));
	vcdp->chgBit(c+816,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_W));
	vcdp->chgBit(c+817,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_X));
	vcdp->chgBit(c+818,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_U));
	vcdp->chgBit(c+819,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_G));
	vcdp->chgBit(c+820,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_A));
	vcdp->chgBit(c+821,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_D));
	vcdp->chgBus(c+822,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_RSW),2);
	vcdp->chgBus(c+823,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN0),10);
	vcdp->chgBus(c+824,(vlSymsp->TOP__dut__VexRiscv.__PVT__MmuPlugin_shared_pteBuffer_PPN1),12);
	vcdp->chgBus(c+825,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_246_),32);
	vcdp->chgBus(c+826,(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_247_),32);
	vcdp->chgBus(c+827,(((3U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
			      ? vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_RS1
			      : vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_PC)),32);
	vcdp->chgBus(c+828,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
	vcdp->chgBus(c+829,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
	vcdp->chgBus(c+830,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mepc),32);
	vcdp->chgBit(c+831,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
	vcdp->chgBit(c+832,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
	vcdp->chgBus(c+833,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
	vcdp->chgBit(c+834,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
	vcdp->chgBit(c+835,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
	vcdp->chgBit(c+836,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
	vcdp->chgBit(c+837,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
	vcdp->chgBit(c+838,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
	vcdp->chgBit(c+839,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
	vcdp->chgBus(c+840,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mscratch),32);
	vcdp->chgBit(c+841,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
	vcdp->chgBus(c+842,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
	vcdp->chgBus(c+843,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mtval),32);
	vcdp->chgBit(c+844,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAM));
	vcdp->chgBit(c+845,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IAF));
	vcdp->chgBit(c+846,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_II));
	vcdp->chgBit(c+847,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAM));
	vcdp->chgBit(c+848,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LAF));
	vcdp->chgBit(c+849,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAM));
	vcdp->chgBit(c+850,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SAF));
	vcdp->chgBit(c+851,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_EU));
	vcdp->chgBit(c+852,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_ES));
	vcdp->chgBit(c+853,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_IPF));
	vcdp->chgBit(c+854,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_LPF));
	vcdp->chgBit(c+855,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_medeleg_SPF));
	vcdp->chgBit(c+856,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_ST));
	vcdp->chgBit(c+857,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SE));
	vcdp->chgBit(c+858,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_mideleg_SS));
	vcdp->chgBit(c+859,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SIE));
	vcdp->chgBit(c+860,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPIE));
	vcdp->chgBit(c+861,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sstatus_SPP));
	vcdp->chgBit(c+862,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_SOFT));
	vcdp->chgBit(c+863,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SEIP_INPUT));
	vcdp->chgBit(c+864,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_STIP));
	vcdp->chgBit(c+865,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sip_SSIP));
	vcdp->chgBit(c+866,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SEIE));
	vcdp->chgBit(c+867,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_STIE));
	vcdp->chgBit(c+868,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sie_SSIE));
	vcdp->chgBus(c+869,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_mode),2);
	vcdp->chgBus(c+870,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stvec_base),30);
	vcdp->chgBus(c+871,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sscratch),32);
	vcdp->chgBit(c+872,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_interrupt));
	vcdp->chgBus(c+873,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_scause_exceptionCode),4);
	vcdp->chgBus(c+874,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_stval),32);
	vcdp->chgBus(c+875,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_sepc),32);
	vcdp->chgBus(c+876,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
	vcdp->chgBus(c+877,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
	vcdp->chgBit(c+878,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
	vcdp->chgBus(c+879,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
	vcdp->chgBit(c+880,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_lastStageWasWfi));
	vcdp->chgBit(c+881,(vlSymsp->TOP__dut__VexRiscv.__PVT__CsrPlugin_hadException));
	vcdp->chgBit(c+882,(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
	vcdp->chgBit(c+883,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
			      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE))));
	vcdp->chgBit(c+884,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_arbitration_isValid) 
			      & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
			     & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE))));
	vcdp->chgBus(c+885,((0xfffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				       >> 0x14U))),12);
	vcdp->chgQuad(c+886,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs1),33);
	vcdp->chgBus(c+888,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_rs2),32);
	vcdp->chgArray(c+889,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_accumulator),65);
	vcdp->chgBus(c+892,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value),6);
	vcdp->chgBit(c+893,((0x20U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_mul_counter_value))));
	vcdp->chgBit(c+894,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_needRevert));
	vcdp->chgBus(c+895,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value),6);
	vcdp->chgBit(c+896,((0x21U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_counter_value))));
	vcdp->chgBit(c+897,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_done));
	vcdp->chgBus(c+898,(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_MulDivIterativePlugin_div_result),32);
	vcdp->chgBus(c+899,(vlSymsp->TOP__dut__VexRiscv.__PVT__externalInterruptArray_regNext),32);
	vcdp->chgQuad(c+900,(((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
			       ? ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
				   ? VL_ULL(0x4543414c4c)
				   : VL_ULL(0x5746492020))
			       : ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
				   ? VL_ULL(0x5852455420)
				   : VL_ULL(0x4e4f4e4520)))),40);
	vcdp->chgQuad(c+902,(((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
			       ? ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
				   ? VL_ULL(0x4543414c4c)
				   : VL_ULL(0x5746492020))
			       : ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
				   ? VL_ULL(0x5852455420)
				   : VL_ULL(0x4e4f4e4520)))),40);
	vcdp->chgQuad(c+904,(((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
			       ? ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
				   ? VL_ULL(0x4543414c4c)
				   : VL_ULL(0x5746492020))
			       : ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
				   ? VL_ULL(0x5852455420)
				   : VL_ULL(0x4e4f4e4520)))),40);
	vcdp->chgBus(c+906,(((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
			      ? ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
				  ? 0x4a414c52U : 0x4a414c20U)
			      : ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
				  ? 0x42202020U : 0x494e4320U))),32);
	vcdp->chgBus(c+907,(((2U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
			      ? ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
				  ? 0x504320U : 0x494d53U)
			      : ((1U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
				  ? 0x494d49U : 0x525320U))),24);
	vcdp->chgQuad(c+908,(((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
			       ? VL_ULL(0x4144445f53554220)
			       : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
				   ? VL_ULL(0x534c545f534c5455)
				   : ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
				       ? VL_ULL(0x4249545749534520)
				       : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
	vcdp->chgQuad(c+910,(((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
			       ? VL_ULL(0x584f525f31)
			       : ((1U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				   ? VL_ULL(0x4f525f3120)
				   : ((2U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
				       ? VL_ULL(0x414e445f31)
				       : VL_ULL(0x3f3f3f3f3f))))),40);
	vcdp->chgBit(c+912,((0U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_191_))));
	vcdp->chgBit(c+913,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
	vcdp->chgBus(c+914,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
	vcdp->chgBit(c+915,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
	vcdp->chgBit(c+916,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
	vcdp->chgBus(c+917,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
	vcdp->chgBit(c+918,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
	vcdp->chgBus(c+919,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
	vcdp->chgBus(c+920,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
				       ? (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					  >> 5U) : (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
	vcdp->chgBit(c+921,((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
				   >> 7U))));
	vcdp->chgBus(c+922,((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					 >> 0xcU))),20);
	vcdp->chgBus(c+923,(((0x3f8U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
					>> 2U)) | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
	vcdp->chgBit(c+924,((1U & vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_)));
	vcdp->chgBit(c+925,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
				   >> 1U))));
	vcdp->chgBus(c+926,((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_10_ 
					 >> 2U))),20);
	vcdp->chgBus(c+927,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_11_),32);
	vcdp->chgBit(c+928,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
	vcdp->chgBit(c+929,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
	vcdp->chgBit(c+930,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
	vcdp->chgBit(c+931,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
	vcdp->chgBit(c+932,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
	vcdp->chgBit(c+933,(vlSymsp->TOP__dut__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
	vcdp->chgBit(c+934,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				   >> 0x1bU))));
	vcdp->chgBus(c+935,((7U & (vlSymsp->TOP__dut__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
				   >> 0x1dU))),3);
	vcdp->chgBit(c+936,((1U & (~ (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT___zz_117_)))));
	vcdp->chgBit(c+937,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_valid));
	vcdp->chgBit(c+938,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_way));
	vcdp->chgBus(c+939,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_address),7);
	vcdp->chgBit(c+940,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_valid));
	vcdp->chgBit(c+941,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_error));
	vcdp->chgBus(c+942,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__tagsWriteLastCmd_payload_data_address),20);
	vcdp->chgBit(c+943,((1U & vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_)));
	vcdp->chgBit(c+944,((1U & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
				   >> 1U))));
	vcdp->chgBus(c+945,((0xfffffU & (vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_10_ 
					 >> 2U))),20);
	vcdp->chgBus(c+946,((((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_41_) 
			      << 0x18U) | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_40_) 
					    << 0x10U) 
					   | (((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_39_) 
					       << 8U) 
					      | (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT___zz_38_))))),32);
	vcdp->chgBus(c+947,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_data),32);
	vcdp->chgBus(c+948,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_size),2);
	vcdp->chgBit(c+949,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_isLrsc));
	vcdp->chgBit(c+950,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_isAmo));
	vcdp->chgBit(c+951,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_amoCtrl_swap));
	vcdp->chgBus(c+952,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_request_amoCtrl_alu),3);
	vcdp->chgBus(c+953,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageA_mask),4);
	vcdp->chgBit(c+954,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stage0_colisions_regNextWhen));
	vcdp->chgBus(c+955,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_data),32);
	vcdp->chgBus(c+956,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_size),2);
	vcdp->chgBit(c+957,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_isLrsc));
	vcdp->chgBit(c+958,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_isAmo));
	vcdp->chgBit(c+959,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_swap));
	vcdp->chgBus(c+960,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu),3);
	vcdp->chgBus(c+961,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_physicalAddress),32);
	vcdp->chgBit(c+962,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_isIoAccess));
	vcdp->chgBit(c+963,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowRead));
	vcdp->chgBit(c+964,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowWrite));
	vcdp->chgBit(c+965,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_allowExecute));
	vcdp->chgBit(c+966,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_exception));
	vcdp->chgBit(c+967,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_mmuRsp_refilling));
	vcdp->chgBit(c+968,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_valid));
	vcdp->chgBit(c+969,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_error));
	vcdp->chgBus(c+970,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_tagsReadRsp_0_address),20);
	vcdp->chgBus(c+971,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_dataReadRsp_0),32);
	vcdp->chgBit(c+972,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits));
	vcdp->chgBit(c+973,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_waysHits));
	vcdp->chgBit(c+974,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_colisions));
	vcdp->chgBit(c+975,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_flusher_valid));
	vcdp->chgBit(c+976,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_lrsc_reserved));
	vcdp->chgBit(c+977,((1U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
				   >> 2U))));
	vcdp->chgBit(c+978,((3U == (3U & ((IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_request_amoCtrl_alu) 
					  >> 1U)))));
	vcdp->chgBit(c+979,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultRegValid));
	vcdp->chgBus(c+980,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_amo_resultReg),32);
	vcdp->chgBit(c+981,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__stageB_memCmdSent));
	vcdp->chgBit(c+982,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_valid));
	vcdp->chgBus(c+983,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value),3);
	vcdp->chgBit(c+984,((7U == (IData)(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_counter_value))));
	vcdp->chgBit(c+985,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_waysAllocator));
	vcdp->chgBit(c+986,(vlSymsp->TOP__dut__VexRiscv.__PVT__dataCache_1___DOT__loader_error));
    }
}

void Vdut::traceChgThis__6(Vdut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+987,(vlTOPp->sys_clk));
	vcdp->chgBit(c+988,(vlTOPp->serial_source_valid));
	vcdp->chgBit(c+989,(vlTOPp->serial_source_ready));
	vcdp->chgBus(c+990,(vlTOPp->serial_source_data),8);
	vcdp->chgBit(c+991,(vlTOPp->serial_sink_valid));
	vcdp->chgBit(c+992,(vlTOPp->serial_sink_ready));
	vcdp->chgBus(c+993,(vlTOPp->serial_sink_data),8);
	vcdp->chgBus(c+994,(vlTOPp->serial_sink_data),10);
	vcdp->chgBit(c+995,(((IData)(vlTOPp->serial_sink_valid) 
			     & (0x10U != (IData)(vlSymsp->TOP__dut.__PVT__main_uart_rx_fifo_level0)))));
	vcdp->chgBus(c+996,(vlSymsp->TOP__dut__VexRiscv.lastStageInstruction),32);
	vcdp->chgBus(c+997,(vlSymsp->TOP__dut__VexRiscv.lastStagePc),32);
	vcdp->chgBit(c+998,(vlSymsp->TOP__dut__VexRiscv.lastStageIsValid));
	vcdp->chgBit(c+999,(vlSymsp->TOP__dut__VexRiscv.lastStageIsFiring));
	vcdp->chgBus(c+1000,(vlSymsp->TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
	vcdp->chgBit(c+1001,(vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_valid));
	vcdp->chgBus(c+1002,(vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_address),5);
	vcdp->chgBus(c+1003,(vlSymsp->TOP__dut__VexRiscv.lastStageRegFileWrite_payload_data),32);
	vcdp->chgBus(c+1004,(vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interrupt_code),4);
	vcdp->chgBit(c+1005,(vlSymsp->TOP__dut__VexRiscv.CsrPlugin_interruptJump));
	vcdp->chgBit(c+1006,(vlSymsp->TOP__dut__VexRiscv.execute_CsrPlugin_inWfi));
	vcdp->chgBus(c+1007,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[0]),32);
	vcdp->chgBus(c+1008,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[1]),32);
	vcdp->chgBus(c+1009,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[2]),32);
	vcdp->chgBus(c+1010,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[3]),32);
	vcdp->chgBus(c+1011,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[4]),32);
	vcdp->chgBus(c+1012,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[5]),32);
	vcdp->chgBus(c+1013,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[6]),32);
	vcdp->chgBus(c+1014,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[7]),32);
	vcdp->chgBus(c+1015,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[8]),32);
	vcdp->chgBus(c+1016,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[9]),32);
	vcdp->chgBus(c+1017,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[10]),32);
	vcdp->chgBus(c+1018,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[11]),32);
	vcdp->chgBus(c+1019,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[12]),32);
	vcdp->chgBus(c+1020,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[13]),32);
	vcdp->chgBus(c+1021,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[14]),32);
	vcdp->chgBus(c+1022,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[15]),32);
	vcdp->chgBus(c+1023,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[16]),32);
	vcdp->chgBus(c+1024,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[17]),32);
	vcdp->chgBus(c+1025,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[18]),32);
	vcdp->chgBus(c+1026,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[19]),32);
	vcdp->chgBus(c+1027,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[20]),32);
	vcdp->chgBus(c+1028,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[21]),32);
	vcdp->chgBus(c+1029,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[22]),32);
	vcdp->chgBus(c+1030,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[23]),32);
	vcdp->chgBus(c+1031,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[24]),32);
	vcdp->chgBus(c+1032,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[25]),32);
	vcdp->chgBus(c+1033,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[26]),32);
	vcdp->chgBus(c+1034,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[27]),32);
	vcdp->chgBus(c+1035,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[28]),32);
	vcdp->chgBus(c+1036,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[29]),32);
	vcdp->chgBus(c+1037,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[30]),32);
	vcdp->chgBus(c+1038,(vlSymsp->TOP__dut__VexRiscv.RegFilePlugin_regFile[31]),32);
    }
}
