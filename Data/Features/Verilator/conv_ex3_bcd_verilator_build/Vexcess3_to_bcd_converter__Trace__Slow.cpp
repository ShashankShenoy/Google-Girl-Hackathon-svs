// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexcess3_to_bcd_converter__Syms.h"


//======================

void Vexcess3_to_bcd_converter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vexcess3_to_bcd_converter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = static_cast<Vexcess3_to_bcd_converter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vexcess3_to_bcd_converter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vexcess3_to_bcd_converter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = static_cast<Vexcess3_to_bcd_converter__Syms*>(userp);
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vexcess3_to_bcd_converter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = static_cast<Vexcess3_to_bcd_converter__Syms*>(userp);
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"excess3", false,-1, 3,0);
        tracep->declBus(c+2,"bcd", false,-1, 3,0);
        tracep->declBus(c+1,"excess3_to_bcd_converter excess3", false,-1, 3,0);
        tracep->declBus(c+2,"excess3_to_bcd_converter bcd", false,-1, 3,0);
    }
}

void Vexcess3_to_bcd_converter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vexcess3_to_bcd_converter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = static_cast<Vexcess3_to_bcd_converter__Syms*>(userp);
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vexcess3_to_bcd_converter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = static_cast<Vexcess3_to_bcd_converter__Syms*>(userp);
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->excess3),4);
        tracep->fullCData(oldp+2,(vlTOPp->bcd),4);
    }
}
