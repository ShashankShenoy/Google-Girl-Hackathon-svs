// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_flipflop.h for the primary calling header

#include "Vmux_flipflop.h"
#include "Vmux_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vmux_flipflop) {
    Vmux_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vmux_flipflop__Syms(this, name());
    Vmux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmux_flipflop::__Vconfigure(Vmux_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmux_flipflop::~Vmux_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmux_flipflop::_eval_initial(Vmux_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_flipflop::_eval_initial\n"); );
    Vmux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vmux_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_flipflop::final\n"); );
    // Variables
    Vmux_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_flipflop::_eval_settle(Vmux_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_flipflop::_eval_settle\n"); );
    Vmux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    sel = VL_RAND_RESET_I(1);
    d0 = VL_RAND_RESET_I(1);
    d1 = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
