// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCarry_Lookahead_Adder_4bit__Syms.h"


void VCarry_Lookahead_Adder_4bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VCarry_Lookahead_Adder_4bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P),4);
            tracep->chgCData(oldp+1,(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G),4);
            tracep->chgCData(oldp+2,(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C),4);
        }
        tracep->chgCData(oldp+3,(vlTOPp->A),4);
        tracep->chgCData(oldp+4,(vlTOPp->B),4);
        tracep->chgBit(oldp+5,(vlTOPp->Cin));
        tracep->chgCData(oldp+6,(vlTOPp->Sum),4);
        tracep->chgBit(oldp+7,(vlTOPp->Cout));
    }
}

void VCarry_Lookahead_Adder_4bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VCarry_Lookahead_Adder_4bit__Syms*>(userp);
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
