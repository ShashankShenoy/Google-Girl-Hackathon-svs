// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_flipflop.h for the primary calling header

#include "Vfull_adder_flipflop.h"
#include "Vfull_adder_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vfull_adder_flipflop) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vfull_adder_flipflop__Syms(this, name());
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfull_adder_flipflop::__Vconfigure(Vfull_adder_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vfull_adder_flipflop::~Vfull_adder_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vfull_adder_flipflop::_eval_initial(Vfull_adder_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_flipflop::_eval_initial\n"); );
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vfull_adder_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_flipflop::final\n"); );
    // Variables
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfull_adder_flipflop::_eval_settle(Vfull_adder_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_flipflop::_eval_settle\n"); );
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfull_adder_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    cin = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
