// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_rx__Syms.h"


//======================

void Vuart_rx::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vuart_rx::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vuart_rx::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vuart_rx::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vuart_rx::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clk_3125", false,-1);
        tracep->declBit(c+7,"rx", false,-1);
        tracep->declBus(c+8,"rx_msg", false,-1, 7,0);
        tracep->declBit(c+9,"rx_parity", false,-1);
        tracep->declBit(c+10,"rx_complete", false,-1);
        tracep->declBit(c+6,"uart_rx clk_3125", false,-1);
        tracep->declBit(c+7,"uart_rx rx", false,-1);
        tracep->declBus(c+8,"uart_rx rx_msg", false,-1, 7,0);
        tracep->declBit(c+9,"uart_rx rx_parity", false,-1);
        tracep->declBit(c+10,"uart_rx rx_complete", false,-1);
        tracep->declBus(c+11,"uart_rx S_IDLE", false,-1, 2,0);
        tracep->declBus(c+12,"uart_rx S_START", false,-1, 2,0);
        tracep->declBus(c+13,"uart_rx S_DATA", false,-1, 2,0);
        tracep->declBus(c+14,"uart_rx S_PARITY", false,-1, 2,0);
        tracep->declBus(c+15,"uart_rx S_STOP", false,-1, 2,0);
        tracep->declBus(c+16,"uart_rx clk", false,-1, 31,0);
        tracep->declBus(c+1,"uart_rx current_state", false,-1, 2,0);
        tracep->declBus(c+2,"uart_rx rx_shift_register", false,-1, 7,0);
        tracep->declBus(c+3,"uart_rx baud_counter", false,-1, 3,0);
        tracep->declBus(c+4,"uart_rx index", false,-1, 2,0);
        tracep->declBit(c+5,"uart_rx calculated_parity", false,-1);
    }
}

void Vuart_rx::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vuart_rx::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vuart_rx::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->uart_rx__DOT__current_state),3);
        tracep->fullCData(oldp+2,(vlTOPp->uart_rx__DOT__rx_shift_register),8);
        tracep->fullCData(oldp+3,(vlTOPp->uart_rx__DOT__baud_counter),4);
        tracep->fullCData(oldp+4,(vlTOPp->uart_rx__DOT__index),3);
        tracep->fullBit(oldp+5,(vlTOPp->uart_rx__DOT__calculated_parity));
        tracep->fullBit(oldp+6,(vlTOPp->clk_3125));
        tracep->fullBit(oldp+7,(vlTOPp->rx));
        tracep->fullCData(oldp+8,(vlTOPp->rx_msg),8);
        tracep->fullBit(oldp+9,(vlTOPp->rx_parity));
        tracep->fullBit(oldp+10,(vlTOPp->rx_complete));
        tracep->fullCData(oldp+11,(0U),3);
        tracep->fullCData(oldp+12,(1U),3);
        tracep->fullCData(oldp+13,(2U),3);
        tracep->fullCData(oldp+14,(3U),3);
        tracep->fullCData(oldp+15,(4U),3);
        tracep->fullIData(oldp+16,(0xeU),32);
    }
}
