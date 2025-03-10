// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSHIFT_REGISTER_LEFT_8BIT__SYMS_H_
#define _VSHIFT_REGISTER_LEFT_8BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VShift_Register_Left_8bit.h"

// SYMS CLASS
class VShift_Register_Left_8bit__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VShift_Register_Left_8bit*     TOPp;
    
    // CREATORS
    VShift_Register_Left_8bit__Syms(VShift_Register_Left_8bit* topp, const char* namep);
    ~VShift_Register_Left_8bit__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
