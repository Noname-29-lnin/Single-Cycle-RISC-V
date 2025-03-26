module tb_regfile;

    // Tín hiệu điều khiển và dữ liệu
    logic         clk;
    logic         rst_n;
    logic         rd_wren;
    logic [4:0]   rs1_addr;
    logic [4:0]   rs2_addr;
    logic [4:0]   rd_addr;
    logic [31:0]  rd_data;
    logic [31:0]  rs1_data;
    logic [31:0]  rs2_data;

    // Khởi tạo module regfile
    regfile uut (
        .i_clk(clk),
        .i_rst_n(rst_n),
        .i_rd_wren(rd_wren),
        .i_rs1_addr(rs1_addr),
        .i_rs2_addr(rs2_addr),
        .i_rd_addr(rd_addr),
        .i_rd_data(rd_data),
        .o_rs1_data(rs1_data),
        .o_rs2_data(rs2_data)
    );

    // Tạo xung clock
    always #5 clk = ~clk;

    // Khởi tạo tín hiệu
    initial begin
        clk = 0;
        rst_n = 0;
        rd_wren = 0;
        rs1_addr = 0;
        rs2_addr = 0;
        rd_addr = 0;
        rd_data = 0;

        // Reset
        #10;
        rst_n = 1;
        #10;

        // Kiểm tra ghi dữ liệu vào thanh ghi
        rd_wren = 1;
        rd_addr = 5'b00001;  // Ghi vào thanh ghi 1
        rd_data = 32'hDEADBEEF;
        #10;

        rd_addr = 5'b00010;  // Ghi vào thanh ghi 2
        rd_data = 32'hCAFEBABE;
        #10;

        rd_addr = 5'b00000;  // Không ghi vào thanh ghi 0
        rd_data = 32'hBADCAFE;
        #10;

        // Kiểm tra đọc dữ liệu từ thanh ghi
        rd_wren = 0;
        rs1_addr = 5'b00001;  // Đọc thanh ghi 1
        rs2_addr = 5'b00010;  // Đọc thanh ghi 2
        #10;

        rs1_addr = 5'b00000;  // Đọc thanh ghi 0 (luôn bằng 0)
        rs2_addr = 5'b11111;  // Đọc thanh ghi chưa ghi (phải bằng 0)
        #10;

        // Kết thúc mô phỏng
        $finish;
    end

    // Theo dõi tín hiệu
    initial begin
        $monitor("Time=%0t | rst_n=%b | rd_wren=%b | rd_addr=%b | rd_data=%h | rs1_addr=%b | rs1_data=%h | rs2_addr=%b | rs2_data=%h",
                 $time, rst_n, rd_wren, rd_addr, rd_data, rs1_addr, rs1_data, rs2_addr, rs2_data);
    end

endmodule
