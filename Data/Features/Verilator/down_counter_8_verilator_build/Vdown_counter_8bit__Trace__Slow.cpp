// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdown_counter_8bit__Syms.h"


//======================

void Vdown_counter_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vdown_counter_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdown_counter_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vdown_counter_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_8bit__Syms*>(userp);
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vdown_counter_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_8bit__Syms*>(userp);
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBus(c+4,"count", false,-1, 7,0);
        tracep->declBit(c+1,"down_counter_8bit clk", false,-1);
        tracep->declBit(c+2,"down_counter_8bit reset", false,-1);
        tracep->declBit(c+3,"down_counter_8bit enable", false,-1);
        tracep->declBus(c+4,"down_counter_8bit count", false,-1, 7,0);
    }
}

void Vdown_counter_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vdown_counter_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_8bit__Syms*>(userp);
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vdown_counter_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vdown_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_8bit__Syms*>(userp);
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullCData(oldp+4,(vlTOPp->count),8);
    }
}
