// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx.h for the primary calling header

#include "Vuart_tx.h"
#include "Vuart_tx__Syms.h"

//==========

void Vuart_tx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_tx::eval\n"); );
    Vuart_tx__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/uart_tx.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vuart_tx::_eval_initial_loop(Vuart_tx__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/uart_tx.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vuart_tx::_sequent__TOP__1(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_sequent__TOP__1\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__uart_tx__DOT__current_state;
    CData/*3:0*/ __Vdly__uart_tx__DOT__baud_counter;
    // Body
    __Vdly__uart_tx__DOT__baud_counter = vlTOPp->uart_tx__DOT__baud_counter;
    __Vdly__uart_tx__DOT__current_state = vlTOPp->uart_tx__DOT__current_state;
    if ((4U & (IData)(vlTOPp->uart_tx__DOT__current_state))) {
        if ((2U & (IData)(vlTOPp->uart_tx__DOT__current_state))) {
            __Vdly__uart_tx__DOT__current_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->uart_tx__DOT__current_state))) {
                __Vdly__uart_tx__DOT__current_state = 0U;
            } else {
                vlTOPp->tx = 1U;
                if ((0xdU == (IData)(vlTOPp->uart_tx__DOT__baud_counter))) {
                    __Vdly__uart_tx__DOT__baud_counter = 0U;
                    vlTOPp->tx_done = 1U;
                    __Vdly__uart_tx__DOT__current_state = 0U;
                } else {
                    __Vdly__uart_tx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_tx__DOT__baud_counter)));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->uart_tx__DOT__current_state))) {
            if ((1U & (IData)(vlTOPp->uart_tx__DOT__current_state))) {
                vlTOPp->tx = vlTOPp->uart_tx__DOT__parity_bit;
                if ((0xdU == (IData)(vlTOPp->uart_tx__DOT__baud_counter))) {
                    __Vdly__uart_tx__DOT__baud_counter = 0U;
                    __Vdly__uart_tx__DOT__current_state = 4U;
                } else {
                    __Vdly__uart_tx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_tx__DOT__baud_counter)));
                }
            } else {
                vlTOPp->tx = (1U & ((IData)(vlTOPp->uart_tx__DOT__shift_register) 
                                    >> (IData)(vlTOPp->uart_tx__DOT__bit_counter)));
                if ((0xdU == (IData)(vlTOPp->uart_tx__DOT__baud_counter))) {
                    __Vdly__uart_tx__DOT__baud_counter = 0U;
                    if ((0U == (IData)(vlTOPp->uart_tx__DOT__bit_counter))) {
                        __Vdly__uart_tx__DOT__current_state = 3U;
                    } else {
                        vlTOPp->uart_tx__DOT__bit_counter 
                            = (7U & ((IData)(vlTOPp->uart_tx__DOT__bit_counter) 
                                     - (IData)(1U)));
                    }
                } else {
                    __Vdly__uart_tx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_tx__DOT__baud_counter)));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->uart_tx__DOT__current_state))) {
                vlTOPp->tx = 0U;
                if ((0xdU == (IData)(vlTOPp->uart_tx__DOT__baud_counter))) {
                    __Vdly__uart_tx__DOT__baud_counter = 0U;
                    __Vdly__uart_tx__DOT__current_state = 2U;
                } else {
                    __Vdly__uart_tx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_tx__DOT__baud_counter)));
                }
            } else {
                vlTOPp->tx = 1U;
                vlTOPp->tx_done = 0U;
                if (vlTOPp->tx_start) {
                    __Vdly__uart_tx__DOT__baud_counter = 0U;
                    vlTOPp->uart_tx__DOT__bit_counter = 7U;
                    vlTOPp->uart_tx__DOT__shift_register 
                        = vlTOPp->data;
                    vlTOPp->uart_tx__DOT__parity_bit 
                        = (1U & ((IData)(vlTOPp->parity_type)
                                  ? (~ VL_REDXOR_32((IData)(vlTOPp->data)))
                                  : VL_REDXOR_32((IData)(vlTOPp->data))));
                    __Vdly__uart_tx__DOT__current_state = 1U;
                }
            }
        }
    }
    vlTOPp->uart_tx__DOT__current_state = __Vdly__uart_tx__DOT__current_state;
    vlTOPp->uart_tx__DOT__baud_counter = __Vdly__uart_tx__DOT__baud_counter;
}

void Vuart_tx::_eval(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_eval\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_3125) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_3125)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_3125 = vlTOPp->clk_3125;
}

VL_INLINE_OPT QData Vuart_tx::_change_request(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_change_request\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vuart_tx::_change_request_1(Vuart_tx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_change_request_1\n"); );
    Vuart_tx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vuart_tx::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_3125 & 0xfeU))) {
        Verilated::overWidthError("clk_3125");}
    if (VL_UNLIKELY((parity_type & 0xfeU))) {
        Verilated::overWidthError("parity_type");}
    if (VL_UNLIKELY((tx_start & 0xfeU))) {
        Verilated::overWidthError("tx_start");}
}
#endif  // VL_DEBUG
