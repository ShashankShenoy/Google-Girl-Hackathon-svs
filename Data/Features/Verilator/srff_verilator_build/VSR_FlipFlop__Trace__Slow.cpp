// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSR_FlipFlop__Syms.h"


//======================

void VSR_FlipFlop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSR_FlipFlop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSR_FlipFlop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSR_FlipFlop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSR_FlipFlop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"S", false,-1);
        tracep->declBit(c+2,"R", false,-1);
        tracep->declBit(c+3,"clk", false,-1);
        tracep->declBit(c+4,"rst", false,-1);
        tracep->declBit(c+5,"Q", false,-1);
        tracep->declBit(c+1,"SR_FlipFlop S", false,-1);
        tracep->declBit(c+2,"SR_FlipFlop R", false,-1);
        tracep->declBit(c+3,"SR_FlipFlop clk", false,-1);
        tracep->declBit(c+4,"SR_FlipFlop rst", false,-1);
        tracep->declBit(c+5,"SR_FlipFlop Q", false,-1);
    }
}

void VSR_FlipFlop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSR_FlipFlop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSR_FlipFlop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = static_cast<VSR_FlipFlop__Syms*>(userp);
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->S));
        tracep->fullBit(oldp+2,(vlTOPp->R));
        tracep->fullBit(oldp+3,(vlTOPp->clk));
        tracep->fullBit(oldp+4,(vlTOPp->rst));
        tracep->fullBit(oldp+5,(vlTOPp->Q));
    }
}
