// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsequence_detector_1001.h for the primary calling header

#include "Vsequence_detector_1001.h"
#include "Vsequence_detector_1001__Syms.h"

//==========
CData/*1:0*/ Vsequence_detector_1001::__Vtable1_sequence_detector_1001__DOT__next_state[8];

VL_CTOR_IMP(Vsequence_detector_1001) {
    Vsequence_detector_1001__Syms* __restrict vlSymsp = __VlSymsp = new Vsequence_detector_1001__Syms(this, name());
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsequence_detector_1001::__Vconfigure(Vsequence_detector_1001__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsequence_detector_1001::~Vsequence_detector_1001() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsequence_detector_1001::_eval_initial(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_eval_initial\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vsequence_detector_1001::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::final\n"); );
    // Variables
    Vsequence_detector_1001__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsequence_detector_1001::_eval_settle(Vsequence_detector_1001__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_eval_settle\n"); );
    Vsequence_detector_1001* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vsequence_detector_1001::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsequence_detector_1001::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    data_in = VL_RAND_RESET_I(1);
    detected = VL_RAND_RESET_I(1);
    sequence_detector_1001__DOT__current_state = VL_RAND_RESET_I(2);
    sequence_detector_1001__DOT__next_state = VL_RAND_RESET_I(2);
    __Vtableidx1 = 0;
    __Vtable1_sequence_detector_1001__DOT__next_state[0] = 0U;
    __Vtable1_sequence_detector_1001__DOT__next_state[1] = 2U;
    __Vtable1_sequence_detector_1001__DOT__next_state[2] = 3U;
    __Vtable1_sequence_detector_1001__DOT__next_state[3] = 0U;
    __Vtable1_sequence_detector_1001__DOT__next_state[4] = 1U;
    __Vtable1_sequence_detector_1001__DOT__next_state[5] = 1U;
    __Vtable1_sequence_detector_1001__DOT__next_state[6] = 1U;
    __Vtable1_sequence_detector_1001__DOT__next_state[7] = 1U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
