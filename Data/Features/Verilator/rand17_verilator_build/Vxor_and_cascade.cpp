// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor_and_cascade.h for the primary calling header

#include "Vxor_and_cascade.h"
#include "Vxor_and_cascade__Syms.h"

//==========

void Vxor_and_cascade::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vxor_and_cascade::eval\n"); );
    Vxor_and_cascade__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/rand17.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vxor_and_cascade::_eval_initial_loop(Vxor_and_cascade__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/rand17.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vxor_and_cascade::_combo__TOP__1(Vxor_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_combo__TOP__1\n"); );
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->y = (((IData)(vlTOPp->a) ^ (IData)(vlTOPp->b)) 
                 & (IData)(vlTOPp->c));
}

void Vxor_and_cascade::_eval(Vxor_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_eval\n"); );
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vxor_and_cascade::_change_request(Vxor_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_change_request\n"); );
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vxor_and_cascade::_change_request_1(Vxor_and_cascade__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_change_request_1\n"); );
    Vxor_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vxor_and_cascade::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_and_cascade::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((c & 0xfeU))) {
        Verilated::overWidthError("c");}
}
#endif  // VL_DEBUG
