// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRipple_Carry_Adder_4bit__Syms.h"


//======================

void VRipple_Carry_Adder_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VRipple_Carry_Adder_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRipple_Carry_Adder_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VRipple_Carry_Adder_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VRipple_Carry_Adder_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+4,"A", false,-1, 3,0);
        tracep->declBus(c+5,"B", false,-1, 3,0);
        tracep->declBit(c+6,"Cin", false,-1);
        tracep->declBus(c+7,"Sum", false,-1, 3,0);
        tracep->declBit(c+8,"Cout", false,-1);
        tracep->declBus(c+4,"Ripple_Carry_Adder_4bit A", false,-1, 3,0);
        tracep->declBus(c+5,"Ripple_Carry_Adder_4bit B", false,-1, 3,0);
        tracep->declBit(c+6,"Ripple_Carry_Adder_4bit Cin", false,-1);
        tracep->declBus(c+7,"Ripple_Carry_Adder_4bit Sum", false,-1, 3,0);
        tracep->declBit(c+8,"Ripple_Carry_Adder_4bit Cout", false,-1);
        tracep->declBit(c+1,"Ripple_Carry_Adder_4bit C1", false,-1);
        tracep->declBit(c+2,"Ripple_Carry_Adder_4bit C2", false,-1);
        tracep->declBit(c+3,"Ripple_Carry_Adder_4bit C3", false,-1);
        tracep->declBit(c+9,"Ripple_Carry_Adder_4bit FA0 A", false,-1);
        tracep->declBit(c+10,"Ripple_Carry_Adder_4bit FA0 B", false,-1);
        tracep->declBit(c+6,"Ripple_Carry_Adder_4bit FA0 Cin", false,-1);
        tracep->declBit(c+11,"Ripple_Carry_Adder_4bit FA0 Sum", false,-1);
        tracep->declBit(c+1,"Ripple_Carry_Adder_4bit FA0 Cout", false,-1);
        tracep->declBit(c+12,"Ripple_Carry_Adder_4bit FA1 A", false,-1);
        tracep->declBit(c+13,"Ripple_Carry_Adder_4bit FA1 B", false,-1);
        tracep->declBit(c+1,"Ripple_Carry_Adder_4bit FA1 Cin", false,-1);
        tracep->declBit(c+14,"Ripple_Carry_Adder_4bit FA1 Sum", false,-1);
        tracep->declBit(c+2,"Ripple_Carry_Adder_4bit FA1 Cout", false,-1);
        tracep->declBit(c+15,"Ripple_Carry_Adder_4bit FA2 A", false,-1);
        tracep->declBit(c+16,"Ripple_Carry_Adder_4bit FA2 B", false,-1);
        tracep->declBit(c+2,"Ripple_Carry_Adder_4bit FA2 Cin", false,-1);
        tracep->declBit(c+17,"Ripple_Carry_Adder_4bit FA2 Sum", false,-1);
        tracep->declBit(c+3,"Ripple_Carry_Adder_4bit FA2 Cout", false,-1);
        tracep->declBit(c+18,"Ripple_Carry_Adder_4bit FA3 A", false,-1);
        tracep->declBit(c+19,"Ripple_Carry_Adder_4bit FA3 B", false,-1);
        tracep->declBit(c+3,"Ripple_Carry_Adder_4bit FA3 Cin", false,-1);
        tracep->declBit(c+20,"Ripple_Carry_Adder_4bit FA3 Sum", false,-1);
        tracep->declBit(c+8,"Ripple_Carry_Adder_4bit FA3 Cout", false,-1);
    }
}

void VRipple_Carry_Adder_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VRipple_Carry_Adder_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VRipple_Carry_Adder_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = static_cast<VRipple_Carry_Adder_4bit__Syms*>(userp);
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1));
        tracep->fullBit(oldp+2,(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2));
        tracep->fullBit(oldp+3,(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3));
        tracep->fullCData(oldp+4,(vlTOPp->A),4);
        tracep->fullCData(oldp+5,(vlTOPp->B),4);
        tracep->fullBit(oldp+6,(vlTOPp->Cin));
        tracep->fullCData(oldp+7,(vlTOPp->Sum),4);
        tracep->fullBit(oldp+8,(vlTOPp->Cout));
        tracep->fullBit(oldp+9,((1U & (IData)(vlTOPp->A))));
        tracep->fullBit(oldp+10,((1U & (IData)(vlTOPp->B))));
        tracep->fullBit(oldp+11,((1U & (((IData)(vlTOPp->A) 
                                         ^ (IData)(vlTOPp->B)) 
                                        ^ (IData)(vlTOPp->Cin)))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->A) 
                                        >> 1U))));
        tracep->fullBit(oldp+13,((1U & ((IData)(vlTOPp->B) 
                                        >> 1U))));
        tracep->fullBit(oldp+14,((1U & ((((IData)(vlTOPp->A) 
                                          ^ (IData)(vlTOPp->B)) 
                                         >> 1U) ^ (IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1)))));
        tracep->fullBit(oldp+15,((1U & ((IData)(vlTOPp->A) 
                                        >> 2U))));
        tracep->fullBit(oldp+16,((1U & ((IData)(vlTOPp->B) 
                                        >> 2U))));
        tracep->fullBit(oldp+17,((1U & ((((IData)(vlTOPp->A) 
                                          ^ (IData)(vlTOPp->B)) 
                                         >> 2U) ^ (IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2)))));
        tracep->fullBit(oldp+18,((1U & ((IData)(vlTOPp->A) 
                                        >> 3U))));
        tracep->fullBit(oldp+19,((1U & ((IData)(vlTOPp->B) 
                                        >> 3U))));
        tracep->fullBit(oldp+20,((1U & ((((IData)(vlTOPp->A) 
                                          ^ (IData)(vlTOPp->B)) 
                                         >> 3U) ^ (IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3)))));
    }
}
