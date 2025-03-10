// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsequence_detector_1010.h for the primary calling header

#include "Vsequence_detector_1010.h"
#include "Vsequence_detector_1010__Syms.h"

//==========
CData/*2:0*/ Vsequence_detector_1010::__Vtable1_sequence_detector_1010__DOT__next_state[16];

VL_CTOR_IMP(Vsequence_detector_1010) {
    Vsequence_detector_1010__Syms* __restrict vlSymsp = __VlSymsp = new Vsequence_detector_1010__Syms(this, name());
    Vsequence_detector_1010* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsequence_detector_1010::__Vconfigure(Vsequence_detector_1010__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsequence_detector_1010::~Vsequence_detector_1010() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsequence_detector_1010::_eval_initial(Vsequence_detector_1010__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1010::_eval_initial\n"); );
    Vsequence_detector_1010* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vsequence_detector_1010::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1010::final\n"); );
    // Variables
    Vsequence_detector_1010__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsequence_detector_1010* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsequence_detector_1010::_eval_settle(Vsequence_detector_1010__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1010::_eval_settle\n"); );
    Vsequence_detector_1010* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vsequence_detector_1010::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1010::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    detected = VL_RAND_RESET_I(1);
    sequence_detector_1010__DOT__state = VL_RAND_RESET_I(3);
    sequence_detector_1010__DOT__next_state = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_sequence_detector_1010__DOT__next_state[0] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[1] = 2U;
    __Vtable1_sequence_detector_1010__DOT__next_state[2] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[3] = 2U;
    __Vtable1_sequence_detector_1010__DOT__next_state[4] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[5] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[6] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[7] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[8] = 1U;
    __Vtable1_sequence_detector_1010__DOT__next_state[9] = 1U;
    __Vtable1_sequence_detector_1010__DOT__next_state[10] = 3U;
    __Vtable1_sequence_detector_1010__DOT__next_state[11] = 1U;
    __Vtable1_sequence_detector_1010__DOT__next_state[12] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[13] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[14] = 0U;
    __Vtable1_sequence_detector_1010__DOT__next_state[15] = 0U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
