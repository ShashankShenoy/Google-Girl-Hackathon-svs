// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VENCODER_4TO2_PRIORITY__SYMS_H_
#define _VENCODER_4TO2_PRIORITY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VEncoder_4to2_priority.h"

// SYMS CLASS
class VEncoder_4to2_priority__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VEncoder_4to2_priority*        TOPp;
    
    // CREATORS
    VEncoder_4to2_priority__Syms(VEncoder_4to2_priority* topp, const char* namep);
    ~VEncoder_4to2_priority__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
