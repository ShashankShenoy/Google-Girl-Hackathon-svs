// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComparator_2bit.h for the primary calling header

#include "VComparator_2bit.h"
#include "VComparator_2bit__Syms.h"

//==========

void VComparator_2bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComparator_2bit::eval\n"); );
    VComparator_2bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/comparator2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VComparator_2bit::_eval_initial_loop(VComparator_2bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/comparator2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VComparator_2bit::_combo__TOP__1(VComparator_2bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_2bit::_combo__TOP__1\n"); );
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->A_eq_B = ((IData)(vlTOPp->A) == (IData)(vlTOPp->B));
    vlTOPp->A_gt_B = (((IData)(vlTOPp->A) != (IData)(vlTOPp->B)) 
                      & ((IData)(vlTOPp->A) > (IData)(vlTOPp->B)));
    vlTOPp->A_lt_B = (((IData)(vlTOPp->A) != (IData)(vlTOPp->B)) 
                      & ((IData)(vlTOPp->A) <= (IData)(vlTOPp->B)));
}

void VComparator_2bit::_eval(VComparator_2bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_2bit::_eval\n"); );
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VComparator_2bit::_change_request(VComparator_2bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_2bit::_change_request\n"); );
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VComparator_2bit::_change_request_1(VComparator_2bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_2bit::_change_request_1\n"); );
    VComparator_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VComparator_2bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComparator_2bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xfcU))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((B & 0xfcU))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
