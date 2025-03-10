// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsr_flipflop__Syms.h"


//======================

void Vsr_flipflop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsr_flipflop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsr_flipflop__Syms* __restrict vlSymsp = static_cast<Vsr_flipflop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsr_flipflop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsr_flipflop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsr_flipflop__Syms* __restrict vlSymsp = static_cast<Vsr_flipflop__Syms*>(userp);
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsr_flipflop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsr_flipflop__Syms* __restrict vlSymsp = static_cast<Vsr_flipflop__Syms*>(userp);
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"s", false,-1);
        tracep->declBit(c+2,"r", false,-1);
        tracep->declBit(c+3,"q", false,-1);
        tracep->declBit(c+4,"q_bar", false,-1);
        tracep->declBit(c+1,"sr_flipflop s", false,-1);
        tracep->declBit(c+2,"sr_flipflop r", false,-1);
        tracep->declBit(c+3,"sr_flipflop q", false,-1);
        tracep->declBit(c+4,"sr_flipflop q_bar", false,-1);
    }
}

void Vsr_flipflop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsr_flipflop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsr_flipflop__Syms* __restrict vlSymsp = static_cast<Vsr_flipflop__Syms*>(userp);
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsr_flipflop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsr_flipflop__Syms* __restrict vlSymsp = static_cast<Vsr_flipflop__Syms*>(userp);
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->s));
        tracep->fullBit(oldp+2,(vlTOPp->r));
        tracep->fullBit(oldp+3,(vlTOPp->q));
        tracep->fullBit(oldp+4,(vlTOPp->q_bar));
    }
}
