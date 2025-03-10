// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtoggle_fsm__Syms.h"


//======================

void Vtoggle_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtoggle_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtoggle_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtoggle_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtoggle_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"trigger", false,-1);
        tracep->declBit(c+4,"state_out", false,-1);
        tracep->declBit(c+1,"toggle_fsm clk", false,-1);
        tracep->declBit(c+2,"toggle_fsm reset", false,-1);
        tracep->declBit(c+3,"toggle_fsm trigger", false,-1);
        tracep->declBit(c+4,"toggle_fsm state_out", false,-1);
        tracep->declBit(c+5,"toggle_fsm current_state", false,-1);
        tracep->declBit(c+6,"toggle_fsm next_state", false,-1);
        tracep->declBus(c+7,"toggle_fsm STATE_0", false,-1, 0,0);
        tracep->declBus(c+8,"toggle_fsm STATE_1", false,-1, 0,0);
    }
}

void Vtoggle_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtoggle_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtoggle_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = static_cast<Vtoggle_fsm__Syms*>(userp);
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->trigger));
        tracep->fullBit(oldp+4,(vlTOPp->state_out));
        tracep->fullBit(oldp+5,(vlTOPp->toggle_fsm__DOT__current_state));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->toggle_fsm__DOT__current_state)
                                  ? ((IData)(vlTOPp->toggle_fsm__DOT__current_state) 
                                     & (~ (IData)(vlTOPp->trigger)))
                                  : (IData)(vlTOPp->trigger))));
        tracep->fullBit(oldp+7,(0U));
        tracep->fullBit(oldp+8,(1U));
    }
}
