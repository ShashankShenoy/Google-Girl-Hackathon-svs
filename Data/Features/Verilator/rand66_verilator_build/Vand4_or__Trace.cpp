// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand4_or__Syms.h"


void Vand4_or::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vand4_or::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->c));
        tracep->chgBit(oldp+3,(vlTOPp->d));
        tracep->chgBit(oldp+4,(vlTOPp->y));
    }
}

void Vand4_or::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
