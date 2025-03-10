// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmealy_fsm_8bit__Syms.h"
#include "Vmealy_fsm_8bit.h"



// FUNCTIONS
Vmealy_fsm_8bit__Syms::Vmealy_fsm_8bit__Syms(Vmealy_fsm_8bit* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
