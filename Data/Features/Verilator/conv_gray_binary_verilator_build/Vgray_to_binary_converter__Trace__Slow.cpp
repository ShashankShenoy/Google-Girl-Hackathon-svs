// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgray_to_binary_converter__Syms.h"


//======================

void Vgray_to_binary_converter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vgray_to_binary_converter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vgray_to_binary_converter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vgray_to_binary_converter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vgray_to_binary_converter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"gray", false,-1, 3,0);
        tracep->declBus(c+2,"binary", false,-1, 3,0);
        tracep->declBus(c+1,"gray_to_binary_converter gray", false,-1, 3,0);
        tracep->declBus(c+2,"gray_to_binary_converter binary", false,-1, 3,0);
    }
}

void Vgray_to_binary_converter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vgray_to_binary_converter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vgray_to_binary_converter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->gray),4);
        tracep->fullCData(oldp+2,(vlTOPp->binary),4);
    }
}
