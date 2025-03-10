// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDemux_1to2__Syms.h"


//======================

void VDemux_1to2::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VDemux_1to2::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDemux_1to2::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VDemux_1to2::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VDemux_1to2::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"S", false,-1);
        tracep->declBit(c+3,"Y0", false,-1);
        tracep->declBit(c+4,"Y1", false,-1);
        tracep->declBit(c+1,"Demux_1to2 A", false,-1);
        tracep->declBit(c+2,"Demux_1to2 S", false,-1);
        tracep->declBit(c+3,"Demux_1to2 Y0", false,-1);
        tracep->declBit(c+4,"Demux_1to2 Y1", false,-1);
    }
}

void VDemux_1to2::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VDemux_1to2::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VDemux_1to2::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->S));
        tracep->fullBit(oldp+3,(vlTOPp->Y0));
        tracep->fullBit(oldp+4,(vlTOPp->Y1));
    }
}
