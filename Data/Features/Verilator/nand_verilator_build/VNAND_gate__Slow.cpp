// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNAND_gate.h for the primary calling header

#include "VNAND_gate.h"
#include "VNAND_gate__Syms.h"

//==========

VL_CTOR_IMP(VNAND_gate) {
    VNAND_gate__Syms* __restrict vlSymsp = __VlSymsp = new VNAND_gate__Syms(this, name());
    VNAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VNAND_gate::__Vconfigure(VNAND_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VNAND_gate::~VNAND_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VNAND_gate::_eval_initial(VNAND_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNAND_gate::_eval_initial\n"); );
    VNAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNAND_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNAND_gate::final\n"); );
    // Variables
    VNAND_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VNAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNAND_gate::_eval_settle(VNAND_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNAND_gate::_eval_settle\n"); );
    VNAND_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VNAND_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNAND_gate::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
