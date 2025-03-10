// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Velevator_controller_fsm__Syms.h"


//======================

void Velevator_controller_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Velevator_controller_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Velevator_controller_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Velevator_controller_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Velevator_controller_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"requested_floor", false,-1, 1,0);
        tracep->declBit(c+4,"door_sensor", false,-1);
        tracep->declBus(c+5,"current_floor", false,-1, 1,0);
        tracep->declBit(c+6,"moving_up", false,-1);
        tracep->declBit(c+7,"moving_down", false,-1);
        tracep->declBit(c+8,"door_open", false,-1);
        tracep->declBit(c+1,"elevator_controller_fsm clk", false,-1);
        tracep->declBit(c+2,"elevator_controller_fsm reset", false,-1);
        tracep->declBus(c+3,"elevator_controller_fsm requested_floor", false,-1, 1,0);
        tracep->declBit(c+4,"elevator_controller_fsm door_sensor", false,-1);
        tracep->declBus(c+5,"elevator_controller_fsm current_floor", false,-1, 1,0);
        tracep->declBit(c+6,"elevator_controller_fsm moving_up", false,-1);
        tracep->declBit(c+7,"elevator_controller_fsm moving_down", false,-1);
        tracep->declBit(c+8,"elevator_controller_fsm door_open", false,-1);
        tracep->declBus(c+11,"elevator_controller_fsm IDLE", false,-1, 1,0);
        tracep->declBus(c+12,"elevator_controller_fsm MOVING", false,-1, 1,0);
        tracep->declBus(c+13,"elevator_controller_fsm DOOR_OPENING", false,-1, 1,0);
        tracep->declBus(c+14,"elevator_controller_fsm DOOR_CLOSING", false,-1, 1,0);
        tracep->declBus(c+9,"elevator_controller_fsm state", false,-1, 1,0);
        tracep->declBus(c+10,"elevator_controller_fsm timer", false,-1, 4,0);
        tracep->declBus(c+15,"elevator_controller_fsm DOOR_OPEN_TIME", false,-1, 4,0);
        tracep->declBus(c+16,"elevator_controller_fsm DOOR_CLOSE_TIME", false,-1, 4,0);
    }
}

void Velevator_controller_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Velevator_controller_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Velevator_controller_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->requested_floor),2);
        tracep->fullBit(oldp+4,(vlTOPp->door_sensor));
        tracep->fullCData(oldp+5,(vlTOPp->current_floor),2);
        tracep->fullBit(oldp+6,(vlTOPp->moving_up));
        tracep->fullBit(oldp+7,(vlTOPp->moving_down));
        tracep->fullBit(oldp+8,(vlTOPp->door_open));
        tracep->fullCData(oldp+9,(vlTOPp->elevator_controller_fsm__DOT__state),2);
        tracep->fullCData(oldp+10,(vlTOPp->elevator_controller_fsm__DOT__timer),5);
        tracep->fullCData(oldp+11,(0U),2);
        tracep->fullCData(oldp+12,(1U),2);
        tracep->fullCData(oldp+13,(2U),2);
        tracep->fullCData(oldp+14,(3U),2);
        tracep->fullCData(oldp+15,(0x14U),5);
        tracep->fullCData(oldp+16,(0xaU),5);
    }
}
