// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsr_latch_nand.h for the primary calling header

#include "Vsr_latch_nand.h"
#include "Vsr_latch_nand__Syms.h"

//==========

void Vsr_latch_nand::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsr_latch_nand::eval\n"); );
    Vsr_latch_nand__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/rand57.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsr_latch_nand::_eval_initial_loop(Vsr_latch_nand__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/rand57.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsr_latch_nand::_combo__TOP__1(Vsr_latch_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_combo__TOP__1\n"); );
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->q = (1U & (~ ((IData)(vlTOPp->s) & (IData)(vlTOPp->q_bar))));
    vlTOPp->q_bar = (1U & (~ ((IData)(vlTOPp->r) & (IData)(vlTOPp->q))));
}

void Vsr_latch_nand::_eval(Vsr_latch_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_eval\n"); );
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vsr_latch_nand::_change_request(Vsr_latch_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_change_request\n"); );
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsr_latch_nand::_change_request_1(Vsr_latch_nand__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_change_request_1\n"); );
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->q_bar ^ vlTOPp->__Vchglast__TOP__q_bar));
    VL_DEBUG_IF( if(__req && ((vlTOPp->q_bar ^ vlTOPp->__Vchglast__TOP__q_bar))) VL_DBG_MSGF("        CHANGE: /home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/rand57.v:5: q_bar\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__q_bar = vlTOPp->q_bar;
    return __req;
}

#ifdef VL_DEBUG
void Vsr_latch_nand::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_latch_nand::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((s & 0xfeU))) {
        Verilated::overWidthError("s");}
    if (VL_UNLIKELY((r & 0xfeU))) {
        Verilated::overWidthError("r");}
}
#endif  // VL_DEBUG
