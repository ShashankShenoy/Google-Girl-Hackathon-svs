// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vt_flipflop__Syms.h"


void Vt_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vt_flipflop__Syms* __restrict vlSymsp = static_cast<Vt_flipflop__Syms*>(userp);
    Vt_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vt_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vt_flipflop__Syms* __restrict vlSymsp = static_cast<Vt_flipflop__Syms*>(userp);
    Vt_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->t));
        tracep->chgBit(oldp+3,(vlTOPp->q));
    }
}

void Vt_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vt_flipflop__Syms* __restrict vlSymsp = static_cast<Vt_flipflop__Syms*>(userp);
    Vt_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
