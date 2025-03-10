// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaoi_mux_flipflop__Syms.h"


void Vaoi_mux_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vaoi_mux_flipflop__Syms* __restrict vlSymsp = static_cast<Vaoi_mux_flipflop__Syms*>(userp);
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vaoi_mux_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vaoi_mux_flipflop__Syms* __restrict vlSymsp = static_cast<Vaoi_mux_flipflop__Syms*>(userp);
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->a));
        tracep->chgBit(oldp+3,(vlTOPp->b));
        tracep->chgBit(oldp+4,(vlTOPp->c));
        tracep->chgBit(oldp+5,(vlTOPp->sel));
        tracep->chgBit(oldp+6,(vlTOPp->q));
        tracep->chgBit(oldp+7,((1U & (~ (((IData)(vlTOPp->a) 
                                          & (IData)(vlTOPp->b)) 
                                         | (IData)(vlTOPp->c))))));
        tracep->chgBit(oldp+8,((1U & ((IData)(vlTOPp->sel)
                                       ? (~ (((IData)(vlTOPp->a) 
                                              & (IData)(vlTOPp->b)) 
                                             | (IData)(vlTOPp->c)))
                                       : (IData)(vlTOPp->a)))));
    }
}

void Vaoi_mux_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vaoi_mux_flipflop__Syms* __restrict vlSymsp = static_cast<Vaoi_mux_flipflop__Syms*>(userp);
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
