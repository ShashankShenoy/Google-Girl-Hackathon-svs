// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vboth_edges_detector__Syms.h"


//======================

void Vboth_edges_detector::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vboth_edges_detector::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vboth_edges_detector::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vboth_edges_detector::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vboth_edges_detector::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"in", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"both_edges_detector clk", false,-1);
        tracep->declBit(c+2,"both_edges_detector rst", false,-1);
        tracep->declBit(c+3,"both_edges_detector in", false,-1);
        tracep->declBit(c+4,"both_edges_detector out", false,-1);
        tracep->declBit(c+5,"both_edges_detector in_delay", false,-1);
    }
}

void Vboth_edges_detector::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vboth_edges_detector::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vboth_edges_detector::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = static_cast<Vboth_edges_detector__Syms*>(userp);
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->in));
        tracep->fullBit(oldp+4,(vlTOPp->out));
        tracep->fullBit(oldp+5,(vlTOPp->both_edges_detector__DOT__in_delay));
    }
}
