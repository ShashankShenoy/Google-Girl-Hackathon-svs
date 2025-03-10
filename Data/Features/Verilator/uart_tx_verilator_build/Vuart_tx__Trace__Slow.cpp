// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tx__Syms.h"


//======================

void Vuart_tx::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vuart_tx::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vuart_tx::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vuart_tx::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vuart_tx::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clk_3125", false,-1);
        tracep->declBit(c+7,"parity_type", false,-1);
        tracep->declBit(c+8,"tx_start", false,-1);
        tracep->declBus(c+9,"data", false,-1, 7,0);
        tracep->declBit(c+10,"tx", false,-1);
        tracep->declBit(c+11,"tx_done", false,-1);
        tracep->declBit(c+6,"uart_tx clk_3125", false,-1);
        tracep->declBit(c+7,"uart_tx parity_type", false,-1);
        tracep->declBit(c+8,"uart_tx tx_start", false,-1);
        tracep->declBus(c+9,"uart_tx data", false,-1, 7,0);
        tracep->declBit(c+10,"uart_tx tx", false,-1);
        tracep->declBit(c+11,"uart_tx tx_done", false,-1);
        tracep->declBus(c+12,"uart_tx S_IDLE", false,-1, 2,0);
        tracep->declBus(c+13,"uart_tx S_START", false,-1, 2,0);
        tracep->declBus(c+14,"uart_tx S_DATA", false,-1, 2,0);
        tracep->declBus(c+15,"uart_tx S_PARITY", false,-1, 2,0);
        tracep->declBus(c+16,"uart_tx S_STOP", false,-1, 2,0);
        tracep->declBus(c+17,"uart_tx clk", false,-1, 31,0);
        tracep->declBus(c+1,"uart_tx current_state", false,-1, 2,0);
        tracep->declBus(c+2,"uart_tx baud_counter", false,-1, 3,0);
        tracep->declBus(c+3,"uart_tx shift_register", false,-1, 7,0);
        tracep->declBit(c+4,"uart_tx parity_bit", false,-1);
        tracep->declBus(c+5,"uart_tx bit_counter", false,-1, 2,0);
    }
}

void Vuart_tx::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vuart_tx::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vuart_tx::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->uart_tx__DOT__current_state),3);
        tracep->fullCData(oldp+2,(vlTOPp->uart_tx__DOT__baud_counter),4);
        tracep->fullCData(oldp+3,(vlTOPp->uart_tx__DOT__shift_register),8);
        tracep->fullBit(oldp+4,(vlTOPp->uart_tx__DOT__parity_bit));
        tracep->fullCData(oldp+5,(vlTOPp->uart_tx__DOT__bit_counter),3);
        tracep->fullBit(oldp+6,(vlTOPp->clk_3125));
        tracep->fullBit(oldp+7,(vlTOPp->parity_type));
        tracep->fullBit(oldp+8,(vlTOPp->tx_start));
        tracep->fullCData(oldp+9,(vlTOPp->data),8);
        tracep->fullBit(oldp+10,(vlTOPp->tx));
        tracep->fullBit(oldp+11,(vlTOPp->tx_done));
        tracep->fullCData(oldp+12,(0U),3);
        tracep->fullCData(oldp+13,(1U),3);
        tracep->fullCData(oldp+14,(2U),3);
        tracep->fullCData(oldp+15,(3U),3);
        tracep->fullCData(oldp+16,(4U),3);
        tracep->fullIData(oldp+17,(0xeU),32);
    }
}
