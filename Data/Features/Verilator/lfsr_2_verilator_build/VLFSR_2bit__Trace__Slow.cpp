// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSR_2bit__Syms.h"


//======================

void VLFSR_2bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VLFSR_2bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VLFSR_2bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VLFSR_2bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VLFSR_2bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBus(c+3,"Q", false,-1, 1,0);
        tracep->declBit(c+1,"LFSR_2bit clk", false,-1);
        tracep->declBit(c+2,"LFSR_2bit rst", false,-1);
        tracep->declBus(c+3,"LFSR_2bit Q", false,-1, 1,0);
    }
}

void VLFSR_2bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VLFSR_2bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VLFSR_2bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullCData(oldp+3,(vlTOPp->Q),2);
    }
}
