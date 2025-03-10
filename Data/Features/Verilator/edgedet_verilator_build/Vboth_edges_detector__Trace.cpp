// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vboth_edges_detector__Syms.h"


void Vboth_edges_detector::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vboth_edges_detector::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->in));
        tracep->chgBit(oldp+3,(vlTOPp->out));
        tracep->chgBit(oldp+4,(vlTOPp->both_edges_detector__DOT__in_delay));
    }
}

void Vboth_edges_detector::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
