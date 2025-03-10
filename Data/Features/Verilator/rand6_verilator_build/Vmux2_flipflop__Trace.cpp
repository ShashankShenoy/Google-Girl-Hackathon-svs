// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2_flipflop__Syms.h"


void Vmux2_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmux2_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->sel));
        tracep->chgBit(oldp+3,(vlTOPp->d0));
        tracep->chgBit(oldp+4,(vlTOPp->d1));
        tracep->chgBit(oldp+5,(vlTOPp->q));
        tracep->chgBit(oldp+6,(((IData)(vlTOPp->sel)
                                 ? (IData)(vlTOPp->d1)
                                 : (IData)(vlTOPp->d0))));
    }
}

void Vmux2_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
