// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalling_edge_detector.h for the primary calling header

#include "Vfalling_edge_detector.h"
#include "Vfalling_edge_detector__Syms.h"

//==========

VL_CTOR_IMP(Vfalling_edge_detector) {
    Vfalling_edge_detector__Syms* __restrict vlSymsp = __VlSymsp = new Vfalling_edge_detector__Syms(this, name());
    Vfalling_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfalling_edge_detector::__Vconfigure(Vfalling_edge_detector__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vfalling_edge_detector::~Vfalling_edge_detector() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vfalling_edge_detector::_eval_initial(Vfalling_edge_detector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalling_edge_detector::_eval_initial\n"); );
    Vfalling_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vfalling_edge_detector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalling_edge_detector::final\n"); );
    // Variables
    Vfalling_edge_detector__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfalling_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfalling_edge_detector::_eval_settle(Vfalling_edge_detector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalling_edge_detector::_eval_settle\n"); );
    Vfalling_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfalling_edge_detector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalling_edge_detector::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    falling_edge_detector__DOT__in_delay = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
