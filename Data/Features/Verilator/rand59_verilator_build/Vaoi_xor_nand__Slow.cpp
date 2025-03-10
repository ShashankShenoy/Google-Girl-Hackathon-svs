// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaoi_xor_nand.h for the primary calling header

#include "Vaoi_xor_nand.h"
#include "Vaoi_xor_nand__Syms.h"

//==========

VL_CTOR_IMP(Vaoi_xor_nand) {
    Vaoi_xor_nand__Syms* __restrict vlSymsp = __VlSymsp = new Vaoi_xor_nand__Syms(this, name());
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaoi_xor_nand::__Vconfigure(Vaoi_xor_nand__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vaoi_xor_nand::~Vaoi_xor_nand() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vaoi_xor_nand::_eval_initial(Vaoi_xor_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_xor_nand::_eval_initial\n"); );
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaoi_xor_nand::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_xor_nand::final\n"); );
    // Variables
    Vaoi_xor_nand__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaoi_xor_nand::_eval_settle(Vaoi_xor_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_xor_nand::_eval_settle\n"); );
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vaoi_xor_nand::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_xor_nand::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
