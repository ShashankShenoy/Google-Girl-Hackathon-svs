// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboth_edges_detector.h for the primary calling header

#include "Vboth_edges_detector.h"
#include "Vboth_edges_detector__Syms.h"

//==========

VL_CTOR_IMP(Vboth_edges_detector) {
    Vboth_edges_detector__Syms* __restrict vlSymsp = __VlSymsp = new Vboth_edges_detector__Syms(this, name());
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vboth_edges_detector::__Vconfigure(Vboth_edges_detector__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vboth_edges_detector::~Vboth_edges_detector() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vboth_edges_detector::_eval_initial(Vboth_edges_detector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboth_edges_detector::_eval_initial\n"); );
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vboth_edges_detector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboth_edges_detector::final\n"); );
    // Variables
    Vboth_edges_detector__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vboth_edges_detector::_eval_settle(Vboth_edges_detector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboth_edges_detector::_eval_settle\n"); );
    Vboth_edges_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vboth_edges_detector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboth_edges_detector::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    both_edges_detector__DOT__in_delay = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
