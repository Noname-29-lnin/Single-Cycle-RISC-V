module input_buf(
    input logic [2:0]   i_func3,
    input logic [31:0]  i_lsu_addr,
    input logic [31:0]  i_io_sw,
    input logic [3:0]   i_io_btn,

    output logic [31:0] o_input_buf_data
);

// == Addr
localparam I_BUF_SIZE = 32; // 00 -> 1F
logic [7:0] in_buf [I_BUF_SIZE - 1:0];

// == Func3
localparam [2:0] SB = 3'b000,
                 SH = 3'b001,
                 SW = 3'b010;

// == Memory mapping
localparam [7:0]  sw_addr  = 8'h00,
                  btn_addr = 8'h10,
                  end_addr = 8'h1F;

assign in_buf[sw_addr]     = i_io_sw[7:0];
assign in_buf[sw_addr + 1] = i_io_sw[15:8];
assign in_buf[sw_addr + 2] = i_io_sw[23:16];
assign in_buf[sw_addr + 3] = i_io_sw[31:24];
assign in_buf[btn_addr]    = {4'h0, i_io_btn};

// == Veriable
logic [7:0] temp_data [3:0];
logic [7:0] temp_addr;
assign temp_addr = i_lsu_addr[7:0] & 8'hFE;

always_comb begin
    if(temp_addr <= end_addr) temp_data[0] = in_buf[temp_addr];
    else temp_data[0] = 8'h00;

    if((temp_addr + 1) <= end_addr) temp_data[1] = in_buf[temp_addr + 1];
    else temp_data[1] = 8'h00;

    if((temp_addr + 2) <= end_addr) temp_data[2] = in_buf[temp_addr + 2];
    else temp_data[2] = 8'h00;

    if((temp_addr + 3) <= end_addr) temp_data[3] = in_buf[temp_addr + 3];
    else temp_data[3] = 8'h00;
end

// == out data
always_comb begin
    case (i_func3)
        SB: o_input_buf_data = {24'b0, temp_data[0]};
        SH: o_input_buf_data = {16'b0, temp_data[1], temp_data[0]};
        SW: o_input_buf_data = {temp_data [3], temp_data[2], temp_data[1], temp_data[0]};
        default: o_input_buf_data = 32'hz;
    endcase
end

endmodule
