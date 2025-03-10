// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsr_latch_nand.h for the primary calling header

#include "Vsr_latch_nand.h"
#include "Vsr_latch_nand__Syms.h"

//==========

VL_CTOR_IMP(Vsr_latch_nand) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = __VlSymsp = new Vsr_latch_nand__Syms(this, name());
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsr_latch_nand::__Vconfigure(Vsr_latch_nand__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsr_latch_nand::~Vsr_latch_nand() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsr_latch_nand::_eval_initial(Vsr_latch_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_eval_initial\n"); );
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsr_latch_nand::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::final\n"); );
    // Variables
    Vsr_latch_nand__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsr_latch_nand::_eval_settle(Vsr_latch_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_eval_settle\n"); );
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vsr_latch_nand::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_ctor_var_reset\n"); );
    // Body
    s = VL_RAND_RESET_I(1);
    r = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    q_bar = VL_RAND_RESET_I(1);
    __Vchglast__TOP__q_bar = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
