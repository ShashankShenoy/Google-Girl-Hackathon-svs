// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VNAND_OR_BUFFER_FLIPFLOP__SYMS_H_
#define _VNAND_OR_BUFFER_FLIPFLOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vnand_or_buffer_flipflop.h"

// SYMS CLASS
class Vnand_or_buffer_flipflop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vnand_or_buffer_flipflop*      TOPp;
    
    // CREATORS
    Vnand_or_buffer_flipflop__Syms(Vnand_or_buffer_flipflop* topp, const char* namep);
    ~Vnand_or_buffer_flipflop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
