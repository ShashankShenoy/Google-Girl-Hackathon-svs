// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VENCODER_4TO2_PRIORITY_H_
#define _VENCODER_4TO2_PRIORITY_H_  // guard

#include "verilated.h"

//==========

class VEncoder_4to2_priority__Syms;
class VEncoder_4to2_priority_VerilatedVcd;


//----------

VL_MODULE(VEncoder_4to2_priority) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(A,3,0);
    VL_OUT8(Y,1,0);
    VL_OUT8(valid,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vtableidx1;
    CData/*0:0*/ __Vm_traceActivity[1];
    static CData/*1:0*/ __Vtable1_Y[16];
    static CData/*0:0*/ __Vtable1_valid[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VEncoder_4to2_priority__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VEncoder_4to2_priority);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VEncoder_4to2_priority(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VEncoder_4to2_priority();
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
    static void _eval_initial_loop(VEncoder_4to2_priority__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VEncoder_4to2_priority__Syms* symsp, bool first);
  private:
    static QData _change_request(VEncoder_4to2_priority__Syms* __restrict vlSymsp);
    static QData _change_request_1(VEncoder_4to2_priority__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VEncoder_4to2_priority__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VEncoder_4to2_priority__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VEncoder_4to2_priority__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VEncoder_4to2_priority__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
