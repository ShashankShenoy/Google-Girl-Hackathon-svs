// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VXNOR_AND_MUX_FLIPFLOP__SYMS_H_
#define _VXNOR_AND_MUX_FLIPFLOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vxnor_and_mux_flipflop.h"

// SYMS CLASS
class Vxnor_and_mux_flipflop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vxnor_and_mux_flipflop*        TOPp;
    
    // CREATORS
    Vxnor_and_mux_flipflop__Syms(Vxnor_and_mux_flipflop* topp, const char* namep);
    ~Vxnor_and_mux_flipflop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
