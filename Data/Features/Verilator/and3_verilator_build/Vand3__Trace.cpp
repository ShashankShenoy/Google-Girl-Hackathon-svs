// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand3__Syms.h"


void Vand3::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vand3__Syms* __restrict vlSymsp = static_cast<Vand3__Syms*>(userp);
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vand3::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vand3__Syms* __restrict vlSymsp = static_cast<Vand3__Syms*>(userp);
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->c));
        tracep->chgBit(oldp+3,(vlTOPp->out));
    }
}

void Vand3::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vand3__Syms* __restrict vlSymsp = static_cast<Vand3__Syms*>(userp);
    Vand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
