// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdoor_lock_controller_fsm__Syms.h"


//======================

void Vdoor_lock_controller_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vdoor_lock_controller_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdoor_lock_controller_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vdoor_lock_controller_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vdoor_lock_controller_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"password", false,-1, 3,0);
        tracep->declBit(c+4,"try_unlock", false,-1);
        tracep->declBit(c+5,"unlocked", false,-1);
        tracep->declBit(c+6,"error", false,-1);
        tracep->declBit(c+1,"door_lock_controller_fsm clk", false,-1);
        tracep->declBit(c+2,"door_lock_controller_fsm reset", false,-1);
        tracep->declBus(c+3,"door_lock_controller_fsm password", false,-1, 3,0);
        tracep->declBit(c+4,"door_lock_controller_fsm try_unlock", false,-1);
        tracep->declBit(c+5,"door_lock_controller_fsm unlocked", false,-1);
        tracep->declBit(c+6,"door_lock_controller_fsm error", false,-1);
        tracep->declBus(c+9,"door_lock_controller_fsm LOCKED", false,-1, 1,0);
        tracep->declBus(c+10,"door_lock_controller_fsm UNLOCKED", false,-1, 1,0);
        tracep->declBus(c+11,"door_lock_controller_fsm ERROR_STATE", false,-1, 1,0);
        tracep->declBus(c+12,"door_lock_controller_fsm CORRECT_PASSWORD", false,-1, 3,0);
        tracep->declBus(c+13,"door_lock_controller_fsm MAX_ATTEMPTS", false,-1, 31,0);
        tracep->declBus(c+7,"door_lock_controller_fsm state", false,-1, 1,0);
        tracep->declBus(c+8,"door_lock_controller_fsm failed_attempts", false,-1, 1,0);
    }
}

void Vdoor_lock_controller_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vdoor_lock_controller_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vdoor_lock_controller_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = static_cast<Vdoor_lock_controller_fsm__Syms*>(userp);
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->password),4);
        tracep->fullBit(oldp+4,(vlTOPp->try_unlock));
        tracep->fullBit(oldp+5,(vlTOPp->unlocked));
        tracep->fullBit(oldp+6,(vlTOPp->error));
        tracep->fullCData(oldp+7,(vlTOPp->door_lock_controller_fsm__DOT__state),2);
        tracep->fullCData(oldp+8,(vlTOPp->door_lock_controller_fsm__DOT__failed_attempts),2);
        tracep->fullCData(oldp+9,(0U),2);
        tracep->fullCData(oldp+10,(1U),2);
        tracep->fullCData(oldp+11,(2U),2);
        tracep->fullCData(oldp+12,(0xaU),4);
        tracep->fullIData(oldp+13,(3U),32);
    }
}
