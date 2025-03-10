// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFloating_Point_Adder__Syms.h"


void VFloating_Point_Adder::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFloating_Point_Adder__Syms* __restrict vlSymsp = static_cast<VFloating_Point_Adder__Syms*>(userp);
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFloating_Point_Adder::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFloating_Point_Adder__Syms* __restrict vlSymsp = static_cast<VFloating_Point_Adder__Syms*>(userp);
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),8);
        tracep->chgCData(oldp+1,(vlTOPp->B),8);
        tracep->chgCData(oldp+2,(vlTOPp->result),8);
        tracep->chgCData(oldp+3,((0xffU & ((IData)(vlTOPp->A) 
                                           + (IData)(vlTOPp->B)))),8);
    }
}

void VFloating_Point_Adder::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFloating_Point_Adder__Syms* __restrict vlSymsp = static_cast<VFloating_Point_Adder__Syms*>(userp);
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
