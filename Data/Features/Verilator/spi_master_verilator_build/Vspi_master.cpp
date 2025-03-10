// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master.h"
#include "Vspi_master__Syms.h"

//==========

void Vspi_master::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_master::eval\n"); );
    Vspi_master__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/spi_master.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vspi_master::_eval_initial_loop(Vspi_master__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/spi_master.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vspi_master::_sequent__TOP__1(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_sequent__TOP__1\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__spi_master__DOT__clk_count;
    // Body
    __Vdly__spi_master__DOT__clk_count = vlTOPp->spi_master__DOT__clk_count;
    if (vlTOPp->rst_n) {
        if ((2U & (IData)(vlTOPp->spi_master__DOT__state))) {
            if ((1U & (IData)(vlTOPp->spi_master__DOT__state))) {
                vlTOPp->cs_n = 1U;
            }
        } else {
            vlTOPp->cs_n = (1U & (~ (IData)(vlTOPp->spi_master__DOT__state)));
        }
    } else {
        vlTOPp->cs_n = 1U;
    }
    if (vlTOPp->rst_n) {
        if ((2U & (IData)(vlTOPp->spi_master__DOT__state))) {
            vlTOPp->busy = (1U & (~ (IData)(vlTOPp->spi_master__DOT__state)));
        } else {
            if ((1U & (IData)(vlTOPp->spi_master__DOT__state))) {
                vlTOPp->busy = 1U;
            } else {
                vlTOPp->busy = 0U;
                if (vlTOPp->start) {
                    vlTOPp->busy = 1U;
                }
            }
        }
    } else {
        vlTOPp->busy = 0U;
    }
    if (vlTOPp->rst_n) {
        if ((1U & (~ ((IData)(vlTOPp->spi_master__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->spi_master__DOT__state)))) {
                if (vlTOPp->start) {
                    vlTOPp->spi_master__DOT__tx_data 
                        = vlTOPp->data_in;
                }
            }
        }
    } else {
        vlTOPp->spi_master__DOT__tx_data = 0U;
    }
    if (vlTOPp->rst_n) {
        if ((2U & (IData)(vlTOPp->spi_master__DOT__state))) {
            if ((1U & (IData)(vlTOPp->spi_master__DOT__state))) {
                vlTOPp->data_out = vlTOPp->spi_master__DOT__rx_data;
            } else {
                if ((1U == (IData)(vlTOPp->spi_master__DOT__clk_count))) {
                    if (vlTOPp->sclk) {
                        vlTOPp->spi_master__DOT__rx_data 
                            = ((0xfeU & ((IData)(vlTOPp->spi_master__DOT__rx_data) 
                                         << 1U)) | (IData)(vlTOPp->miso));
                    }
                }
            }
        }
    } else {
        vlTOPp->spi_master__DOT__rx_data = 0U;
        vlTOPp->data_out = 0U;
    }
    if (vlTOPp->rst_n) {
        if ((2U & (IData)(vlTOPp->spi_master__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->spi_master__DOT__state)))) {
                if ((1U == (IData)(vlTOPp->spi_master__DOT__clk_count))) {
                    if (vlTOPp->sclk) {
                        if (vlTOPp->sclk) {
                            vlTOPp->spi_master__DOT__bit_count 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlTOPp->spi_master__DOT__bit_count)));
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->spi_master__DOT__state)))) {
                vlTOPp->spi_master__DOT__bit_count = 0U;
            }
        }
    } else {
        vlTOPp->spi_master__DOT__bit_count = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->spi_master__DOT__spi_clk_en) {
            if ((1U == (IData)(vlTOPp->spi_master__DOT__clk_count))) {
                vlTOPp->sclk = (1U & (~ (IData)(vlTOPp->sclk)));
                __Vdly__spi_master__DOT__clk_count = 0U;
            } else {
                __Vdly__spi_master__DOT__clk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->spi_master__DOT__clk_count)));
            }
        } else {
            vlTOPp->sclk = 0U;
            __Vdly__spi_master__DOT__clk_count = 0U;
        }
    } else {
        vlTOPp->sclk = 0U;
        __Vdly__spi_master__DOT__clk_count = 0U;
    }
    vlTOPp->spi_master__DOT__clk_count = __Vdly__spi_master__DOT__clk_count;
    vlTOPp->mosi = (1U & ((IData)(vlTOPp->spi_master__DOT__tx_data) 
                          >> (7U & ((IData)(7U) - (IData)(vlTOPp->spi_master__DOT__bit_count)))));
    if (vlTOPp->rst_n) {
        if ((2U & (IData)(vlTOPp->spi_master__DOT__state))) {
            if ((1U & (IData)(vlTOPp->spi_master__DOT__state))) {
                vlTOPp->spi_master__DOT__spi_clk_en = 0U;
            }
        } else {
            vlTOPp->spi_master__DOT__spi_clk_en = (1U 
                                                   & (IData)(vlTOPp->spi_master__DOT__state));
        }
    } else {
        vlTOPp->spi_master__DOT__spi_clk_en = 0U;
    }
    vlTOPp->spi_master__DOT__state = ((IData)(vlTOPp->rst_n)
                                       ? (IData)(vlTOPp->spi_master__DOT__next_state)
                                       : 0U);
}

VL_INLINE_OPT void Vspi_master::_combo__TOP__3(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_combo__TOP__3\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spi_master__DOT__next_state = ((2U & (IData)(vlTOPp->spi_master__DOT__state))
                                            ? ((1U 
                                                & (IData)(vlTOPp->spi_master__DOT__state))
                                                ? 0U
                                                : (
                                                   (((7U 
                                                      == (IData)(vlTOPp->spi_master__DOT__bit_count)) 
                                                     & (1U 
                                                        == (IData)(vlTOPp->spi_master__DOT__clk_count))) 
                                                    & (IData)(vlTOPp->sclk))
                                                    ? 3U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlTOPp->spi_master__DOT__state))
                                                ? 2U
                                                : ((IData)(vlTOPp->start)
                                                    ? 1U
                                                    : 0U)));
}

void Vspi_master::_eval(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_eval\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst_n)) & (IData)(vlTOPp->__Vclklast__TOP__rst_n)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

VL_INLINE_OPT QData Vspi_master::_change_request(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_change_request\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vspi_master::_change_request_1(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_change_request_1\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vspi_master::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((miso & 0xfeU))) {
        Verilated::overWidthError("miso");}
}
#endif  // VL_DEBUG
