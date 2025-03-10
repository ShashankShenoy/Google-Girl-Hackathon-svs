// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_4bit.h for the primary calling header

#include "VFIFO_4bit.h"
#include "VFIFO_4bit__Syms.h"

//==========

VL_CTOR_IMP(VFIFO_4bit) {
    VFIFO_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VFIFO_4bit__Syms(this, name());
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFIFO_4bit::__Vconfigure(VFIFO_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VFIFO_4bit::~VFIFO_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VFIFO_4bit::_eval_initial(VFIFO_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_eval_initial\n"); );
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VFIFO_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::final\n"); );
    // Variables
    VFIFO_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFIFO_4bit::_eval_settle(VFIFO_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_eval_settle\n"); );
    VFIFO_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFIFO_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_4bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    data_in = VL_RAND_RESET_I(4);
    write = VL_RAND_RESET_I(1);
    read = VL_RAND_RESET_I(1);
    data_out = VL_RAND_RESET_I(4);
    full = VL_RAND_RESET_I(1);
    empty = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            FIFO_4bit__DOT__fifo[__Vi0] = VL_RAND_RESET_I(4);
    }}
    FIFO_4bit__DOT__wr_ptr = VL_RAND_RESET_I(2);
    FIFO_4bit__DOT__rd_ptr = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
