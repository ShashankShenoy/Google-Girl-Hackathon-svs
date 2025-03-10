// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbcd_counter__Syms.h"


//======================

void Vbcd_counter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vbcd_counter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vbcd_counter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vbcd_counter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vbcd_counter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBus(c+4,"count", false,-1, 3,0);
        tracep->declBit(c+5,"carry", false,-1);
        tracep->declBit(c+1,"bcd_counter clk", false,-1);
        tracep->declBit(c+2,"bcd_counter reset", false,-1);
        tracep->declBit(c+3,"bcd_counter enable", false,-1);
        tracep->declBus(c+4,"bcd_counter count", false,-1, 3,0);
        tracep->declBit(c+5,"bcd_counter carry", false,-1);
    }
}

void Vbcd_counter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vbcd_counter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vbcd_counter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullCData(oldp+4,(vlTOPp->count),4);
        tracep->fullBit(oldp+5,(vlTOPp->carry));
    }
}
