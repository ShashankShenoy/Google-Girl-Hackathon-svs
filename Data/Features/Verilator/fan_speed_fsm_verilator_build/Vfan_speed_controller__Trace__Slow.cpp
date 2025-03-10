// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfan_speed_controller__Syms.h"


//======================

void Vfan_speed_controller::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vfan_speed_controller::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vfan_speed_controller::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vfan_speed_controller::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vfan_speed_controller::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"button", false,-1);
        tracep->declBus(c+4,"speed", false,-1, 1,0);
        tracep->declBit(c+1,"fan_speed_controller clk", false,-1);
        tracep->declBit(c+2,"fan_speed_controller reset", false,-1);
        tracep->declBit(c+3,"fan_speed_controller button", false,-1);
        tracep->declBus(c+4,"fan_speed_controller speed", false,-1, 1,0);
        tracep->declBus(c+9,"fan_speed_controller OFF", false,-1, 1,0);
        tracep->declBus(c+10,"fan_speed_controller LOW", false,-1, 1,0);
        tracep->declBus(c+11,"fan_speed_controller MEDIUM", false,-1, 1,0);
        tracep->declBus(c+12,"fan_speed_controller HIGH", false,-1, 1,0);
        tracep->declBus(c+5,"fan_speed_controller current_state", false,-1, 1,0);
        tracep->declBus(c+6,"fan_speed_controller next_state", false,-1, 1,0);
        tracep->declBit(c+7,"fan_speed_controller button_prev", false,-1);
        tracep->declBit(c+8,"fan_speed_controller button_pressed", false,-1);
    }
}

void Vfan_speed_controller::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vfan_speed_controller::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vfan_speed_controller::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->button));
        tracep->fullCData(oldp+4,(vlTOPp->speed),2);
        tracep->fullCData(oldp+5,(vlTOPp->fan_speed_controller__DOT__current_state),2);
        tracep->fullCData(oldp+6,(vlTOPp->fan_speed_controller__DOT__next_state),2);
        tracep->fullBit(oldp+7,(vlTOPp->fan_speed_controller__DOT__button_prev));
        tracep->fullBit(oldp+8,(((IData)(vlTOPp->button) 
                                 & (~ (IData)(vlTOPp->fan_speed_controller__DOT__button_prev)))));
        tracep->fullCData(oldp+9,(0U),2);
        tracep->fullCData(oldp+10,(1U),2);
        tracep->fullCData(oldp+11,(2U),2);
        tracep->fullCData(oldp+12,(3U),2);
    }
}
