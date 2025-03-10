// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRandom_Circuit_38__Syms.h"


//======================

void VRandom_Circuit_38::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VRandom_Circuit_38::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRandom_Circuit_38__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_38__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRandom_Circuit_38::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VRandom_Circuit_38::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VRandom_Circuit_38__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_38__Syms*>(userp);
    VRandom_Circuit_38* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VRandom_Circuit_38::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VRandom_Circuit_38__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_38__Syms*>(userp);
    VRandom_Circuit_38* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"clk", false,-1);
        tracep->declBit(c+4,"rst", false,-1);
        tracep->declBit(c+5,"Q", false,-1);
        tracep->declBit(c+1,"Random_Circuit_38 A", false,-1);
        tracep->declBit(c+2,"Random_Circuit_38 B", false,-1);
        tracep->declBit(c+3,"Random_Circuit_38 clk", false,-1);
        tracep->declBit(c+4,"Random_Circuit_38 rst", false,-1);
        tracep->declBit(c+5,"Random_Circuit_38 Q", false,-1);
        tracep->declBit(c+6,"Random_Circuit_38 xor_out", false,-1);
        tracep->declBit(c+7,"Random_Circuit_38 and_out", false,-1);
    }
}

void VRandom_Circuit_38::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VRandom_Circuit_38::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VRandom_Circuit_38__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_38__Syms*>(userp);
    VRandom_Circuit_38* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VRandom_Circuit_38::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VRandom_Circuit_38__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_38__Syms*>(userp);
    VRandom_Circuit_38* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->clk));
        tracep->fullBit(oldp+4,(vlTOPp->rst));
        tracep->fullBit(oldp+5,(vlTOPp->Q));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->A) 
                                 ^ (IData)(vlTOPp->B))));
        tracep->fullBit(oldp+7,(((IData)(vlTOPp->A) 
                                 & (IData)(vlTOPp->B))));
    }
}
