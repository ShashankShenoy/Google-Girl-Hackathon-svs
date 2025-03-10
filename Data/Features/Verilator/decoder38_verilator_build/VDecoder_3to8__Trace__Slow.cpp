// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoder_3to8__Syms.h"


//======================

void VDecoder_3to8::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VDecoder_3to8::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDecoder_3to8::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VDecoder_3to8::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VDecoder_3to8::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 2,0);
        tracep->declBus(c+2,"Y", false,-1, 7,0);
        tracep->declBus(c+1,"Decoder_3to8 A", false,-1, 2,0);
        tracep->declBus(c+2,"Decoder_3to8 Y", false,-1, 7,0);
    }
}

void VDecoder_3to8::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VDecoder_3to8::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VDecoder_3to8::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),3);
        tracep->fullCData(oldp+2,(vlTOPp->Y),8);
    }
}
