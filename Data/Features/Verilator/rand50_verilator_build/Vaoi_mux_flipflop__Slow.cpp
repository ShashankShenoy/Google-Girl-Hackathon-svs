// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaoi_mux_flipflop.h for the primary calling header

#include "Vaoi_mux_flipflop.h"
#include "Vaoi_mux_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vaoi_mux_flipflop) {
    Vaoi_mux_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vaoi_mux_flipflop__Syms(this, name());
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaoi_mux_flipflop::__Vconfigure(Vaoi_mux_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vaoi_mux_flipflop::~Vaoi_mux_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vaoi_mux_flipflop::_eval_initial(Vaoi_mux_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_mux_flipflop::_eval_initial\n"); );
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vaoi_mux_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_mux_flipflop::final\n"); );
    // Variables
    Vaoi_mux_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaoi_mux_flipflop::_eval_settle(Vaoi_mux_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_mux_flipflop::_eval_settle\n"); );
    Vaoi_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaoi_mux_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_mux_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    sel = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
