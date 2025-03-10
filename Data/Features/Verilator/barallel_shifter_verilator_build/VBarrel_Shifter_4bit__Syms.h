// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBARREL_SHIFTER_4BIT__SYMS_H_
#define _VBARREL_SHIFTER_4BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBarrel_Shifter_4bit.h"

// SYMS CLASS
class VBarrel_Shifter_4bit__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VBarrel_Shifter_4bit*          TOPp;
    
    // CREATORS
    VBarrel_Shifter_4bit__Syms(VBarrel_Shifter_4bit* topp, const char* namep);
    ~VBarrel_Shifter_4bit__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
