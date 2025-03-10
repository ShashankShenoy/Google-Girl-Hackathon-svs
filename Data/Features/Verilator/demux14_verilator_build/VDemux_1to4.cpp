// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDemux_1to4.h for the primary calling header

#include "VDemux_1to4.h"
#include "VDemux_1to4__Syms.h"

//==========

void VDemux_1to4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDemux_1to4::eval\n"); );
    VDemux_1to4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/demux14.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDemux_1to4::_eval_initial_loop(VDemux_1to4__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/demux14.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDemux_1to4::_combo__TOP__1(VDemux_1to4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to4::_combo__TOP__1\n"); );
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Y0 = ((0U == (IData)(vlTOPp->S)) ? (1U 
                                                & (IData)(vlTOPp->A))
                   : 0U);
    vlTOPp->Y1 = ((1U == (IData)(vlTOPp->S)) ? (1U 
                                                & (IData)(vlTOPp->A))
                   : 0U);
    vlTOPp->Y2 = ((2U == (IData)(vlTOPp->S)) ? (1U 
                                                & (IData)(vlTOPp->A))
                   : 0U);
    vlTOPp->Y3 = ((3U == (IData)(vlTOPp->S)) ? (1U 
                                                & (IData)(vlTOPp->A))
                   : 0U);
}

void VDemux_1to4::_eval(VDemux_1to4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to4::_eval\n"); );
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VDemux_1to4::_change_request(VDemux_1to4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to4::_change_request\n"); );
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDemux_1to4::_change_request_1(VDemux_1to4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to4::_change_request_1\n"); );
    VDemux_1to4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDemux_1to4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemux_1to4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xfeU))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((S & 0xfcU))) {
        Verilated::overWidthError("S");}
}
#endif  // VL_DEBUG
