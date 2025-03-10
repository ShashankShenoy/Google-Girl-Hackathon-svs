// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdebounce__Syms.h"


void Vdebounce::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vdebounce::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->in));
        tracep->chgBit(oldp+3,(vlTOPp->out));
        tracep->chgIData(oldp+4,(vlTOPp->debounce__DOT__count),20);
        tracep->chgBit(oldp+5,(vlTOPp->debounce__DOT__sync_0));
        tracep->chgBit(oldp+6,(vlTOPp->debounce__DOT__sync_1));
    }
}

void Vdebounce::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
