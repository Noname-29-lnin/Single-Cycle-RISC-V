module tb_cla;

    parameter WIDTH = 32;

    logic [WIDTH-1:0] A, B;
    logic Cin;
    logic [WIDTH-1:0] Sum;
    logic Cout;

    cla #(WIDTH) dut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

    initial begin
        // Test 1
        A = 4'b0011; B = 4'b0101; Cin = 1'b0;
        #10;
        $display("A=%b, B=%b, Cin=%b => Sum=%b, Cout=%b", A, B, Cin, Sum, Cout);

        // Test 2
        A = 4'b1111; B = 4'b1111; Cin = 1'b1;
        #10;
        $display("A=%b, B=%b, Cin=%b => Sum=%b, Cout=%b", A, B, Cin, Sum, Cout);

        // Test 3
        A = 4'b1010; B = 4'b0111; Cin = 1'b0;
        #10;
        $display("A=%b, B=%b, Cin=%b => Sum=%b, Cout=%b", A, B, Cin, Sum, Cout);
        
        $stop;
    end

endmodule
