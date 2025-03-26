#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h> // For waveform tracing (optional)
#include "Vrca.h"

using namespace std;

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);

    // Create an instance of the RCA module
    Vrca* dut = new Vrca;

    // Enable tracing (optional, for waveform debugging)
    VerilatedVcdC* trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("rca_trace.vcd");

    // Time simulation variable
    vluint64_t simulation_time = 0; // Initialize time to 0

    // Test variables
    int a = 0b00000000000000000000000000000000; // Initial input A
    int b = 0b00000000000000000000000000000000; // Initial input B
    int expected_sum = 0;                      // Expected sum
    int actual_sum = 0;                        // Actual sum from DUT

    // Time variables for delay measurement
    vluint64_t start_time = 0;
    vluint64_t end_time = 0;

    // Test for propagation delay
    cout << "=== Test Propagation Delay for RCA ===" << endl;

    // Apply initial inputs
    dut->i_data_a = a;
    dut->i_data_b = b;
    dut->eval();
    trace->dump(simulation_time);

    // Change inputs
    a = 0b11111111111111111111111111111111; // New input A
    b = 0b00000000000000000000000000000001; // New input B
    expected_sum = a + b;

    // Record the start time
    start_time = simulation_time;
    dut->i_data_a = a;
    dut->i_data_b = b;

    // Evaluate DUT until output stabilizes
    while (dut->o_data != expected_sum) {
        dut->eval();
        trace->dump(simulation_time);
        simulation_time++; // Increment simulation time manually
    }

    // Record the end time
    end_time = simulation_time;
    actual_sum = dut->o_data;

    // Calculate and display propagation delay
    cout << "Inputs: A = " << a << ", B = " << b << endl;
    cout << "Expected Sum: " << expected_sum << ", Actual Sum: " << actual_sum << endl;
    cout << "Propagation Delay: " << (end_time - start_time) << " time units" << endl;

    // Cleanup
    trace->close();
    delete trace;
    delete dut;

    return 0;
}
