// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnand_and_cascade.h for the primary calling header

#include "Vnand_and_cascade.h"
#include "Vnand_and_cascade__Syms.h"

//==========

VL_CTOR_IMP(Vnand_and_cascade) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = __VlSymsp = new Vnand_and_cascade__Syms(this, name());
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vnand_and_cascade::__Vconfigure(Vnand_and_cascade__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vnand_and_cascade::~Vnand_and_cascade() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vnand_and_cascade::_eval_initial(Vnand_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_and_cascade::_eval_initial\n"); );
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnand_and_cascade::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_and_cascade::final\n"); );
    // Variables
    Vnand_and_cascade__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnand_and_cascade::_eval_settle(Vnand_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_and_cascade::_eval_settle\n"); );
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vnand_and_cascade::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_and_cascade::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
