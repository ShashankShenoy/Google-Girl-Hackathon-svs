// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexcess3_to_bcd_converter.h for the primary calling header

#include "Vexcess3_to_bcd_converter.h"
#include "Vexcess3_to_bcd_converter__Syms.h"

//==========

VL_CTOR_IMP(Vexcess3_to_bcd_converter) {
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = __VlSymsp = new Vexcess3_to_bcd_converter__Syms(this, name());
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vexcess3_to_bcd_converter::__Vconfigure(Vexcess3_to_bcd_converter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vexcess3_to_bcd_converter::~Vexcess3_to_bcd_converter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vexcess3_to_bcd_converter::_eval_initial(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_eval_initial\n"); );
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vexcess3_to_bcd_converter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::final\n"); );
    // Variables
    Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vexcess3_to_bcd_converter::_eval_settle(Vexcess3_to_bcd_converter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_eval_settle\n"); );
    Vexcess3_to_bcd_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vexcess3_to_bcd_converter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexcess3_to_bcd_converter::_ctor_var_reset\n"); );
    // Body
    excess3 = VL_RAND_RESET_I(4);
    bcd = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
