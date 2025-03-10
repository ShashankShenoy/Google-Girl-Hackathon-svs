// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vt_ff_and_nor__Syms.h"


void Vt_ff_and_nor::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vt_ff_and_nor::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->t));
        tracep->chgBit(oldp+3,(vlTOPp->q));
        tracep->chgBit(oldp+4,((1U & (~ ((IData)(vlTOPp->q) 
                                         | (IData)(vlTOPp->t))))));
        tracep->chgBit(oldp+5,(((~ ((IData)(vlTOPp->q) 
                                    | (IData)(vlTOPp->t))) 
                                & (IData)(vlTOPp->q))));
    }
}

void Vt_ff_and_nor::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
