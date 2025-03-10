// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNOR_gate__Syms.h"


void VNOR_gate::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VNOR_gate__Syms* __restrict vlSymsp = static_cast<VNOR_gate__Syms*>(userp);
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VNOR_gate::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VNOR_gate__Syms* __restrict vlSymsp = static_cast<VNOR_gate__Syms*>(userp);
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->Y));
    }
}

void VNOR_gate::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VNOR_gate__Syms* __restrict vlSymsp = static_cast<VNOR_gate__Syms*>(userp);
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
