// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsequence_detector_0101__Syms.h"


void Vsequence_detector_0101::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_0101__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0101__Syms*>(userp);
    Vsequence_detector_0101* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsequence_detector_0101::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_0101__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0101__Syms*>(userp);
    Vsequence_detector_0101* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->in));
        tracep->chgBit(oldp+3,(vlTOPp->detected));
        tracep->chgCData(oldp+4,(vlTOPp->sequence_detector_0101__DOT__state),3);
        tracep->chgCData(oldp+5,(vlTOPp->sequence_detector_0101__DOT__next_state),3);
    }
}

void Vsequence_detector_0101::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsequence_detector_0101__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0101__Syms*>(userp);
    Vsequence_detector_0101* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
