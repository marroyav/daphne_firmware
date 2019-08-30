// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdut__Syms.h"
#include "Vdut.h"
#include "Vdut_dut.h"
#include "Vdut_VexRiscv.h"

// FUNCTIONS
Vdut__Syms::Vdut__Syms(Vdut* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__dut                       (Verilated::catName(topp->name(),"dut"))
	, TOP__dut__VexRiscv             (Verilated::catName(topp->name(),"dut.VexRiscv"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->dut                       = &TOP__dut;
    TOPp->dut->VexRiscv             = &TOP__dut__VexRiscv;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__dut.__Vconfigure(this, true);
    TOP__dut__VexRiscv.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_dut__VexRiscv.configure(this,name(),"dut.VexRiscv");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"CsrPlugin_interruptJump", &(TOP__dut__VexRiscv.CsrPlugin_interruptJump), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"CsrPlugin_interrupt_code", &(TOP__dut__VexRiscv.CsrPlugin_interrupt_code), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"IBusCachedPlugin_fetchPc_pcReg", &(TOP__dut__VexRiscv.IBusCachedPlugin_fetchPc_pcReg), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"RegFilePlugin_regFile", &(TOP__dut__VexRiscv.RegFilePlugin_regFile), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"execute_CsrPlugin_inWfi", &(TOP__dut__VexRiscv.execute_CsrPlugin_inWfi), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStageInstruction", &(TOP__dut__VexRiscv.lastStageInstruction), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStageIsFiring", &(TOP__dut__VexRiscv.lastStageIsFiring), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStageIsValid", &(TOP__dut__VexRiscv.lastStageIsValid), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStagePc", &(TOP__dut__VexRiscv.lastStagePc), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_payload_address", &(TOP__dut__VexRiscv.lastStageRegFileWrite_payload_address), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_payload_data", &(TOP__dut__VexRiscv.lastStageRegFileWrite_payload_data), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_dut__VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_valid", &(TOP__dut__VexRiscv.lastStageRegFileWrite_valid), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
