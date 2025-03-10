// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTRAFFIC_LIGHT_FSM__SYMS_H_
#define _VTRAFFIC_LIGHT_FSM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtraffic_light_fsm.h"

// SYMS CLASS
class Vtraffic_light_fsm__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtraffic_light_fsm*            TOPp;
    
    // CREATORS
    Vtraffic_light_fsm__Syms(Vtraffic_light_fsm* topp, const char* namep);
    ~Vtraffic_light_fsm__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
