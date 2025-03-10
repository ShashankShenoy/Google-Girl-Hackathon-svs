// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnor_and_flipflop__Syms.h"


void Vnor_and_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vnor_and_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor_and_flipflop__Syms*>(userp);
    Vnor_and_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vnor_and_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vnor_and_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor_and_flipflop__Syms*>(userp);
    Vnor_and_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->p));
        tracep->chgBit(oldp+3,(vlTOPp->q));
        tracep->chgBit(oldp+4,(vlTOPp->d_out));
        tracep->chgBit(oldp+5,((1U & (~ ((IData)(vlTOPp->p) 
                                         | (IData)(vlTOPp->q))))));
        tracep->chgBit(oldp+6,(((~ ((IData)(vlTOPp->p) 
                                    | (IData)(vlTOPp->q))) 
                                & (IData)(vlTOPp->q))));
    }
}

void Vnor_and_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vnor_and_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor_and_flipflop__Syms*>(userp);
    Vnor_and_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
