// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnand_xnor_flipflop.h for the primary calling header

#include "Vnand_xnor_flipflop.h"
#include "Vnand_xnor_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vnand_xnor_flipflop) {
    Vnand_xnor_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vnand_xnor_flipflop__Syms(this, name());
    Vnand_xnor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vnand_xnor_flipflop::__Vconfigure(Vnand_xnor_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vnand_xnor_flipflop::~Vnand_xnor_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vnand_xnor_flipflop::_eval_initial(Vnand_xnor_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_xnor_flipflop::_eval_initial\n"); );
    Vnand_xnor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vnand_xnor_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_xnor_flipflop::final\n"); );
    // Variables
    Vnand_xnor_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vnand_xnor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnand_xnor_flipflop::_eval_settle(Vnand_xnor_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_xnor_flipflop::_eval_settle\n"); );
    Vnand_xnor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnand_xnor_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_xnor_flipflop::_ctor_var_reset\n"); );
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
