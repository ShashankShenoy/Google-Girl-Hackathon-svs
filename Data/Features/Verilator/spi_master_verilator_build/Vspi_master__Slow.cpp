// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master.h"
#include "Vspi_master__Syms.h"

//==========

VL_CTOR_IMP(Vspi_master) {
    Vspi_master__Syms* __restrict vlSymsp = __VlSymsp = new Vspi_master__Syms(this, name());
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vspi_master::__Vconfigure(Vspi_master__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vspi_master::~Vspi_master() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vspi_master::_settle__TOP__2(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_settle__TOP__2\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mosi = (1U & ((IData)(vlTOPp->spi_master__DOT__tx_data) 
                          >> (7U & ((IData)(7U) - (IData)(vlTOPp->spi_master__DOT__bit_count)))));
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

void Vspi_master::_eval_initial(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_eval_initial\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

void Vspi_master::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::final\n"); );
    // Variables
    Vspi_master__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vspi_master::_eval_settle(Vspi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_eval_settle\n"); );
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vspi_master::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    data_in = VL_RAND_RESET_I(8);
    miso = VL_RAND_RESET_I(1);
    sclk = VL_RAND_RESET_I(1);
    mosi = VL_RAND_RESET_I(1);
    cs_n = VL_RAND_RESET_I(1);
    busy = VL_RAND_RESET_I(1);
    data_out = VL_RAND_RESET_I(8);
    spi_master__DOT__tx_data = VL_RAND_RESET_I(8);
    spi_master__DOT__rx_data = VL_RAND_RESET_I(8);
    spi_master__DOT__bit_count = VL_RAND_RESET_I(4);
    spi_master__DOT__clk_count = VL_RAND_RESET_I(8);
    spi_master__DOT__spi_clk_en = VL_RAND_RESET_I(1);
    spi_master__DOT__state = VL_RAND_RESET_I(2);
    spi_master__DOT__next_state = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
