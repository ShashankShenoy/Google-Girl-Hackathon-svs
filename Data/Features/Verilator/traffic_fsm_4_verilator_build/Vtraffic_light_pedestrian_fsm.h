// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTRAFFIC_LIGHT_PEDESTRIAN_FSM_H_
#define _VTRAFFIC_LIGHT_PEDESTRIAN_FSM_H_  // guard

#include "verilated.h"

//==========

class Vtraffic_light_pedestrian_fsm__Syms;
class Vtraffic_light_pedestrian_fsm_VerilatedVcd;


//----------

VL_MODULE(Vtraffic_light_pedestrian_fsm) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(pedestrian_request,0,0);
    VL_OUT8(traffic_light,2,0);
    VL_OUT8(pedestrian_light,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ traffic_light_pedestrian_fsm__DOT__current_state;
    CData/*1:0*/ traffic_light_pedestrian_fsm__DOT__next_state;
    CData/*4:0*/ traffic_light_pedestrian_fsm__DOT__timer;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vtableidx2;
    CData/*1:0*/ __Vtableidx3;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*1:0*/ __Vtablechg1[256];
    CData/*0:0*/ __Vm_traceActivity[1];
    static CData/*1:0*/ __Vtable1_traffic_light_pedestrian_fsm__DOT__current_state[256];
    static CData/*4:0*/ __Vtable1_traffic_light_pedestrian_fsm__DOT__timer[256];
    static CData/*1:0*/ __Vtable2_traffic_light_pedestrian_fsm__DOT__next_state[256];
    static CData/*2:0*/ __Vtable3_traffic_light[4];
    static CData/*0:0*/ __Vtable3_pedestrian_light[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtraffic_light_pedestrian_fsm__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtraffic_light_pedestrian_fsm);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtraffic_light_pedestrian_fsm(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtraffic_light_pedestrian_fsm();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtraffic_light_pedestrian_fsm__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
