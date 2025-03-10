// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvending_machine_fsm__Syms.h"


//======================

void Vvending_machine_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vvending_machine_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vvending_machine_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vvending_machine_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vvending_machine_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"nickel", false,-1);
        tracep->declBit(c+4,"dime", false,-1);
        tracep->declBit(c+5,"quarter", false,-1);
        tracep->declBit(c+6,"dispense", false,-1);
        tracep->declBus(c+7,"credit", false,-1, 5,0);
        tracep->declBit(c+1,"vending_machine_fsm clk", false,-1);
        tracep->declBit(c+2,"vending_machine_fsm reset", false,-1);
        tracep->declBit(c+3,"vending_machine_fsm nickel", false,-1);
        tracep->declBit(c+4,"vending_machine_fsm dime", false,-1);
        tracep->declBit(c+5,"vending_machine_fsm quarter", false,-1);
        tracep->declBit(c+6,"vending_machine_fsm dispense", false,-1);
        tracep->declBus(c+7,"vending_machine_fsm credit", false,-1, 5,0);
        tracep->declBus(c+10,"vending_machine_fsm IDLE", false,-1, 1,0);
        tracep->declBus(c+11,"vending_machine_fsm ACCEPTING", false,-1, 1,0);
        tracep->declBus(c+12,"vending_machine_fsm DISPENSING", false,-1, 1,0);
        tracep->declBus(c+13,"vending_machine_fsm PRICE", false,-1, 5,0);
        tracep->declBus(c+8,"vending_machine_fsm state", false,-1, 1,0);
        tracep->declBus(c+9,"vending_machine_fsm next_state", false,-1, 1,0);
    }
}

void Vvending_machine_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vvending_machine_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vvending_machine_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vvending_machine_fsm__Syms*>(userp);
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->nickel));
        tracep->fullBit(oldp+4,(vlTOPp->dime));
        tracep->fullBit(oldp+5,(vlTOPp->quarter));
        tracep->fullBit(oldp+6,(vlTOPp->dispense));
        tracep->fullCData(oldp+7,(vlTOPp->credit),6);
        tracep->fullCData(oldp+8,(vlTOPp->vending_machine_fsm__DOT__state),2);
        tracep->fullCData(oldp+9,(((0U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))
                                    ? ((((IData)(vlTOPp->nickel) 
                                         | (IData)(vlTOPp->dime)) 
                                        | (IData)(vlTOPp->quarter))
                                        ? 1U : 0U) : 
                                   ((1U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))
                                     ? ((0x19U <= (IData)(vlTOPp->credit))
                                         ? 2U : 1U)
                                     : 0U))),2);
        tracep->fullCData(oldp+10,(0U),2);
        tracep->fullCData(oldp+11,(1U),2);
        tracep->fullCData(oldp+12,(2U),2);
        tracep->fullCData(oldp+13,(0x19U),6);
    }
}
