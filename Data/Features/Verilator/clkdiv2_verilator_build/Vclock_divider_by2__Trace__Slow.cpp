// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_divider_by2__Syms.h"


//======================

void Vclock_divider_by2::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vclock_divider_by2::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vclock_divider_by2::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vclock_divider_by2::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vclock_divider_by2::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"clk_div2", false,-1);
        tracep->declBit(c+1,"clock_divider_by2 clk", false,-1);
        tracep->declBit(c+2,"clock_divider_by2 rst", false,-1);
        tracep->declBit(c+3,"clock_divider_by2 clk_div2", false,-1);
    }
}

void Vclock_divider_by2::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vclock_divider_by2::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vclock_divider_by2::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = static_cast<Vclock_divider_by2__Syms*>(userp);
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->clk_div2));
    }
}
