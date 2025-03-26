module tb_half_adder;

    // Inputs
    logic A, B;

    // Outputs
    logic Sum, Carry;

    // Instantiate the half adder module
    half_adder_with_xor_and uut(
        .i_data_a(A),
        .i_data_b(B),
        .o_data(Sum),
        .o_carry(Carry)
    );

    // Test stimulus
    initial begin
        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;
        $finish;
    end

    initial begin
        $display("At time %t, A = %b, B = %b, S = %b, C = %b", $time, A, B, Sum, Carry);
    end

endmodule
