// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhalf_subtractor_aoi__Syms.h"


//======================

void Vhalf_subtractor_aoi::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vhalf_subtractor_aoi::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_subtractor_aoi__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vhalf_subtractor_aoi::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vhalf_subtractor_aoi::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_subtractor_aoi__Syms*>(userp);
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vhalf_subtractor_aoi::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_subtractor_aoi__Syms*>(userp);
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"diff", false,-1);
        tracep->declBit(c+4,"borrow", false,-1);
        tracep->declBit(c+1,"half_subtractor_aoi a", false,-1);
        tracep->declBit(c+2,"half_subtractor_aoi b", false,-1);
        tracep->declBit(c+3,"half_subtractor_aoi diff", false,-1);
        tracep->declBit(c+4,"half_subtractor_aoi borrow", false,-1);
    }
}

void Vhalf_subtractor_aoi::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vhalf_subtractor_aoi::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_subtractor_aoi__Syms*>(userp);
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vhalf_subtractor_aoi::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vhalf_subtractor_aoi__Syms* __restrict vlSymsp = static_cast<Vhalf_subtractor_aoi__Syms*>(userp);
    Vhalf_subtractor_aoi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->diff));
        tracep->fullBit(oldp+4,(vlTOPp->borrow));
    }
}
