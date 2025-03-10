// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNOR_gate.h for the primary calling header

#include "VNOR_gate.h"
#include "VNOR_gate__Syms.h"

//==========

VL_CTOR_IMP(VNOR_gate) {
    VNOR_gate__Syms* __restrict vlSymsp = __VlSymsp = new VNOR_gate__Syms(this, name());
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VNOR_gate::__Vconfigure(VNOR_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VNOR_gate::~VNOR_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VNOR_gate::_eval_initial(VNOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_gate::_eval_initial\n"); );
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNOR_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_gate::final\n"); );
    // Variables
    VNOR_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNOR_gate::_eval_settle(VNOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_gate::_eval_settle\n"); );
    VNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VNOR_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_gate::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
