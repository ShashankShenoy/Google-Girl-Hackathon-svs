// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSR_FlipFlop__Syms.h"


void VSR_FlipFlop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSR_FlipFlop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->S));
        tracep->chgBit(oldp+1,(vlTOPp->R));
        tracep->chgBit(oldp+2,(vlTOPp->clk));
        tracep->chgBit(oldp+3,(vlTOPp->rst));
        tracep->chgBit(oldp+4,(vlTOPp->Q));
    }
}

void VSR_FlipFlop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
