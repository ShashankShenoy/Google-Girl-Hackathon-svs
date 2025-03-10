// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplier_8bit.h for the primary calling header

#include "VMultiplier_8bit.h"
#include "VMultiplier_8bit__Syms.h"

//==========

void VMultiplier_8bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiplier_8bit::eval\n"); );
    VMultiplier_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/multiplier_4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMultiplier_8bit::_eval_initial_loop(VMultiplier_8bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/multiplier_4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VMultiplier_8bit::_combo__TOP__1(VMultiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_combo__TOP__1\n"); );
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfffeU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (1U & ((IData)(vlTOPp->A) 
                                                & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfffdU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (2U & (((IData)(vlTOPp->A) 
                                                 << 1U) 
                                                & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfffbU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (4U & (((IData)(vlTOPp->A) 
                                                 << 2U) 
                                                & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfff7U & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (8U & (((IData)(vlTOPp->A) 
                                                 << 3U) 
                                                & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xffefU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x10U & (
                                                   ((IData)(vlTOPp->A) 
                                                    << 4U) 
                                                   & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xffdfU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x20U & (
                                                   ((IData)(vlTOPp->A) 
                                                    << 5U) 
                                                   & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xffbfU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x40U & (
                                                   ((IData)(vlTOPp->A) 
                                                    << 6U) 
                                                   & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xff7fU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x80U & (
                                                   ((IData)(vlTOPp->A) 
                                                    << 7U) 
                                                   & (IData)(vlTOPp->B))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfeffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x100U & 
                                          (((IData)(vlTOPp->A) 
                                            << 7U) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfdffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x200U & 
                                          (((IData)(vlTOPp->A) 
                                            & (IData)(vlTOPp->B)) 
                                           << 8U)));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xfbffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x400U & 
                                          (((IData)(vlTOPp->A) 
                                            << 9U) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xf7ffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x800U & 
                                          (((IData)(vlTOPp->A) 
                                            << 0xaU) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xefffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x1000U & 
                                          (((IData)(vlTOPp->A) 
                                            << 0xbU) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xdfffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x2000U & 
                                          (((IData)(vlTOPp->A) 
                                            << 0xcU) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0xbfffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x4000U & 
                                          (((IData)(vlTOPp->A) 
                                            << 0xdU) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Multiplier_8bit__DOT__P = ((0x7fffU & (IData)(vlTOPp->Multiplier_8bit__DOT__P)) 
                                       | (0x8000U & 
                                          (((IData)(vlTOPp->A) 
                                            << 0xeU) 
                                           & ((IData)(vlTOPp->B) 
                                              << 8U))));
    vlTOPp->Product = vlTOPp->Multiplier_8bit__DOT__P;
}

void VMultiplier_8bit::_eval(VMultiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_eval\n"); );
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VMultiplier_8bit::_change_request(VMultiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_change_request\n"); );
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VMultiplier_8bit::_change_request_1(VMultiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_change_request_1\n"); );
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMultiplier_8bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier_8bit::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
