// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAM_4x4.h for the primary calling header

#include "VRAM_4x4.h"
#include "VRAM_4x4__Syms.h"

//==========

VL_CTOR_IMP(VRAM_4x4) {
    VRAM_4x4__Syms* __restrict vlSymsp = __VlSymsp = new VRAM_4x4__Syms(this, name());
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRAM_4x4::__Vconfigure(VRAM_4x4__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VRAM_4x4::~VRAM_4x4() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VRAM_4x4::_eval_initial(VRAM_4x4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_4x4::_eval_initial\n"); );
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VRAM_4x4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_4x4::final\n"); );
    // Variables
    VRAM_4x4__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRAM_4x4::_eval_settle(VRAM_4x4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_4x4::_eval_settle\n"); );
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRAM_4x4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_4x4::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    addr = VL_RAND_RESET_I(2);
    data_in = VL_RAND_RESET_I(4);
    write = VL_RAND_RESET_I(1);
    data_out = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            RAM_4x4__DOT__mem[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
