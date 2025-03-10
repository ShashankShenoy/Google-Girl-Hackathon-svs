// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tx__Syms.h"


void Vuart_tx::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vuart_tx::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->uart_tx__DOT__current_state),3);
            tracep->chgCData(oldp+1,(vlTOPp->uart_tx__DOT__baud_counter),4);
            tracep->chgCData(oldp+2,(vlTOPp->uart_tx__DOT__shift_register),8);
            tracep->chgBit(oldp+3,(vlTOPp->uart_tx__DOT__parity_bit));
            tracep->chgCData(oldp+4,(vlTOPp->uart_tx__DOT__bit_counter),3);
        }
        tracep->chgBit(oldp+5,(vlTOPp->clk_3125));
        tracep->chgBit(oldp+6,(vlTOPp->parity_type));
        tracep->chgBit(oldp+7,(vlTOPp->tx_start));
        tracep->chgCData(oldp+8,(vlTOPp->data),8);
        tracep->chgBit(oldp+9,(vlTOPp->tx));
        tracep->chgBit(oldp+10,(vlTOPp->tx_done));
    }
}

void Vuart_tx::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vuart_tx__Syms* __restrict vlSymsp = static_cast<Vuart_tx__Syms*>(userp);
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
