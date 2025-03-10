// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCARRY_LOOKAHEAD_ADDER_4BIT_H_
#define _VCARRY_LOOKAHEAD_ADDER_4BIT_H_  // guard

#include "verilated.h"

//==========

class VCarry_Lookahead_Adder_4bit__Syms;
class VCarry_Lookahead_Adder_4bit_VerilatedVcd;


//----------

VL_MODULE(VCarry_Lookahead_Adder_4bit) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(Cin,0,0);
    VL_OUT8(Sum,3,0);
    VL_OUT8(Cout,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ Carry_Lookahead_Adder_4bit__DOT__P;
    CData/*3:0*/ Carry_Lookahead_Adder_4bit__DOT__G;
    CData/*3:0*/ Carry_Lookahead_Adder_4bit__DOT__C;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vchglast__TOP__Carry_Lookahead_Adder_4bit__DOT__C;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCarry_Lookahead_Adder_4bit__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCarry_Lookahead_Adder_4bit);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCarry_Lookahead_Adder_4bit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCarry_Lookahead_Adder_4bit();
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
    static void _eval_initial_loop(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCarry_Lookahead_Adder_4bit__Syms* symsp, bool first);
  private:
    static QData _change_request(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
