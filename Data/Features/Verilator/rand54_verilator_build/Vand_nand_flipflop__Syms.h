// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAND_NAND_FLIPFLOP__SYMS_H_
#define _VAND_NAND_FLIPFLOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vand_nand_flipflop.h"

// SYMS CLASS
class Vand_nand_flipflop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vand_nand_flipflop*            TOPp;
    
    // CREATORS
    Vand_nand_flipflop__Syms(Vand_nand_flipflop* topp, const char* namep);
    ~Vand_nand_flipflop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
