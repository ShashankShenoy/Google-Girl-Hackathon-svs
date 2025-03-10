// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEncoder_4to2_priority__Syms.h"


//======================

void VEncoder_4to2_priority::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VEncoder_4to2_priority::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VEncoder_4to2_priority::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VEncoder_4to2_priority::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VEncoder_4to2_priority::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 3,0);
        tracep->declBus(c+2,"Y", false,-1, 1,0);
        tracep->declBit(c+3,"valid", false,-1);
        tracep->declBus(c+1,"Encoder_4to2_priority A", false,-1, 3,0);
        tracep->declBus(c+2,"Encoder_4to2_priority Y", false,-1, 1,0);
        tracep->declBit(c+3,"Encoder_4to2_priority valid", false,-1);
    }
}

void VEncoder_4to2_priority::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VEncoder_4to2_priority::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VEncoder_4to2_priority::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),4);
        tracep->fullCData(oldp+2,(vlTOPp->Y),2);
        tracep->fullBit(oldp+3,(vlTOPp->valid));
    }
}
