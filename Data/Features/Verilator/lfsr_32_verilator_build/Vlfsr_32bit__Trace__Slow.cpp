// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlfsr_32bit__Syms.h"


//======================

void Vlfsr_32bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vlfsr_32bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vlfsr_32bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vlfsr_32bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vlfsr_32bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBus(c+4,"lfsr", false,-1, 31,0);
        tracep->declBit(c+1,"lfsr_32bit clk", false,-1);
        tracep->declBit(c+2,"lfsr_32bit reset", false,-1);
        tracep->declBit(c+3,"lfsr_32bit enable", false,-1);
        tracep->declBus(c+4,"lfsr_32bit lfsr", false,-1, 31,0);
        tracep->declBit(c+5,"lfsr_32bit feedback", false,-1);
    }
}

void Vlfsr_32bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vlfsr_32bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vlfsr_32bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullIData(oldp+4,(vlTOPp->lfsr),32);
        tracep->fullBit(oldp+5,((1U & ((((vlTOPp->lfsr 
                                          >> 0x1fU) 
                                         ^ (vlTOPp->lfsr 
                                            >> 0x15U)) 
                                        ^ (vlTOPp->lfsr 
                                           >> 1U)) 
                                       ^ vlTOPp->lfsr))));
    }
}
