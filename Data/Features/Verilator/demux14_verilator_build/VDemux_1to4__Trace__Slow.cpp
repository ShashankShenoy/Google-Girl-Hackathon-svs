// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDemux_1to4__Syms.h"


//======================

void VDemux_1to4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VDemux_1to4::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDemux_1to4__Syms* __restrict vlSymsp = static_cast<VDemux_1to4__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VDemux_1to4::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VDemux_1to4::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VDemux_1to4__Syms* __restrict vlSymsp = static_cast<VDemux_1to4__Syms*>(userp);
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VDemux_1to4::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to4__Syms* __restrict vlSymsp = static_cast<VDemux_1to4__Syms*>(userp);
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBus(c+2,"S", false,-1, 1,0);
        tracep->declBit(c+3,"Y0", false,-1);
        tracep->declBit(c+4,"Y1", false,-1);
        tracep->declBit(c+5,"Y2", false,-1);
        tracep->declBit(c+6,"Y3", false,-1);
        tracep->declBit(c+1,"Demux_1to4 A", false,-1);
        tracep->declBus(c+2,"Demux_1to4 S", false,-1, 1,0);
        tracep->declBit(c+3,"Demux_1to4 Y0", false,-1);
        tracep->declBit(c+4,"Demux_1to4 Y1", false,-1);
        tracep->declBit(c+5,"Demux_1to4 Y2", false,-1);
        tracep->declBit(c+6,"Demux_1to4 Y3", false,-1);
    }
}

void VDemux_1to4::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VDemux_1to4::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to4__Syms* __restrict vlSymsp = static_cast<VDemux_1to4__Syms*>(userp);
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VDemux_1to4::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to4__Syms* __restrict vlSymsp = static_cast<VDemux_1to4__Syms*>(userp);
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullCData(oldp+2,(vlTOPp->S),2);
        tracep->fullBit(oldp+3,(vlTOPp->Y0));
        tracep->fullBit(oldp+4,(vlTOPp->Y1));
        tracep->fullBit(oldp+5,(vlTOPp->Y2));
        tracep->fullBit(oldp+6,(vlTOPp->Y3));
    }
}
