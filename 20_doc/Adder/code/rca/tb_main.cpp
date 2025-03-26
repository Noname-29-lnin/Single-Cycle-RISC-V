#include <iostream>
#include <verilated.h>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

#include "Vrca.h"

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    std::cout << "=== Test bench for Ripple Carry Adder (RCA) ===" << std::endl;

    // Create an instance of the RCA module
    Vrca* dut = new Vrca;

    // Initialize random seed
    srand(static_cast<unsigned>(time(0)));

    // Variables to track results
    int pass_count = 0;
    int fail_count = 0;

    // Run 100 test cases
    for (int i = 0; i < 100; ++i) {
        // Generate random inputs
        int a = rand() % 256;  // Random 8-bit value (0 to 255)
        int b = rand() % 256;  // Random 8-bit value (0 to 255)
        int expected_sum = a + b;  // Expected result

        // Apply inputs to the DUT
        dut->i_data_a = a;
        dut->i_data_b = b;

        // Evaluate the DUT
        dut->eval();

        // Capture output
        int actual_sum = dut->o_data;

        // Check for correctness
        if (actual_sum == expected_sum) {
            ++pass_count;
            std::cout << "[PASS] Test case " << i + 1 << ": A = " << a << ", B = " << b
                      << ", Expected = " << expected_sum << ", Actual = " << actual_sum << std::endl;
        } else {
            ++fail_count;
            std::cout << "[FAIL] Test case " << i + 1 << ": A = " << a << ", B = " << b
                      << ", Expected = " << expected_sum << ", Actual = " << actual_sum << std::endl;
        }
    }

    // Display summary
    std::cout << "\n=== Test Summary ===" << std::endl;
    std::cout << "Total Test Cases: 100" << std::endl;
    std::cout << "PASS: " << pass_count << std::endl;
    std::cout << "FAIL: " << fail_count << std::endl;

    // Cleanup
    delete dut;
    return 0;
}
