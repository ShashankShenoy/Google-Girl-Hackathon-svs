// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_rx__Syms.h"


void Vuart_rx::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vuart_rx::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->uart_rx__DOT__current_state),3);
            tracep->chgCData(oldp+1,(vlTOPp->uart_rx__DOT__rx_shift_register),8);
            tracep->chgCData(oldp+2,(vlTOPp->uart_rx__DOT__baud_counter),4);
            tracep->chgCData(oldp+3,(vlTOPp->uart_rx__DOT__index),3);
            tracep->chgBit(oldp+4,(vlTOPp->uart_rx__DOT__calculated_parity));
        }
        tracep->chgBit(oldp+5,(vlTOPp->clk_3125));
        tracep->chgBit(oldp+6,(vlTOPp->rx));
        tracep->chgCData(oldp+7,(vlTOPp->rx_msg),8);
        tracep->chgBit(oldp+8,(vlTOPp->rx_parity));
        tracep->chgBit(oldp+9,(vlTOPp->rx_complete));
    }
}

void Vuart_rx::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vuart_rx__Syms* __restrict vlSymsp = static_cast<Vuart_rx__Syms*>(userp);
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
