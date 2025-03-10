// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VELEVATOR_CONTROLLER_FSM__SYMS_H_
#define _VELEVATOR_CONTROLLER_FSM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Velevator_controller_fsm.h"

// SYMS CLASS
class Velevator_controller_fsm__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Velevator_controller_fsm*      TOPp;
    
    // CREATORS
    Velevator_controller_fsm__Syms(Velevator_controller_fsm* topp, const char* namep);
    ~Velevator_controller_fsm__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
