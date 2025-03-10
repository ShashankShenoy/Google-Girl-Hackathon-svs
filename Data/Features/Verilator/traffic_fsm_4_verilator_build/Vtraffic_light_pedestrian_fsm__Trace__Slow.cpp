// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtraffic_light_pedestrian_fsm__Syms.h"


//======================

void Vtraffic_light_pedestrian_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtraffic_light_pedestrian_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtraffic_light_pedestrian_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtraffic_light_pedestrian_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtraffic_light_pedestrian_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"pedestrian_request", false,-1);
        tracep->declBus(c+4,"traffic_light", false,-1, 2,0);
        tracep->declBit(c+5,"pedestrian_light", false,-1);
        tracep->declBit(c+1,"traffic_light_pedestrian_fsm clk", false,-1);
        tracep->declBit(c+2,"traffic_light_pedestrian_fsm reset", false,-1);
        tracep->declBit(c+3,"traffic_light_pedestrian_fsm pedestrian_request", false,-1);
        tracep->declBus(c+4,"traffic_light_pedestrian_fsm traffic_light", false,-1, 2,0);
        tracep->declBit(c+5,"traffic_light_pedestrian_fsm pedestrian_light", false,-1);
        tracep->declBus(c+6,"traffic_light_pedestrian_fsm current_state", false,-1, 1,0);
        tracep->declBus(c+7,"traffic_light_pedestrian_fsm next_state", false,-1, 1,0);
        tracep->declBus(c+9,"traffic_light_pedestrian_fsm GREEN", false,-1, 1,0);
        tracep->declBus(c+10,"traffic_light_pedestrian_fsm YELLOW", false,-1, 1,0);
        tracep->declBus(c+11,"traffic_light_pedestrian_fsm RED", false,-1, 1,0);
        tracep->declBus(c+12,"traffic_light_pedestrian_fsm PED_CROSSING", false,-1, 1,0);
        tracep->declBus(c+8,"traffic_light_pedestrian_fsm timer", false,-1, 4,0);
        tracep->declBus(c+13,"traffic_light_pedestrian_fsm GREEN_TIME", false,-1, 4,0);
        tracep->declBus(c+14,"traffic_light_pedestrian_fsm YELLOW_TIME", false,-1, 4,0);
        tracep->declBus(c+15,"traffic_light_pedestrian_fsm RED_TIME", false,-1, 4,0);
        tracep->declBus(c+16,"traffic_light_pedestrian_fsm CROSSING_TIME", false,-1, 4,0);
    }
}

void Vtraffic_light_pedestrian_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtraffic_light_pedestrian_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtraffic_light_pedestrian_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->pedestrian_request));
        tracep->fullCData(oldp+4,(vlTOPp->traffic_light),3);
        tracep->fullBit(oldp+5,(vlTOPp->pedestrian_light));
        tracep->fullCData(oldp+6,(vlTOPp->traffic_light_pedestrian_fsm__DOT__current_state),2);
        tracep->fullCData(oldp+7,(vlTOPp->traffic_light_pedestrian_fsm__DOT__next_state),2);
        tracep->fullCData(oldp+8,(vlTOPp->traffic_light_pedestrian_fsm__DOT__timer),5);
        tracep->fullCData(oldp+9,(0U),2);
        tracep->fullCData(oldp+10,(1U),2);
        tracep->fullCData(oldp+11,(2U),2);
        tracep->fullCData(oldp+12,(3U),2);
        tracep->fullCData(oldp+13,(0x14U),5);
        tracep->fullCData(oldp+14,(5U),5);
        tracep->fullCData(oldp+15,(0xaU),5);
        tracep->fullCData(oldp+16,(0xfU),5);
    }
}
