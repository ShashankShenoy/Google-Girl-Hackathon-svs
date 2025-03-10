// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_rx.h for the primary calling header

#include "Vuart_rx.h"
#include "Vuart_rx__Syms.h"

//==========

void Vuart_rx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_rx::eval\n"); );
    Vuart_rx__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/uart_rx.v", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vuart_rx::_eval_initial_loop(Vuart_rx__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/uart_rx.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vuart_rx::_sequent__TOP__1(Vuart_rx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_rx::_sequent__TOP__1\n"); );
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__uart_rx__DOT__current_state;
    CData/*3:0*/ __Vdly__uart_rx__DOT__baud_counter;
    // Body
    __Vdly__uart_rx__DOT__baud_counter = vlTOPp->uart_rx__DOT__baud_counter;
    __Vdly__uart_rx__DOT__current_state = vlTOPp->uart_rx__DOT__current_state;
    if ((4U & (IData)(vlTOPp->uart_rx__DOT__current_state))) {
        if ((2U & (IData)(vlTOPp->uart_rx__DOT__current_state))) {
            __Vdly__uart_rx__DOT__current_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->uart_rx__DOT__current_state))) {
                __Vdly__uart_rx__DOT__current_state = 0U;
            } else {
                if ((0xdU == (IData)(vlTOPp->uart_rx__DOT__baud_counter))) {
                    if (((IData)(vlTOPp->rx) & ((IData)(vlTOPp->uart_rx__DOT__calculated_parity) 
                                                == (IData)(vlTOPp->rx_parity)))) {
                        vlTOPp->rx_msg = vlTOPp->uart_rx__DOT__rx_shift_register;
                        vlTOPp->rx_complete = 1U;
                    } else {
                        vlTOPp->rx_msg = 0U;
                    }
                    __Vdly__uart_rx__DOT__current_state = 0U;
                    __Vdly__uart_rx__DOT__baud_counter = 0U;
                } else {
                    __Vdly__uart_rx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_rx__DOT__baud_counter)));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->uart_rx__DOT__current_state))) {
            if ((1U & (IData)(vlTOPp->uart_rx__DOT__current_state))) {
                if ((0xdU == (IData)(vlTOPp->uart_rx__DOT__baud_counter))) {
                    vlTOPp->rx_parity = vlTOPp->rx;
                    __Vdly__uart_rx__DOT__current_state = 4U;
                    __Vdly__uart_rx__DOT__baud_counter = 0U;
                } else {
                    __Vdly__uart_rx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_rx__DOT__baud_counter)));
                }
            } else {
                if ((0xdU == (IData)(vlTOPp->uart_rx__DOT__baud_counter))) {
                    vlTOPp->uart_rx__DOT__calculated_parity 
                        = ((IData)(vlTOPp->uart_rx__DOT__calculated_parity) 
                           ^ (IData)(vlTOPp->rx));
                    __Vdly__uart_rx__DOT__baud_counter = 0U;
                    vlTOPp->uart_rx__DOT__rx_shift_register 
                        = (((~ ((IData)(1U) << (IData)(vlTOPp->uart_rx__DOT__index))) 
                            & (IData)(vlTOPp->uart_rx__DOT__rx_shift_register)) 
                           | ((IData)(vlTOPp->rx) << (IData)(vlTOPp->uart_rx__DOT__index)));
                    if ((0U == (IData)(vlTOPp->uart_rx__DOT__index))) {
                        __Vdly__uart_rx__DOT__current_state = 3U;
                    } else {
                        vlTOPp->uart_rx__DOT__index 
                            = (7U & ((IData)(vlTOPp->uart_rx__DOT__index) 
                                     - (IData)(1U)));
                    }
                } else {
                    __Vdly__uart_rx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_rx__DOT__baud_counter)));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->uart_rx__DOT__current_state))) {
                if ((0xcU == (IData)(vlTOPp->uart_rx__DOT__baud_counter))) {
                    __Vdly__uart_rx__DOT__current_state 
                        = ((IData)(vlTOPp->rx) ? 0U
                            : 2U);
                    __Vdly__uart_rx__DOT__baud_counter = 0U;
                } else {
                    __Vdly__uart_rx__DOT__baud_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->uart_rx__DOT__baud_counter)));
                }
            } else {
                vlTOPp->uart_rx__DOT__index = 7U;
                vlTOPp->uart_rx__DOT__calculated_parity = 0U;
                vlTOPp->rx_complete = 0U;
                __Vdly__uart_rx__DOT__baud_counter = 0U;
                if ((1U & (~ (IData)(vlTOPp->rx)))) {
                    __Vdly__uart_rx__DOT__current_state = 1U;
                }
            }
        }
    }
    vlTOPp->uart_rx__DOT__baud_counter = __Vdly__uart_rx__DOT__baud_counter;
    vlTOPp->uart_rx__DOT__current_state = __Vdly__uart_rx__DOT__current_state;
}

void Vuart_rx::_eval(Vuart_rx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_rx::_eval\n"); );
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_3125) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_3125)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_3125 = vlTOPp->clk_3125;
}

VL_INLINE_OPT QData Vuart_rx::_change_request(Vuart_rx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_rx::_change_request\n"); );
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vuart_rx::_change_request_1(Vuart_rx__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_rx::_change_request_1\n"); );
    Vuart_rx* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vuart_rx::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_rx::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_3125 & 0xfeU))) {
        Verilated::overWidthError("clk_3125");}
    if (VL_UNLIKELY((rx & 0xfeU))) {
        Verilated::overWidthError("rx");}
}
#endif  // VL_DEBUG
