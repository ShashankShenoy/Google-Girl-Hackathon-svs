// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VD_FlipFlop__Syms.h"


//======================

void VD_FlipFlop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VD_FlipFlop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VD_FlipFlop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VD_FlipFlop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VD_FlipFlop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"D", false,-1);
        tracep->declBit(c+2,"clk", false,-1);
        tracep->declBit(c+3,"rst", false,-1);
        tracep->declBit(c+4,"Q", false,-1);
        tracep->declBit(c+1,"D_FlipFlop D", false,-1);
        tracep->declBit(c+2,"D_FlipFlop clk", false,-1);
        tracep->declBit(c+3,"D_FlipFlop rst", false,-1);
        tracep->declBit(c+4,"D_FlipFlop Q", false,-1);
    }
}

void VD_FlipFlop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VD_FlipFlop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VD_FlipFlop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VD_FlipFlop__Syms* __restrict vlSymsp = static_cast<VD_FlipFlop__Syms*>(userp);
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->D));
        tracep->fullBit(oldp+2,(vlTOPp->clk));
        tracep->fullBit(oldp+3,(vlTOPp->rst));
        tracep->fullBit(oldp+4,(vlTOPp->Q));
    }
}
