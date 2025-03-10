// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand_or_flipflop__Syms.h"


void Vand_or_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vand_or_flipflop__Syms* __restrict vlSymsp = static_cast<Vand_or_flipflop__Syms*>(userp);
    Vand_or_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vand_or_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vand_or_flipflop__Syms* __restrict vlSymsp = static_cast<Vand_or_flipflop__Syms*>(userp);
    Vand_or_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->a));
        tracep->chgBit(oldp+3,(vlTOPp->b));
        tracep->chgBit(oldp+4,(vlTOPp->c));
        tracep->chgBit(oldp+5,(vlTOPp->q));
        tracep->chgBit(oldp+6,(((IData)(vlTOPp->a) 
                                & (IData)(vlTOPp->b))));
        tracep->chgBit(oldp+7,((((IData)(vlTOPp->a) 
                                 & (IData)(vlTOPp->b)) 
                                | (IData)(vlTOPp->c))));
    }
}

void Vand_or_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vand_or_flipflop__Syms* __restrict vlSymsp = static_cast<Vand_or_flipflop__Syms*>(userp);
    Vand_or_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
