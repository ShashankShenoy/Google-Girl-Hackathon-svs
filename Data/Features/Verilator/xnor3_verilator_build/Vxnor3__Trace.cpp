// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxnor3__Syms.h"


void Vxnor3::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vxnor3::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->c));
        tracep->chgBit(oldp+3,(vlTOPp->out));
    }
}

void Vxnor3::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
