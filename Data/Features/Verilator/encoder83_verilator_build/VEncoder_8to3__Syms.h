// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VENCODER_8TO3__SYMS_H_
#define _VENCODER_8TO3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VEncoder_8to3.h"

// SYMS CLASS
class VEncoder_8to3__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VEncoder_8to3*                 TOPp;
    
    // CREATORS
    VEncoder_8to3__Syms(VEncoder_8to3* topp, const char* namep);
    ~VEncoder_8to3__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
