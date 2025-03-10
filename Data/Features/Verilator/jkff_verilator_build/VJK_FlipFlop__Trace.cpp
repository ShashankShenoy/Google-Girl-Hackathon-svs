// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VJK_FlipFlop__Syms.h"


void VJK_FlipFlop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VJK_FlipFlop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->J));
        tracep->chgBit(oldp+1,(vlTOPp->K));
        tracep->chgBit(oldp+2,(vlTOPp->clk));
        tracep->chgBit(oldp+3,(vlTOPp->rst));
        tracep->chgBit(oldp+4,(vlTOPp->Q));
    }
}

void VJK_FlipFlop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
