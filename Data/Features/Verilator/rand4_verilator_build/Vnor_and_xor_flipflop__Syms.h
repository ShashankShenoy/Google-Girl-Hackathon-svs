// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VNOR_AND_XOR_FLIPFLOP__SYMS_H_
#define _VNOR_AND_XOR_FLIPFLOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vnor_and_xor_flipflop.h"

// SYMS CLASS
class Vnor_and_xor_flipflop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vnor_and_xor_flipflop*         TOPp;
    
    // CREATORS
    Vnor_and_xor_flipflop__Syms(Vnor_and_xor_flipflop* topp, const char* namep);
    ~Vnor_and_xor_flipflop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
