// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_slave.h for the primary calling header

#include "Vspi_slave.h"
#include "Vspi_slave__Syms.h"

//==========

void Vspi_slave::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_slave::eval\n"); );
    Vspi_slave__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/spi_slave.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vspi_slave::_eval_initial_loop(Vspi_slave__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/spi_slave.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vspi_slave::_sequent__TOP__1(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_sequent__TOP__1\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__spi_slave__DOT__bit_count;
    CData/*7:0*/ __Vdly__spi_slave__DOT__tx_data;
    CData/*7:0*/ __Vdly__spi_slave__DOT__rx_data;
    // Body
    __Vdly__spi_slave__DOT__rx_data = vlTOPp->spi_slave__DOT__rx_data;
    __Vdly__spi_slave__DOT__bit_count = vlTOPp->spi_slave__DOT__bit_count;
    __Vdly__spi_slave__DOT__tx_data = vlTOPp->spi_slave__DOT__tx_data;
    if (vlTOPp->rst_n) {
        vlTOPp->data_valid = 0U;
        if (vlTOPp->cs_n) {
            __Vdly__spi_slave__DOT__bit_count = 0U;
            __Vdly__spi_slave__DOT__tx_data = 0U;
        } else {
            if (((0U == (IData)(vlTOPp->spi_slave__DOT__bit_count)) 
                 & (0U == (IData)(vlTOPp->spi_slave__DOT__tx_data)))) {
                __Vdly__spi_slave__DOT__tx_data = vlTOPp->data_in;
            }
            if (((IData)(vlTOPp->spi_slave__DOT__sclk_prev) 
                 & (~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev2)))) {
                __Vdly__spi_slave__DOT__rx_data = (
                                                   (0xfeU 
                                                    & ((IData)(vlTOPp->spi_slave__DOT__rx_data) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->mosi));
            }
            if (((~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev)) 
                 & (IData)(vlTOPp->spi_slave__DOT__sclk_prev2))) {
                __Vdly__spi_slave__DOT__bit_count = 
                    (7U & ((IData)(1U) + (IData)(vlTOPp->spi_slave__DOT__bit_count)));
                __Vdly__spi_slave__DOT__tx_data = (0xfeU 
                                                   & ((IData)(vlTOPp->spi_slave__DOT__tx_data) 
                                                      << 1U));
            }
            if (((0U == (IData)(vlTOPp->spi_slave__DOT__bit_count)) 
                 & ((IData)(vlTOPp->spi_slave__DOT__sclk_prev) 
                    & (~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev2))))) {
                vlTOPp->data_out = ((0xfeU & ((IData)(vlTOPp->spi_slave__DOT__rx_data) 
                                              << 1U)) 
                                    | (IData)(vlTOPp->mosi));
                vlTOPp->data_valid = 1U;
                __Vdly__spi_slave__DOT__tx_data = vlTOPp->data_in;
            }
        }
    } else {
        __Vdly__spi_slave__DOT__rx_data = 0U;
        __Vdly__spi_slave__DOT__bit_count = 0U;
        vlTOPp->data_valid = 0U;
        vlTOPp->data_out = 0U;
        __Vdly__spi_slave__DOT__tx_data = 0U;
    }
    vlTOPp->spi_slave__DOT__bit_count = __Vdly__spi_slave__DOT__bit_count;
    vlTOPp->spi_slave__DOT__rx_data = __Vdly__spi_slave__DOT__rx_data;
    vlTOPp->spi_slave__DOT__tx_data = __Vdly__spi_slave__DOT__tx_data;
    vlTOPp->miso = (1U & ((IData)(vlTOPp->spi_slave__DOT__tx_data) 
                          >> 7U));
    vlTOPp->spi_slave__DOT__sclk_prev2 = ((IData)(vlTOPp->rst_n) 
                                          & (IData)(vlTOPp->spi_slave__DOT__sclk_prev));
    vlTOPp->spi_slave__DOT__sclk_prev = ((IData)(vlTOPp->rst_n) 
                                         & (IData)(vlTOPp->sclk));
}

void Vspi_slave::_eval(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_eval\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst_n)) & (IData)(vlTOPp->__Vclklast__TOP__rst_n)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

VL_INLINE_OPT QData Vspi_slave::_change_request(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_change_request\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vspi_slave::_change_request_1(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_change_request_1\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vspi_slave::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((sclk & 0xfeU))) {
        Verilated::overWidthError("sclk");}
    if (VL_UNLIKELY((cs_n & 0xfeU))) {
        Verilated::overWidthError("cs_n");}
    if (VL_UNLIKELY((mosi & 0xfeU))) {
        Verilated::overWidthError("mosi");}
}
#endif  // VL_DEBUG
