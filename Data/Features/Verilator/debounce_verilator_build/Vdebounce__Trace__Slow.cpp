// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdebounce__Syms.h"


//======================

void Vdebounce::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vdebounce::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdebounce::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vdebounce::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vdebounce::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"in", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"debounce clk", false,-1);
        tracep->declBit(c+2,"debounce rst", false,-1);
        tracep->declBit(c+3,"debounce in", false,-1);
        tracep->declBit(c+4,"debounce out", false,-1);
        tracep->declBus(c+5,"debounce count", false,-1, 19,0);
        tracep->declBit(c+6,"debounce sync_0", false,-1);
        tracep->declBit(c+7,"debounce sync_1", false,-1);
    }
}

void Vdebounce::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vdebounce::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vdebounce::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vdebounce__Syms* __restrict vlSymsp = static_cast<Vdebounce__Syms*>(userp);
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->in));
        tracep->fullBit(oldp+4,(vlTOPp->out));
        tracep->fullIData(oldp+5,(vlTOPp->debounce__DOT__count),20);
        tracep->fullBit(oldp+6,(vlTOPp->debounce__DOT__sync_0));
        tracep->fullBit(oldp+7,(vlTOPp->debounce__DOT__sync_1));
    }
}
