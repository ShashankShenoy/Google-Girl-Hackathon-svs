// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAND_gate.h for the primary calling header

#include "VAND_gate.h"
#include "VAND_gate__Syms.h"

//==========

VL_CTOR_IMP(VAND_gate) {
    VAND_gate__Syms* __restrict vlSymsp = __VlSymsp = new VAND_gate__Syms(this, name());
    VAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAND_gate::__Vconfigure(VAND_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VAND_gate::~VAND_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VAND_gate::_eval_initial(VAND_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_gate::_eval_initial\n"); );
    VAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAND_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_gate::final\n"); );
    // Variables
    VAND_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAND_gate::_eval_settle(VAND_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_gate::_eval_settle\n"); );
    VAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VAND_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_gate::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
