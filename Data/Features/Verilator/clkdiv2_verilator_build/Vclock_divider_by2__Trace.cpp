// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_divider_by2__Syms.h"


void Vclock_divider_by2::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vclock_divider_by2::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->clk_div2));
    }
}

void Vclock_divider_by2::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
