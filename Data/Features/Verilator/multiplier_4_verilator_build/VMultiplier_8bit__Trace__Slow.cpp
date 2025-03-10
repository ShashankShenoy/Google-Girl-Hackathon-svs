// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplier_8bit__Syms.h"


//======================

void VMultiplier_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMultiplier_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMultiplier_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMultiplier_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMultiplier_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 7,0);
        tracep->declBus(c+2,"B", false,-1, 7,0);
        tracep->declBus(c+3,"Product", false,-1, 15,0);
        tracep->declBus(c+1,"Multiplier_8bit A", false,-1, 7,0);
        tracep->declBus(c+2,"Multiplier_8bit B", false,-1, 7,0);
        tracep->declBus(c+3,"Multiplier_8bit Product", false,-1, 15,0);
        tracep->declBus(c+4,"Multiplier_8bit P", false,-1, 15,0);
    }
}

void VMultiplier_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMultiplier_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMultiplier_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),8);
        tracep->fullCData(oldp+2,(vlTOPp->B),8);
        tracep->fullSData(oldp+3,(vlTOPp->Product),16);
        tracep->fullSData(oldp+4,(vlTOPp->Multiplier_8bit__DOT__P),16);
    }
}
