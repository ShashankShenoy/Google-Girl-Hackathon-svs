// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFull_Subtractor.h for the primary calling header

#include "VFull_Subtractor.h"
#include "VFull_Subtractor__Syms.h"

//==========

void VFull_Subtractor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFull_Subtractor::eval\n"); );
    VFull_Subtractor__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/full_subtractor.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFull_Subtractor::_eval_initial_loop(VFull_Subtractor__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/full_subtractor.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFull_Subtractor::_combo__TOP__1(VFull_Subtractor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_combo__TOP__1\n"); );
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Diff = (((IData)(vlTOPp->A) ^ (IData)(vlTOPp->B)) 
                    ^ (IData)(vlTOPp->Bin));
    vlTOPp->Borrow = (((~ (IData)(vlTOPp->A)) & (IData)(vlTOPp->B)) 
                      | (((~ (IData)(vlTOPp->A)) | (IData)(vlTOPp->B)) 
                         & (IData)(vlTOPp->Bin)));
}

void VFull_Subtractor::_eval(VFull_Subtractor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_eval\n"); );
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VFull_Subtractor::_change_request(VFull_Subtractor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_change_request\n"); );
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFull_Subtractor::_change_request_1(VFull_Subtractor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_change_request_1\n"); );
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFull_Subtractor::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xfeU))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((B & 0xfeU))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((Bin & 0xfeU))) {
        Verilated::overWidthError("Bin");}
}
#endif  // VL_DEBUG
