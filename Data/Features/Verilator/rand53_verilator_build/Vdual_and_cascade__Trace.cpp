// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_and_cascade__Syms.h"


void Vdual_and_cascade::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vdual_and_cascade::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->c));
        tracep->chgBit(oldp+3,(vlTOPp->y));
        tracep->chgBit(oldp+4,(((IData)(vlTOPp->a) 
                                & (IData)(vlTOPp->b))));
    }
}

void Vdual_and_cascade::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
