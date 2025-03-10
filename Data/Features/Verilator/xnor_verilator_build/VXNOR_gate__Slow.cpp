// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXNOR_gate.h for the primary calling header

#include "VXNOR_gate.h"
#include "VXNOR_gate__Syms.h"

//==========

VL_CTOR_IMP(VXNOR_gate) {
    VXNOR_gate__Syms* __restrict vlSymsp = __VlSymsp = new VXNOR_gate__Syms(this, name());
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VXNOR_gate::__Vconfigure(VXNOR_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VXNOR_gate::~VXNOR_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VXNOR_gate::_eval_initial(VXNOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXNOR_gate::_eval_initial\n"); );
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VXNOR_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXNOR_gate::final\n"); );
    // Variables
    VXNOR_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VXNOR_gate::_eval_settle(VXNOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXNOR_gate::_eval_settle\n"); );
    VXNOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VXNOR_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXNOR_gate::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
