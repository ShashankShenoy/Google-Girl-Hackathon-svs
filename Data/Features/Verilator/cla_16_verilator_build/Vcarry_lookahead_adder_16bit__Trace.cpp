// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcarry_lookahead_adder_16bit__Syms.h"


void Vcarry_lookahead_adder_16bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vcarry_lookahead_adder_16bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->carry_lookahead_adder_16bit__DOT__p),16);
            tracep->chgSData(oldp+1,(vlTOPp->carry_lookahead_adder_16bit__DOT__g),16);
            tracep->chgIData(oldp+2,(vlTOPp->carry_lookahead_adder_16bit__DOT__c),17);
        }
        tracep->chgSData(oldp+3,(vlTOPp->a),16);
        tracep->chgSData(oldp+4,(vlTOPp->b),16);
        tracep->chgBit(oldp+5,(vlTOPp->cin));
        tracep->chgSData(oldp+6,(vlTOPp->sum),16);
        tracep->chgBit(oldp+7,(vlTOPp->cout));
    }
}

void Vcarry_lookahead_adder_16bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vcarry_lookahead_adder_16bit__Syms*>(userp);
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
