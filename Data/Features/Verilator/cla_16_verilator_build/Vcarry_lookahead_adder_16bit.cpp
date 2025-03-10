// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcarry_lookahead_adder_16bit.h for the primary calling header

#include "Vcarry_lookahead_adder_16bit.h"
#include "Vcarry_lookahead_adder_16bit__Syms.h"

//==========

void Vcarry_lookahead_adder_16bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcarry_lookahead_adder_16bit::eval\n"); );
    Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/cla_16.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcarry_lookahead_adder_16bit::_eval_initial_loop(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/cla_16.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcarry_lookahead_adder_16bit::_combo__TOP__1(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_combo__TOP__1\n"); );
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfffeU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (1U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfffdU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (2U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfffbU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (4U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfff7U 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (8U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xffefU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x10U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xffdfU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x20U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xffbfU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x40U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xff7fU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x80U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfeffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x100U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfdffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x200U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xfbffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x400U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xf7ffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x800U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xefffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x1000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xdfffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x2000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0xbfffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x4000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__g = (
                                                   (0x7fffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g)) 
                                                   | (0x8000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         & (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1fffeU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (IData)(vlTOPp->cin));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfffeU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (1U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfffdU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (2U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfffbU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (4U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfff7U 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (8U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xffefU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x10U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xffdfU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x20U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xffbfU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x40U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xff7fU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x80U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfeffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x100U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfdffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x200U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xfbffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x400U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xf7ffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x800U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xefffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x1000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xdfffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x2000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0xbfffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x4000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->carry_lookahead_adder_16bit__DOT__p = (
                                                   (0x7fffU 
                                                    & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                                   | (0x8000U 
                                                      & ((IData)(vlTOPp->a) 
                                                         ^ (IData)(vlTOPp->b))));
    vlTOPp->cout = (1U & (vlTOPp->carry_lookahead_adder_16bit__DOT__c 
                          >> 0x10U));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1fffdU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (2U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1fffbU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (4U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1fff7U 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (8U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1ffefU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x10U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1ffdfU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x20U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1ffbfU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x40U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1ff7fU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x80U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1feffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x100U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1fdffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x200U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1fbffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x400U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1f7ffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x800U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1efffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x1000U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1dfffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x2000U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x1bfffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x4000U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0x17fffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x8000U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->carry_lookahead_adder_16bit__DOT__c = (
                                                   (0xffffU 
                                                    & vlTOPp->carry_lookahead_adder_16bit__DOT__c) 
                                                   | (0x10000U 
                                                      & (((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__g) 
                                                          | ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                                                             & vlTOPp->carry_lookahead_adder_16bit__DOT__c)) 
                                                         << 1U)));
    vlTOPp->sum = ((0xfffeU & (IData)(vlTOPp->sum)) 
                   | (1U & ((IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p) 
                            ^ vlTOPp->carry_lookahead_adder_16bit__DOT__c)));
    vlTOPp->sum = ((0xfffdU & (IData)(vlTOPp->sum)) 
                   | (2U & ((0xfffffffeU & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                            ^ (0xfffffffeU & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xfffbU & (IData)(vlTOPp->sum)) 
                   | (4U & ((0xfffffffcU & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                            ^ (0xfffffffcU & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xfff7U & (IData)(vlTOPp->sum)) 
                   | (8U & ((0xfffffff8U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                            ^ (0xfffffff8U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xffefU & (IData)(vlTOPp->sum)) 
                   | (0x10U & ((0xfffffff0U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                               ^ (0xfffffff0U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xffdfU & (IData)(vlTOPp->sum)) 
                   | (0x20U & ((0xffffffe0U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                               ^ (0xffffffe0U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xffbfU & (IData)(vlTOPp->sum)) 
                   | (0x40U & ((0xffffffc0U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                               ^ (0xffffffc0U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xff7fU & (IData)(vlTOPp->sum)) 
                   | (0x80U & ((0xffffff80U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                               ^ (0xffffff80U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xfeffU & (IData)(vlTOPp->sum)) 
                   | (0x100U & ((0xffffff00U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                ^ (0xffffff00U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xfdffU & (IData)(vlTOPp->sum)) 
                   | (0x200U & ((0xfffffe00U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                ^ (0xfffffe00U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xfbffU & (IData)(vlTOPp->sum)) 
                   | (0x400U & ((0xfffffc00U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                ^ (0xfffffc00U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xf7ffU & (IData)(vlTOPp->sum)) 
                   | (0x800U & ((0xfffff800U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                ^ (0xfffff800U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xefffU & (IData)(vlTOPp->sum)) 
                   | (0x1000U & ((0xfffff000U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                 ^ (0xfffff000U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xdfffU & (IData)(vlTOPp->sum)) 
                   | (0x2000U & ((0xffffe000U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                 ^ (0xffffe000U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0xbfffU & (IData)(vlTOPp->sum)) 
                   | (0x4000U & ((0xffffc000U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                 ^ (0xffffc000U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
    vlTOPp->sum = ((0x7fffU & (IData)(vlTOPp->sum)) 
                   | (0x8000U & ((0xffff8000U & (IData)(vlTOPp->carry_lookahead_adder_16bit__DOT__p)) 
                                 ^ (0xffff8000U & vlTOPp->carry_lookahead_adder_16bit__DOT__c))));
}

void Vcarry_lookahead_adder_16bit::_eval(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_eval\n"); );
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Vcarry_lookahead_adder_16bit::_change_request(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_change_request\n"); );
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcarry_lookahead_adder_16bit::_change_request_1(Vcarry_lookahead_adder_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_change_request_1\n"); );
    Vcarry_lookahead_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->carry_lookahead_adder_16bit__DOT__c ^ vlTOPp->__Vchglast__TOP__carry_lookahead_adder_16bit__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlTOPp->carry_lookahead_adder_16bit__DOT__c ^ vlTOPp->__Vchglast__TOP__carry_lookahead_adder_16bit__DOT__c))) VL_DBG_MSGF("        CHANGE: /home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/cla_16.v:8: carry_lookahead_adder_16bit.c\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__carry_lookahead_adder_16bit__DOT__c 
        = vlTOPp->carry_lookahead_adder_16bit__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void Vcarry_lookahead_adder_16bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcarry_lookahead_adder_16bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
