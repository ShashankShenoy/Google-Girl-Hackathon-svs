// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRIPPLE_CARRY_ADDER_4BIT__SYMS_H_
#define _VRIPPLE_CARRY_ADDER_4BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VRipple_Carry_Adder_4bit.h"

// SYMS CLASS
class VRipple_Carry_Adder_4bit__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VRipple_Carry_Adder_4bit*      TOPp;
    
    // CREATORS
    VRipple_Carry_Adder_4bit__Syms(VRipple_Carry_Adder_4bit* topp, const char* namep);
    ~VRipple_Carry_Adder_4bit__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
