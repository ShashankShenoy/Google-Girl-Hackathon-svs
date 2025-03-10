// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpriority_encoder_8bit__Syms.h"


//======================

void Vpriority_encoder_8bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vpriority_encoder_8bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpriority_encoder_8bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vpriority_encoder_8bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vpriority_encoder_8bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"data_in", false,-1, 7,0);
        tracep->declBus(c+2,"encoded_out", false,-1, 2,0);
        tracep->declBit(c+3,"valid", false,-1);
        tracep->declBus(c+1,"priority_encoder_8bit data_in", false,-1, 7,0);
        tracep->declBus(c+2,"priority_encoder_8bit encoded_out", false,-1, 2,0);
        tracep->declBit(c+3,"priority_encoder_8bit valid", false,-1);
    }
}

void Vpriority_encoder_8bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vpriority_encoder_8bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vpriority_encoder_8bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->data_in),8);
        tracep->fullCData(oldp+2,(vlTOPp->encoded_out),3);
        tracep->fullBit(oldp+3,(vlTOPp->valid));
    }
}
