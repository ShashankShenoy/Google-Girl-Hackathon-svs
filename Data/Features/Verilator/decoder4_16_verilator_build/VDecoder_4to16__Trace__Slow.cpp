// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoder_4to16__Syms.h"


//======================

void VDecoder_4to16::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VDecoder_4to16::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDecoder_4to16__Syms* __restrict vlSymsp = static_cast<VDecoder_4to16__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDecoder_4to16::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VDecoder_4to16::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VDecoder_4to16__Syms* __restrict vlSymsp = static_cast<VDecoder_4to16__Syms*>(userp);
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VDecoder_4to16::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VDecoder_4to16__Syms* __restrict vlSymsp = static_cast<VDecoder_4to16__Syms*>(userp);
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 3,0);
        tracep->declBus(c+2,"Y", false,-1, 15,0);
        tracep->declBus(c+1,"Decoder_4to16 A", false,-1, 3,0);
        tracep->declBus(c+2,"Decoder_4to16 Y", false,-1, 15,0);
    }
}

void VDecoder_4to16::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VDecoder_4to16::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VDecoder_4to16__Syms* __restrict vlSymsp = static_cast<VDecoder_4to16__Syms*>(userp);
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VDecoder_4to16::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VDecoder_4to16__Syms* __restrict vlSymsp = static_cast<VDecoder_4to16__Syms*>(userp);
    VDecoder_4to16* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),4);
        tracep->fullSData(oldp+2,(vlTOPp->Y),16);
    }
}
