// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsequence_detector_0011__Syms.h"


//======================

void Vsequence_detector_0011::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsequence_detector_0011::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsequence_detector_0011__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0011__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsequence_detector_0011::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsequence_detector_0011::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_0011__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0011__Syms*>(userp);
    Vsequence_detector_0011* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsequence_detector_0011::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_0011__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0011__Syms*>(userp);
    Vsequence_detector_0011* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"in", false,-1);
        tracep->declBit(c+4,"detected", false,-1);
        tracep->declBit(c+1,"sequence_detector_0011 clk", false,-1);
        tracep->declBit(c+2,"sequence_detector_0011 rst", false,-1);
        tracep->declBit(c+3,"sequence_detector_0011 in", false,-1);
        tracep->declBit(c+4,"sequence_detector_0011 detected", false,-1);
        tracep->declBus(c+7,"sequence_detector_0011 IDLE", false,-1, 2,0);
        tracep->declBus(c+8,"sequence_detector_0011 S0", false,-1, 2,0);
        tracep->declBus(c+9,"sequence_detector_0011 S00", false,-1, 2,0);
        tracep->declBus(c+10,"sequence_detector_0011 S001", false,-1, 2,0);
        tracep->declBus(c+5,"sequence_detector_0011 state", false,-1, 2,0);
        tracep->declBus(c+6,"sequence_detector_0011 next_state", false,-1, 2,0);
    }
}

void Vsequence_detector_0011::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsequence_detector_0011::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_0011__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0011__Syms*>(userp);
    Vsequence_detector_0011* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsequence_detector_0011::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_0011__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_0011__Syms*>(userp);
    Vsequence_detector_0011* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->in));
        tracep->fullBit(oldp+4,(vlTOPp->detected));
        tracep->fullCData(oldp+5,(vlTOPp->sequence_detector_0011__DOT__state),3);
        tracep->fullCData(oldp+6,(vlTOPp->sequence_detector_0011__DOT__next_state),3);
        tracep->fullCData(oldp+7,(0U),3);
        tracep->fullCData(oldp+8,(1U),3);
        tracep->fullCData(oldp+9,(2U),3);
        tracep->fullCData(oldp+10,(3U),3);
    }
}
