// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrising_edge_detector.h for the primary calling header

#include "Vrising_edge_detector.h"
#include "Vrising_edge_detector__Syms.h"

//==========

VL_CTOR_IMP(Vrising_edge_detector) {
    Vrising_edge_detector__Syms* __restrict vlSymsp = __VlSymsp = new Vrising_edge_detector__Syms(this, name());
    Vrising_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vrising_edge_detector::__Vconfigure(Vrising_edge_detector__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vrising_edge_detector::~Vrising_edge_detector() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vrising_edge_detector::_eval_initial(Vrising_edge_detector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrising_edge_detector::_eval_initial\n"); );
    Vrising_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vrising_edge_detector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrising_edge_detector::final\n"); );
    // Variables
    Vrising_edge_detector__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrising_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrising_edge_detector::_eval_settle(Vrising_edge_detector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrising_edge_detector::_eval_settle\n"); );
    Vrising_edge_detector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrising_edge_detector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrising_edge_detector::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    rising_edge_detector__DOT__in_delay = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
