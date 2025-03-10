// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_nor_flipflop.h for the primary calling header

#include "Vand_nor_flipflop.h"
#include "Vand_nor_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vand_nor_flipflop) {
    Vand_nor_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vand_nor_flipflop__Syms(this, name());
    Vand_nor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vand_nor_flipflop::__Vconfigure(Vand_nor_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vand_nor_flipflop::~Vand_nor_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vand_nor_flipflop::_eval_initial(Vand_nor_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_nor_flipflop::_eval_initial\n"); );
    Vand_nor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vand_nor_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_nor_flipflop::final\n"); );
    // Variables
    Vand_nor_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vand_nor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand_nor_flipflop::_eval_settle(Vand_nor_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_nor_flipflop::_eval_settle\n"); );
    Vand_nor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vand_nor_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_nor_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
