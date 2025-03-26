#include "Vhalf_adder_with_nand.h"  // Tệp header được tạo bởi Verilator
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vhalf_adder_with_nand* uut = new Vhalf_adder_with_nand;

    // Test case
    printf("A B | Sum Carry\n");
    printf("-------------------\n");

    // case 1: A = 0, B = 0
    uut->i_data_a = 0; 
    uut->i_data_b = 0;
    uut->eval();
    printf("%d %d |  %d    %d\n", uut->i_data_a, uut->i_data_b, uut->o_data, uut->o_carry);

    // case 2: A = 0, B = 1
    uut->i_data_a = 0; 
    uut->i_data_b = 1;
    uut->eval();
    printf("%d %d |  %d    %d\n", uut->i_data_a, uut->i_data_b, uut->o_data, uut->o_carry);

    // case 3: A = 1, B = 0
    uut->i_data_a = 1; 
    uut->i_data_b = 0;
    uut->eval();
    printf("%d %d |  %d    %d\n", uut->i_data_a, uut->i_data_b, uut->o_data, uut->o_carry);

    // case 4: A = 1, B = 1
    uut->i_data_a = 1; 
    uut->i_data_b = 1;
    uut->eval();
    printf("%d %d |  %d    %d\n", uut->i_data_a, uut->i_data_b, uut->o_data, uut->o_carry);

    // deleted object
    delete uut;
    return 0;
}
