// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSEQUENCE_DETECTOR_1001__SYMS_H_
#define _VSEQUENCE_DETECTOR_1001__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vsequence_detector_1001.h"

// SYMS CLASS
class Vsequence_detector_1001__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vsequence_detector_1001*       TOPp;
    
    // CREATORS
    Vsequence_detector_1001__Syms(Vsequence_detector_1001* topp, const char* namep);
    ~Vsequence_detector_1001__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
