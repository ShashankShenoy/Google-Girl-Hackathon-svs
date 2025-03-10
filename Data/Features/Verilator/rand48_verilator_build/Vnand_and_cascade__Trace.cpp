// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnand_and_cascade__Syms.h"


void Vnand_and_cascade::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vnand_and_cascade::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->c));
        tracep->chgBit(oldp+3,(vlTOPp->y));
        tracep->chgBit(oldp+4,((1U & (~ ((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b))))));
    }
}

void Vnand_and_cascade::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
