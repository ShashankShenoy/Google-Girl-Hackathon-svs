// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_slave.h for the primary calling header

#include "Vspi_slave.h"
#include "Vspi_slave__Syms.h"

//==========

VL_CTOR_IMP(Vspi_slave) {
    Vspi_slave__Syms* __restrict vlSymsp = __VlSymsp = new Vspi_slave__Syms(this, name());
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vspi_slave::__Vconfigure(Vspi_slave__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vspi_slave::~Vspi_slave() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vspi_slave::_settle__TOP__2(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_settle__TOP__2\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->miso = (1U & ((IData)(vlTOPp->spi_slave__DOT__tx_data) 
                          >> 7U));
}

void Vspi_slave::_eval_initial(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_eval_initial\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

void Vspi_slave::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::final\n"); );
    // Variables
    Vspi_slave__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vspi_slave::_eval_settle(Vspi_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_eval_settle\n"); );
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vspi_slave::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    sclk = VL_RAND_RESET_I(1);
    cs_n = VL_RAND_RESET_I(1);
    mosi = VL_RAND_RESET_I(1);
    data_in = VL_RAND_RESET_I(8);
    miso = VL_RAND_RESET_I(1);
    data_valid = VL_RAND_RESET_I(1);
    data_out = VL_RAND_RESET_I(8);
    spi_slave__DOT__rx_data = VL_RAND_RESET_I(8);
    spi_slave__DOT__tx_data = VL_RAND_RESET_I(8);
    spi_slave__DOT__bit_count = VL_RAND_RESET_I(3);
    spi_slave__DOT__sclk_prev = VL_RAND_RESET_I(1);
    spi_slave__DOT__sclk_prev2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
