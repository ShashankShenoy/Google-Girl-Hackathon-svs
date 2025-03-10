// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vt_ff_and_nor.h for the primary calling header

#include "Vt_ff_and_nor.h"
#include "Vt_ff_and_nor__Syms.h"

//==========

VL_CTOR_IMP(Vt_ff_and_nor) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = __VlSymsp = new Vt_ff_and_nor__Syms(this, name());
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vt_ff_and_nor::__Vconfigure(Vt_ff_and_nor__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vt_ff_and_nor::~Vt_ff_and_nor() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vt_ff_and_nor::_eval_initial(Vt_ff_and_nor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt_ff_and_nor::_eval_initial\n"); );
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vt_ff_and_nor::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt_ff_and_nor::final\n"); );
    // Variables
    Vt_ff_and_nor__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vt_ff_and_nor::_eval_settle(Vt_ff_and_nor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt_ff_and_nor::_eval_settle\n"); );
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vt_ff_and_nor::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt_ff_and_nor::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    t = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
