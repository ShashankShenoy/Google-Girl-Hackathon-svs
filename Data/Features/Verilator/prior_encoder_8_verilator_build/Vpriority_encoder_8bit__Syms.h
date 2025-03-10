// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPRIORITY_ENCODER_8BIT__SYMS_H_
#define _VPRIORITY_ENCODER_8BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vpriority_encoder_8bit.h"

// SYMS CLASS
class Vpriority_encoder_8bit__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vpriority_encoder_8bit*        TOPp;
    
    // CREATORS
    Vpriority_encoder_8bit__Syms(Vpriority_encoder_8bit* topp, const char* namep);
    ~Vpriority_encoder_8bit__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
