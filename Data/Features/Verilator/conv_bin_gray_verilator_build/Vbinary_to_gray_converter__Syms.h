// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBINARY_TO_GRAY_CONVERTER__SYMS_H_
#define _VBINARY_TO_GRAY_CONVERTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbinary_to_gray_converter.h"

// SYMS CLASS
class Vbinary_to_gray_converter__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vbinary_to_gray_converter*     TOPp;
    
    // CREATORS
    Vbinary_to_gray_converter__Syms(Vbinary_to_gray_converter* topp, const char* namep);
    ~Vbinary_to_gray_converter__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
