// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPARITY_GENERATOR_ODD__SYMS_H_
#define _VPARITY_GENERATOR_ODD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VParity_Generator_Odd.h"

// SYMS CLASS
class VParity_Generator_Odd__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VParity_Generator_Odd*         TOPp;
    
    // CREATORS
    VParity_Generator_Odd__Syms(VParity_Generator_Odd* topp, const char* namep);
    ~VParity_Generator_Odd__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
