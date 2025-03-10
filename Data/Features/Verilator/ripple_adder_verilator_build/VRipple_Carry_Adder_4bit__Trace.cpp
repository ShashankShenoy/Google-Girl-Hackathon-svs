// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRipple_Carry_Adder_4bit__Syms.h"


void VRipple_Carry_Adder_4bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VRipple_Carry_Adder_4bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1));
            tracep->chgBit(oldp+1,(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2));
            tracep->chgBit(oldp+2,(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3));
        }
        tracep->chgCData(oldp+3,(vlTOPp->A),4);
        tracep->chgCData(oldp+4,(vlTOPp->B),4);
        tracep->chgBit(oldp+5,(vlTOPp->Cin));
        tracep->chgCData(oldp+6,(vlTOPp->Sum),4);
        tracep->chgBit(oldp+7,(vlTOPp->Cout));
        tracep->chgBit(oldp+8,((1U & (IData)(vlTOPp->A))));
        tracep->chgBit(oldp+9,((1U & (IData)(vlTOPp->B))));
        tracep->chgBit(oldp+10,((1U & (((IData)(vlTOPp->A) 
                                        ^ (IData)(vlTOPp->B)) 
                                       ^ (IData)(vlTOPp->Cin)))));
        tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->A) 
                                       >> 1U))));
        tracep->chgBit(oldp+12,((1U & ((IData)(vlTOPp->B) 
                                       >> 1U))));
        tracep->chgBit(oldp+13,((1U & ((((IData)(vlTOPp->A) 
                                         ^ (IData)(vlTOPp->B)) 
                                        >> 1U) ^ (IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1)))));
        tracep->chgBit(oldp+14,((1U & ((IData)(vlTOPp->A) 
                                       >> 2U))));
        tracep->chgBit(oldp+15,((1U & ((IData)(vlTOPp->B) 
                                       >> 2U))));
        tracep->chgBit(oldp+16,((1U & ((((IData)(vlTOPp->A) 
                                         ^ (IData)(vlTOPp->B)) 
                                        >> 2U) ^ (IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2)))));
        tracep->chgBit(oldp+17,((1U & ((IData)(vlTOPp->A) 
                                       >> 3U))));
        tracep->chgBit(oldp+18,((1U & ((IData)(vlTOPp->B) 
                                       >> 3U))));
        tracep->chgBit(oldp+19,((1U & ((((IData)(vlTOPp->A) 
                                         ^ (IData)(vlTOPp->B)) 
                                        >> 3U) ^ (IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3)))));
    }
}

void VRipple_Carry_Adder_4bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
