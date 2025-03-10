// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VT_FlipFlop__Syms.h"


//======================

void VT_FlipFlop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VT_FlipFlop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VT_FlipFlop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VT_FlipFlop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VT_FlipFlop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"T", false,-1);
        tracep->declBit(c+2,"clk", false,-1);
        tracep->declBit(c+3,"rst", false,-1);
        tracep->declBit(c+4,"Q", false,-1);
        tracep->declBit(c+1,"T_FlipFlop T", false,-1);
        tracep->declBit(c+2,"T_FlipFlop clk", false,-1);
        tracep->declBit(c+3,"T_FlipFlop rst", false,-1);
        tracep->declBit(c+4,"T_FlipFlop Q", false,-1);
    }
}

void VT_FlipFlop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VT_FlipFlop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VT_FlipFlop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VT_FlipFlop__Syms* __restrict vlSymsp = static_cast<VT_FlipFlop__Syms*>(userp);
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->T));
        tracep->fullBit(oldp+2,(vlTOPp->clk));
        tracep->fullBit(oldp+3,(vlTOPp->rst));
        tracep->fullBit(oldp+4,(vlTOPp->Q));
    }
}
