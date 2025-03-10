// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vup_counter_16bit__Syms.h"


//======================

void Vup_counter_16bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vup_counter_16bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vup_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_16bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vup_counter_16bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vup_counter_16bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vup_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_16bit__Syms*>(userp);
    Vup_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vup_counter_16bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vup_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_16bit__Syms*>(userp);
    Vup_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBus(c+4,"count", false,-1, 15,0);
        tracep->declBit(c+1,"up_counter_16bit clk", false,-1);
        tracep->declBit(c+2,"up_counter_16bit reset", false,-1);
        tracep->declBit(c+3,"up_counter_16bit enable", false,-1);
        tracep->declBus(c+4,"up_counter_16bit count", false,-1, 15,0);
    }
}

void Vup_counter_16bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vup_counter_16bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vup_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_16bit__Syms*>(userp);
    Vup_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vup_counter_16bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vup_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_16bit__Syms*>(userp);
    Vup_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullSData(oldp+4,(vlTOPp->count),16);
    }
}
