// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VT_FlipFlop__Syms.h"


void VT_FlipFlop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VT_FlipFlop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->T));
        tracep->chgBit(oldp+1,(vlTOPp->clk));
        tracep->chgBit(oldp+2,(vlTOPp->rst));
        tracep->chgBit(oldp+3,(vlTOPp->Q));
    }
}

void VT_FlipFlop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
