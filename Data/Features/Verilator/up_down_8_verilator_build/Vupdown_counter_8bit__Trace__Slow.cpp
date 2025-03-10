// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vupdown_counter_8bit__Syms.h"


//======================

void Vupdown_counter_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vupdown_counter_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vupdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vupdown_counter_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vupdown_counter_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vupdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_8bit__Syms*>(userp);
    Vupdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vupdown_counter_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vupdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_8bit__Syms*>(userp);
    Vupdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBit(c+4,"up_down", false,-1);
        tracep->declBus(c+5,"count", false,-1, 7,0);
        tracep->declBit(c+1,"updown_counter_8bit clk", false,-1);
        tracep->declBit(c+2,"updown_counter_8bit reset", false,-1);
        tracep->declBit(c+3,"updown_counter_8bit enable", false,-1);
        tracep->declBit(c+4,"updown_counter_8bit up_down", false,-1);
        tracep->declBus(c+5,"updown_counter_8bit count", false,-1, 7,0);
    }
}

void Vupdown_counter_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vupdown_counter_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vupdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_8bit__Syms*>(userp);
    Vupdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vupdown_counter_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vupdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_8bit__Syms*>(userp);
    Vupdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullBit(oldp+4,(vlTOPp->up_down));
        tracep->fullCData(oldp+5,(vlTOPp->count),8);
    }
}
