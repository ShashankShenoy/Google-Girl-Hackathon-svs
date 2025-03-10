// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsequence_detector_1001__Syms.h"


//======================

void Vsequence_detector_1001::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsequence_detector_1001::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsequence_detector_1001__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_1001__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsequence_detector_1001::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsequence_detector_1001::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_1001__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_1001__Syms*>(userp);
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsequence_detector_1001::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_1001__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_1001__Syms*>(userp);
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"data_in", false,-1);
        tracep->declBit(c+4,"detected", false,-1);
        tracep->declBit(c+1,"sequence_detector_1001 clk", false,-1);
        tracep->declBit(c+2,"sequence_detector_1001 reset", false,-1);
        tracep->declBit(c+3,"sequence_detector_1001 data_in", false,-1);
        tracep->declBit(c+4,"sequence_detector_1001 detected", false,-1);
        tracep->declBus(c+7,"sequence_detector_1001 S0", false,-1, 1,0);
        tracep->declBus(c+8,"sequence_detector_1001 S1", false,-1, 1,0);
        tracep->declBus(c+9,"sequence_detector_1001 S2", false,-1, 1,0);
        tracep->declBus(c+10,"sequence_detector_1001 S3", false,-1, 1,0);
        tracep->declBus(c+5,"sequence_detector_1001 current_state", false,-1, 1,0);
        tracep->declBus(c+6,"sequence_detector_1001 next_state", false,-1, 1,0);
    }
}

void Vsequence_detector_1001::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsequence_detector_1001::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_1001__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_1001__Syms*>(userp);
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsequence_detector_1001::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsequence_detector_1001__Syms* __restrict vlSymsp = static_cast<Vsequence_detector_1001__Syms*>(userp);
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->data_in));
        tracep->fullBit(oldp+4,(vlTOPp->detected));
        tracep->fullCData(oldp+5,(vlTOPp->sequence_detector_1001__DOT__current_state),2);
        tracep->fullCData(oldp+6,(vlTOPp->sequence_detector_1001__DOT__next_state),2);
        tracep->fullCData(oldp+7,(0U),2);
        tracep->fullCData(oldp+8,(1U),2);
        tracep->fullCData(oldp+9,(2U),2);
        tracep->fullCData(oldp+10,(3U),2);
    }
}
