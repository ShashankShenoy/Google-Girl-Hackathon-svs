// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRing_Counter_4bit__Syms.h"


//======================

void VRing_Counter_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VRing_Counter_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRing_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VRing_Counter_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRing_Counter_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VRing_Counter_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VRing_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VRing_Counter_4bit__Syms*>(userp);
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VRing_Counter_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VRing_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VRing_Counter_4bit__Syms*>(userp);
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBus(c+3,"Q", false,-1, 3,0);
        tracep->declBit(c+1,"Ring_Counter_4bit clk", false,-1);
        tracep->declBit(c+2,"Ring_Counter_4bit rst", false,-1);
        tracep->declBus(c+3,"Ring_Counter_4bit Q", false,-1, 3,0);
    }
}

void VRing_Counter_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VRing_Counter_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VRing_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VRing_Counter_4bit__Syms*>(userp);
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VRing_Counter_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VRing_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VRing_Counter_4bit__Syms*>(userp);
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullCData(oldp+3,(vlTOPp->Q),4);
    }
}
