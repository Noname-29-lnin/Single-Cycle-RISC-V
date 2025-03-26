// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlsu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlsu::Vlsu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlsu__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlsu::Vlsu(const char* _vcname__)
    : Vlsu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlsu::~Vlsu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlsu___024root___eval_debug_assertions(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG
void Vlsu___024root___eval_static(Vlsu___024root* vlSelf);
void Vlsu___024root___eval_initial(Vlsu___024root* vlSelf);
void Vlsu___024root___eval_settle(Vlsu___024root* vlSelf);
void Vlsu___024root___eval(Vlsu___024root* vlSelf);

void Vlsu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlsu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlsu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlsu___024root___eval_static(&(vlSymsp->TOP));
        Vlsu___024root___eval_initial(&(vlSymsp->TOP));
        Vlsu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlsu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vlsu::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vlsu::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vlsu::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vlsu::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vlsu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlsu___024root___eval_final(Vlsu___024root* vlSelf);

VL_ATTR_COLD void Vlsu::final() {
    Vlsu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlsu::hierName() const { return vlSymsp->name(); }
const char* Vlsu::modelName() const { return "Vlsu"; }
unsigned Vlsu::threads() const { return 1; }
void Vlsu::prepareClone() const { contextp()->prepareClone(); }
void Vlsu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlsu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlsu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vlsu___024root__trace_init_top(Vlsu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlsu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsu___024root*>(voidSelf);
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vlsu___024root__trace_decl_types(tracep);
    Vlsu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlsu___024root__trace_register(Vlsu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlsu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlsu::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlsu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
