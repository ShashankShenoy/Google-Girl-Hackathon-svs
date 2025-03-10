// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRANDOM_CIRCUIT_16__SYMS_H_
#define _VRANDOM_CIRCUIT_16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VRandom_Circuit_16.h"

// SYMS CLASS
class VRandom_Circuit_16__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VRandom_Circuit_16*            TOPp;
    
    // CREATORS
    VRandom_Circuit_16__Syms(VRandom_Circuit_16* topp, const char* namep);
    ~VRandom_Circuit_16__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
