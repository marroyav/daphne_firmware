// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vdut__Syms_H_
#define _Vdut__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vdut.h"
#include "Vdut_dut.h"
#include "Vdut_VexRiscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vdut__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vdut*                          TOPp;
    Vdut_dut                       TOP__dut;
    Vdut_VexRiscv                  TOP__dut__VexRiscv;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_dut__VexRiscv;
    
    // CREATORS
    Vdut__Syms(Vdut* topp, const char* namep);
    ~Vdut__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
