// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEXCESS3_TO_BCD_CONVERTER__SYMS_H_
#define _VEXCESS3_TO_BCD_CONVERTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vexcess3_to_bcd_converter.h"

// SYMS CLASS
class Vexcess3_to_bcd_converter__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vexcess3_to_bcd_converter*     TOPp;
    
    // CREATORS
    Vexcess3_to_bcd_converter__Syms(Vexcess3_to_bcd_converter* topp, const char* namep);
    ~Vexcess3_to_bcd_converter__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
