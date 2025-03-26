#include <iostream>
#include <verilated.h>
#include "Vfull_adder_with_half_adder.h" // Verilator-generated header file

int main(int argc, char **argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);

    // Create an instance of the module
    Vfull_adder_with_half_adder* dut = new Vfull_adder_with_half_adder;

    // Input test vectors
    int test_cases[8][3] = {
        {0, 0, 0}, // {i_data_a, i_data_b, i_carry}
        {0, 0, 1},
        {0, 1, 0},
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 1},
    };

    // Print table header
    std::cout << "A B Cin | Sum Cou" << std::endl;
    std::cout << "--------|--------" << std::endl;

    // Run test cases
    for (int i = 0; i < 8; ++i) {
        // Apply inputs
        dut->i_data_a = test_cases[i][0];
        dut->i_data_b = test_cases[i][1];
        dut->i_carry  = test_cases[i][2];

        // Evaluate the circuit
        dut->eval();

        // Display inputs and outputs
        std::cout << test_cases[i][0] << " "
                  << test_cases[i][1] << "   "
                  << test_cases[i][2] << "  |   "
                  << (int)dut->o_data << "   "
                  << (int)dut->o_carry << std::endl;
    }

    // Cleanup
    delete dut;

    return 0;
}
