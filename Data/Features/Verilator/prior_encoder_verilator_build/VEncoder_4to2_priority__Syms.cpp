// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VEncoder_4to2_priority__Syms.h"
#include "VEncoder_4to2_priority.h"



// FUNCTIONS
VEncoder_4to2_priority__Syms::VEncoder_4to2_priority__Syms(VEncoder_4to2_priority* topp, const char* namep)
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
