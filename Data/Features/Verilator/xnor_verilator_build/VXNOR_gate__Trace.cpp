// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VXNOR_gate__Syms.h"


void VXNOR_gate::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VXNOR_gate__Syms* __restrict vlSymsp = static_cast<VXNOR_gate__Syms*>(userp);
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VXNOR_gate::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VXNOR_gate__Syms* __restrict vlSymsp = static_cast<VXNOR_gate__Syms*>(userp);
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->Y));
    }
}

void VXNOR_gate::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VXNOR_gate__Syms* __restrict vlSymsp = static_cast<VXNOR_gate__Syms*>(userp);
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
