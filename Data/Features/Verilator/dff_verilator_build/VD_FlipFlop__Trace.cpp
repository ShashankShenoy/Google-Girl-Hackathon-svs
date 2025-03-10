// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VD_FlipFlop__Syms.h"


void VD_FlipFlop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VD_FlipFlop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->D));
        tracep->chgBit(oldp+1,(vlTOPp->clk));
        tracep->chgBit(oldp+2,(vlTOPp->rst));
        tracep->chgBit(oldp+3,(vlTOPp->Q));
    }
}

void VD_FlipFlop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
