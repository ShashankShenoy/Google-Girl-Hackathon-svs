// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx.h for the primary calling header

#include "Vuart_tx.h"
#include "Vuart_tx__Syms.h"

//==========

VL_CTOR_IMP(Vuart_tx) {
    Vuart_tx__Syms* __restrict vlSymsp = __VlSymsp = new Vuart_tx__Syms(this, name());
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vuart_tx::__Vconfigure(Vuart_tx__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vuart_tx::~Vuart_tx() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vuart_tx::_initial__TOP__2(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_initial__TOP__2\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tx = 1U;
    vlTOPp->tx_done = 0U;
    vlTOPp->uart_tx__DOT__current_state = 0U;
    vlTOPp->uart_tx__DOT__baud_counter = 0U;
}

void Vuart_tx::_eval_initial(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_eval_initial\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_3125 = vlTOPp->clk_3125;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vuart_tx::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::final\n"); );
    // Variables
    Vuart_tx__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vuart_tx::_eval_settle(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_eval_settle\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vuart_tx::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_ctor_var_reset\n"); );
    // Body
    clk_3125 = VL_RAND_RESET_I(1);
    parity_type = VL_RAND_RESET_I(1);
    tx_start = VL_RAND_RESET_I(1);
    data = VL_RAND_RESET_I(8);
    tx = VL_RAND_RESET_I(1);
    tx_done = VL_RAND_RESET_I(1);
    uart_tx__DOT__current_state = VL_RAND_RESET_I(3);
    uart_tx__DOT__baud_counter = VL_RAND_RESET_I(4);
    uart_tx__DOT__shift_register = VL_RAND_RESET_I(8);
    uart_tx__DOT__parity_bit = VL_RAND_RESET_I(1);
    uart_tx__DOT__bit_counter = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
