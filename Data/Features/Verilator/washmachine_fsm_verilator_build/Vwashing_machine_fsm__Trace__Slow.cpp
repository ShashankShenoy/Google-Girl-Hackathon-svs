// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwashing_machine_fsm__Syms.h"


//======================

void Vwashing_machine_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vwashing_machine_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vwashing_machine_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vwashing_machine_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vwashing_machine_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"start", false,-1);
        tracep->declBit(c+4,"door_closed", false,-1);
        tracep->declBus(c+5,"state", false,-1, 1,0);
        tracep->declBit(c+6,"motor", false,-1);
        tracep->declBit(c+7,"water_valve", false,-1);
        tracep->declBit(c+8,"drain_valve", false,-1);
        tracep->declBit(c+9,"complete", false,-1);
        tracep->declBit(c+1,"washing_machine_fsm clk", false,-1);
        tracep->declBit(c+2,"washing_machine_fsm reset", false,-1);
        tracep->declBit(c+3,"washing_machine_fsm start", false,-1);
        tracep->declBit(c+4,"washing_machine_fsm door_closed", false,-1);
        tracep->declBus(c+5,"washing_machine_fsm state", false,-1, 1,0);
        tracep->declBit(c+6,"washing_machine_fsm motor", false,-1);
        tracep->declBit(c+7,"washing_machine_fsm water_valve", false,-1);
        tracep->declBit(c+8,"washing_machine_fsm drain_valve", false,-1);
        tracep->declBit(c+9,"washing_machine_fsm complete", false,-1);
        tracep->declBus(c+13,"washing_machine_fsm IDLE", false,-1, 1,0);
        tracep->declBus(c+14,"washing_machine_fsm WASH", false,-1, 1,0);
        tracep->declBus(c+15,"washing_machine_fsm RINSE", false,-1, 1,0);
        tracep->declBus(c+16,"washing_machine_fsm SPIN", false,-1, 1,0);
        tracep->declBus(c+10,"washing_machine_fsm current_state", false,-1, 1,0);
        tracep->declBus(c+11,"washing_machine_fsm next_state", false,-1, 1,0);
        tracep->declBus(c+12,"washing_machine_fsm timer", false,-1, 7,0);
        tracep->declBus(c+17,"washing_machine_fsm WASH_TIME", false,-1, 7,0);
        tracep->declBus(c+18,"washing_machine_fsm RINSE_TIME", false,-1, 7,0);
        tracep->declBus(c+19,"washing_machine_fsm SPIN_TIME", false,-1, 7,0);
    }
}

void Vwashing_machine_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vwashing_machine_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vwashing_machine_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->start));
        tracep->fullBit(oldp+4,(vlTOPp->door_closed));
        tracep->fullCData(oldp+5,(vlTOPp->state),2);
        tracep->fullBit(oldp+6,(vlTOPp->motor));
        tracep->fullBit(oldp+7,(vlTOPp->water_valve));
        tracep->fullBit(oldp+8,(vlTOPp->drain_valve));
        tracep->fullBit(oldp+9,(vlTOPp->complete));
        tracep->fullCData(oldp+10,(vlTOPp->washing_machine_fsm__DOT__current_state),2);
        tracep->fullCData(oldp+11,(vlTOPp->washing_machine_fsm__DOT__next_state),2);
        tracep->fullCData(oldp+12,(vlTOPp->washing_machine_fsm__DOT__timer),8);
        tracep->fullCData(oldp+13,(0U),2);
        tracep->fullCData(oldp+14,(1U),2);
        tracep->fullCData(oldp+15,(2U),2);
        tracep->fullCData(oldp+16,(3U),2);
        tracep->fullCData(oldp+17,(0xc8U),8);
        tracep->fullCData(oldp+18,(0x64U),8);
        tracep->fullCData(oldp+19,(0x32U),8);
    }
}
