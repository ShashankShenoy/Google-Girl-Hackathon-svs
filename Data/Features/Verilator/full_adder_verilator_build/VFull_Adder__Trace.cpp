// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFull_Adder__Syms.h"


void VFull_Adder::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFull_Adder::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->Cin));
        tracep->chgBit(oldp+3,(vlTOPp->Sum));
        tracep->chgBit(oldp+4,(vlTOPp->Carry));
    }
}

void VFull_Adder::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
