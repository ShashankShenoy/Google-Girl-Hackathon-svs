// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsynchronous_Counter_4bit__Syms.h"


//======================

void VAsynchronous_Counter_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsynchronous_Counter_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VAsynchronous_Counter_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsynchronous_Counter_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsynchronous_Counter_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VAsynchronous_Counter_4bit__Syms*>(userp);
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsynchronous_Counter_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VAsynchronous_Counter_4bit__Syms*>(userp);
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBus(c+4,"Q", false,-1, 3,0);
        tracep->declBit(c+1,"Asynchronous_Counter_4bit clk", false,-1);
        tracep->declBit(c+2,"Asynchronous_Counter_4bit rst", false,-1);
        tracep->declBit(c+3,"Asynchronous_Counter_4bit enable", false,-1);
        tracep->declBus(c+4,"Asynchronous_Counter_4bit Q", false,-1, 3,0);
    }
}

void VAsynchronous_Counter_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsynchronous_Counter_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VAsynchronous_Counter_4bit__Syms*>(userp);
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsynchronous_Counter_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = static_cast<VAsynchronous_Counter_4bit__Syms*>(userp);
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullCData(oldp+4,(vlTOPp->Q),4);
    }
}
