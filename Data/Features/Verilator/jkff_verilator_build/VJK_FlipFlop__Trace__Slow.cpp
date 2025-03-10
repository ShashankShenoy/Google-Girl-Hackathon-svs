// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VJK_FlipFlop__Syms.h"


//======================

void VJK_FlipFlop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VJK_FlipFlop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VJK_FlipFlop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VJK_FlipFlop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VJK_FlipFlop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"J", false,-1);
        tracep->declBit(c+2,"K", false,-1);
        tracep->declBit(c+3,"clk", false,-1);
        tracep->declBit(c+4,"rst", false,-1);
        tracep->declBit(c+5,"Q", false,-1);
        tracep->declBit(c+1,"JK_FlipFlop J", false,-1);
        tracep->declBit(c+2,"JK_FlipFlop K", false,-1);
        tracep->declBit(c+3,"JK_FlipFlop clk", false,-1);
        tracep->declBit(c+4,"JK_FlipFlop rst", false,-1);
        tracep->declBit(c+5,"JK_FlipFlop Q", false,-1);
    }
}

void VJK_FlipFlop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VJK_FlipFlop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VJK_FlipFlop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = static_cast<VJK_FlipFlop__Syms*>(userp);
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->J));
        tracep->fullBit(oldp+2,(vlTOPp->K));
        tracep->fullBit(oldp+3,(vlTOPp->clk));
        tracep->fullBit(oldp+4,(vlTOPp->rst));
        tracep->fullBit(oldp+5,(vlTOPp->Q));
    }
}
