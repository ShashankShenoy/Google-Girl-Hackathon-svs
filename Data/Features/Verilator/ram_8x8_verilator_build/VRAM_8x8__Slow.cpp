// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAM_8x8.h for the primary calling header

#include "VRAM_8x8.h"
#include "VRAM_8x8__Syms.h"

//==========

VL_CTOR_IMP(VRAM_8x8) {
    VRAM_8x8__Syms* __restrict vlSymsp = __VlSymsp = new VRAM_8x8__Syms(this, name());
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRAM_8x8::__Vconfigure(VRAM_8x8__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VRAM_8x8::~VRAM_8x8() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VRAM_8x8::_eval_initial(VRAM_8x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_8x8::_eval_initial\n"); );
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VRAM_8x8::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_8x8::final\n"); );
    // Variables
    VRAM_8x8__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRAM_8x8::_eval_settle(VRAM_8x8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_8x8::_eval_settle\n"); );
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRAM_8x8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_8x8::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    addr = VL_RAND_RESET_I(3);
    data_in = VL_RAND_RESET_I(8);
    write = VL_RAND_RESET_I(1);
    data_out = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            RAM_8x8__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
