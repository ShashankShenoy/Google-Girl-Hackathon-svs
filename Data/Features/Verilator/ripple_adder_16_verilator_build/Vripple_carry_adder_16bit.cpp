// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_carry_adder_16bit.h for the primary calling header

#include "Vripple_carry_adder_16bit.h"
#include "Vripple_carry_adder_16bit__Syms.h"

//==========

void Vripple_carry_adder_16bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vripple_carry_adder_16bit::eval\n"); );
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ripple_adder_16.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vripple_carry_adder_16bit::_eval_initial_loop(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ripple_adder_16.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vripple_carry_adder_16bit::_combo__TOP__1(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_combo__TOP__1\n"); );
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sum = ((0xfffeU & (IData)(vlTOPp->sum)) 
                   | (1U & (((IData)(vlTOPp->a) ^ (IData)(vlTOPp->b)) 
                            ^ (IData)(vlTOPp->cin))));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfffeU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | (1U & (((IData)(vlTOPp->a) & ((IData)(vlTOPp->b) 
                                         | (IData)(vlTOPp->cin))) 
                  | ((IData)(vlTOPp->b) & (IData)(vlTOPp->cin)))));
    vlTOPp->cout = (1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                          >> 0xfU));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__1__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 1U) & (((IData)(vlTOPp->b) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))) 
                 | (((IData)(vlTOPp->b) >> 1U) & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__2__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 2U) & (((IData)(vlTOPp->b) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 1U))) 
                 | (((IData)(vlTOPp->b) >> 2U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 1U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__3__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 3U) & (((IData)(vlTOPp->b) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 2U))) 
                 | (((IData)(vlTOPp->b) >> 3U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 2U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__4__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 4U) & (((IData)(vlTOPp->b) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 3U))) 
                 | (((IData)(vlTOPp->b) >> 4U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 3U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__5__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 5U) & (((IData)(vlTOPp->b) 
                                                 >> 5U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 4U))) 
                 | (((IData)(vlTOPp->b) >> 5U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 4U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__6__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 6U) & (((IData)(vlTOPp->b) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 5U))) 
                 | (((IData)(vlTOPp->b) >> 6U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 5U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__7__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 7U) & (((IData)(vlTOPp->b) 
                                                 >> 7U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 6U))) 
                 | (((IData)(vlTOPp->b) >> 7U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 6U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__8__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 8U) & (((IData)(vlTOPp->b) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 7U))) 
                 | (((IData)(vlTOPp->b) >> 8U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 7U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__9__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 9U) & (((IData)(vlTOPp->b) 
                                                 >> 9U) 
                                                | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 8U))) 
                 | (((IData)(vlTOPp->b) >> 9U) & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 8U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__10__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 0xaU) & (((IData)(vlTOPp->b) 
                                                   >> 0xaU) 
                                                  | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                     >> 9U))) 
                 | (((IData)(vlTOPp->b) >> 0xaU) & 
                    ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                     >> 9U))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__11__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 0xbU) & (((IData)(vlTOPp->b) 
                                                   >> 0xbU) 
                                                  | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                     >> 0xaU))) 
                 | (((IData)(vlTOPp->b) >> 0xbU) & 
                    ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                     >> 0xaU))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__12__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 0xcU) & (((IData)(vlTOPp->b) 
                                                   >> 0xcU) 
                                                  | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                     >> 0xbU))) 
                 | (((IData)(vlTOPp->b) >> 0xcU) & 
                    ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                     >> 0xbU))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__13__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 0xdU) & (((IData)(vlTOPp->b) 
                                                   >> 0xdU) 
                                                  | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                     >> 0xcU))) 
                 | (((IData)(vlTOPp->b) >> 0xdU) & 
                    ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                     >> 0xcU))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__14__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 0xeU) & (((IData)(vlTOPp->b) 
                                                   >> 0xeU) 
                                                  | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                     >> 0xdU))) 
                 | (((IData)(vlTOPp->b) >> 0xeU) & 
                    ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                     >> 0xdU))));
    vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__15__KET____DOT__fa__cout 
        = (1U & ((((IData)(vlTOPp->a) >> 0xfU) & (((IData)(vlTOPp->b) 
                                                   >> 0xfU) 
                                                  | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                     >> 0xeU))) 
                 | (((IData)(vlTOPp->b) >> 0xfU) & 
                    ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                     >> 0xeU))));
    vlTOPp->sum = ((0xfffdU & (IData)(vlTOPp->sum)) 
                   | (2U & ((0xfffffffeU & ((IData)(vlTOPp->a) 
                                            ^ (IData)(vlTOPp->b))) 
                            ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                               << 1U))));
    vlTOPp->sum = ((0xfffbU & (IData)(vlTOPp->sum)) 
                   | (4U & ((0xfffffffcU & ((IData)(vlTOPp->a) 
                                            ^ (IData)(vlTOPp->b))) 
                            ^ (0xfffffffcU & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              << 1U)))));
    vlTOPp->sum = ((0xfff7U & (IData)(vlTOPp->sum)) 
                   | (8U & ((0xfffffff8U & ((IData)(vlTOPp->a) 
                                            ^ (IData)(vlTOPp->b))) 
                            ^ (0xfffffff8U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              << 1U)))));
    vlTOPp->sum = ((0xffefU & (IData)(vlTOPp->sum)) 
                   | (0x10U & ((0xfffffff0U & ((IData)(vlTOPp->a) 
                                               ^ (IData)(vlTOPp->b))) 
                               ^ (0xfffffff0U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                 << 1U)))));
    vlTOPp->sum = ((0xffdfU & (IData)(vlTOPp->sum)) 
                   | (0x20U & ((0xffffffe0U & ((IData)(vlTOPp->a) 
                                               ^ (IData)(vlTOPp->b))) 
                               ^ (0xffffffe0U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                 << 1U)))));
    vlTOPp->sum = ((0xffbfU & (IData)(vlTOPp->sum)) 
                   | (0x40U & ((0xffffffc0U & ((IData)(vlTOPp->a) 
                                               ^ (IData)(vlTOPp->b))) 
                               ^ (0xffffffc0U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                 << 1U)))));
    vlTOPp->sum = ((0xff7fU & (IData)(vlTOPp->sum)) 
                   | (0x80U & ((0xffffff80U & ((IData)(vlTOPp->a) 
                                               ^ (IData)(vlTOPp->b))) 
                               ^ (0xffffff80U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                 << 1U)))));
    vlTOPp->sum = ((0xfeffU & (IData)(vlTOPp->sum)) 
                   | (0x100U & ((0xffffff00U & ((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b))) 
                                ^ (0xffffff00U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  << 1U)))));
    vlTOPp->sum = ((0xfdffU & (IData)(vlTOPp->sum)) 
                   | (0x200U & ((0xfffffe00U & ((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b))) 
                                ^ (0xfffffe00U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  << 1U)))));
    vlTOPp->sum = ((0xfbffU & (IData)(vlTOPp->sum)) 
                   | (0x400U & ((0xfffffc00U & ((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b))) 
                                ^ (0xfffffc00U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  << 1U)))));
    vlTOPp->sum = ((0xf7ffU & (IData)(vlTOPp->sum)) 
                   | (0x800U & ((0xfffff800U & ((IData)(vlTOPp->a) 
                                                ^ (IData)(vlTOPp->b))) 
                                ^ (0xfffff800U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  << 1U)))));
    vlTOPp->sum = ((0xefffU & (IData)(vlTOPp->sum)) 
                   | (0x1000U & ((0xfffff000U & ((IData)(vlTOPp->a) 
                                                 ^ (IData)(vlTOPp->b))) 
                                 ^ (0xfffff000U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   << 1U)))));
    vlTOPp->sum = ((0xdfffU & (IData)(vlTOPp->sum)) 
                   | (0x2000U & ((0xffffe000U & ((IData)(vlTOPp->a) 
                                                 ^ (IData)(vlTOPp->b))) 
                                 ^ (0xffffe000U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   << 1U)))));
    vlTOPp->sum = ((0xbfffU & (IData)(vlTOPp->sum)) 
                   | (0x4000U & ((0xffffc000U & ((IData)(vlTOPp->a) 
                                                 ^ (IData)(vlTOPp->b))) 
                                 ^ (0xffffc000U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   << 1U)))));
    vlTOPp->sum = ((0x7fffU & (IData)(vlTOPp->sum)) 
                   | (0x8000U & ((0xffff8000U & ((IData)(vlTOPp->a) 
                                                 ^ (IData)(vlTOPp->b))) 
                                 ^ (0xffff8000U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   << 1U)))));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfffdU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__1__KET____DOT__fa__cout) 
            << 1U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfffbU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__2__KET____DOT__fa__cout) 
            << 2U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfff7U & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__3__KET____DOT__fa__cout) 
            << 3U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xffefU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__4__KET____DOT__fa__cout) 
            << 4U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xffdfU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__5__KET____DOT__fa__cout) 
            << 5U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xffbfU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__6__KET____DOT__fa__cout) 
            << 6U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xff7fU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__7__KET____DOT__fa__cout) 
            << 7U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfeffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__8__KET____DOT__fa__cout) 
            << 8U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfdffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__9__KET____DOT__fa__cout) 
            << 9U));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xfbffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__10__KET____DOT__fa__cout) 
            << 0xaU));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xf7ffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__11__KET____DOT__fa__cout) 
            << 0xbU));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xefffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__12__KET____DOT__fa__cout) 
            << 0xcU));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xdfffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__13__KET____DOT__fa__cout) 
            << 0xdU));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0xbfffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__14__KET____DOT__fa__cout) 
            << 0xeU));
    vlTOPp->ripple_carry_adder_16bit__DOT__carry = 
        ((0x7fffU & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)) 
         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT____Vcellout__gen_adders__BRA__15__KET____DOT__fa__cout) 
            << 0xfU));
}

void Vripple_carry_adder_16bit::_eval(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_eval\n"); );
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Vripple_carry_adder_16bit::_change_request(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_change_request\n"); );
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vripple_carry_adder_16bit::_change_request_1(Vripple_carry_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_change_request_1\n"); );
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->ripple_carry_adder_16bit__DOT__carry ^ vlTOPp->__Vchglast__TOP__ripple_carry_adder_16bit__DOT__carry));
    VL_DEBUG_IF( if(__req && ((vlTOPp->ripple_carry_adder_16bit__DOT__carry ^ vlTOPp->__Vchglast__TOP__ripple_carry_adder_16bit__DOT__carry))) VL_DBG_MSGF("        CHANGE: /home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ripple_adder_16.v:7: ripple_carry_adder_16bit.carry\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__ripple_carry_adder_16bit__DOT__carry 
        = vlTOPp->ripple_carry_adder_16bit__DOT__carry;
    return __req;
}

#ifdef VL_DEBUG
void Vripple_carry_adder_16bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_carry_adder_16bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
