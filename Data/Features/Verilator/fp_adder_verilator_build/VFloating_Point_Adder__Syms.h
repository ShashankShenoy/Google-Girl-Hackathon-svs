// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VFLOATING_POINT_ADDER__SYMS_H_
#define _VFLOATING_POINT_ADDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VFloating_Point_Adder.h"

// SYMS CLASS
class VFloating_Point_Adder__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VFloating_Point_Adder*         TOPp;
    
    // CREATORS
    VFloating_Point_Adder__Syms(VFloating_Point_Adder* topp, const char* namep);
    ~VFloating_Point_Adder__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
