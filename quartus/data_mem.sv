module data_mem(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_lsu_wren,
    input logic [2:0]   i_func3,
    input logic [31:0]  i_lsu_addr,
    input logic [31:0]  i_st_data,
    
    output logic [31:0] o_dmem_data
);

// == Func3, opcode

localparam [2:0] SB = 3'b000,
                 SH = 3'b001,
                 SW = 3'b010;
localparam [2:0] LB = 3'b000,
                 LH = 3'b001,
                 LW = 3'b010,
                 LBU = 3'b100,
                 LHU = 3'b101;
// == veriable
logic [15:0] temp_addr;
assign temp_addr = i_lsu_addr[15:0];
logic [7:0] temp_data [3:0];

localparam D_MEM_SIZE = 1000;
logic [7:0] dmem [D_MEM_SIZE - 1:0];
longint i = 0;

localparam [15:0] dmem_addr = 16'h2000,
                  end_addr  = 16'h3FFF;

always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_store_data
    if(~(i_rst_n)) begin
        for(i = 0; i < D_MEM_SIZE; i++) begin
            dmem[i] <= 8'h0;
        end
    end else begin
        if((i_lsu_wren == 1'b1) && ((i_lsu_addr[15:12] == 4'h2) | (i_lsu_addr[15:12] == 4'h3))) begin
            case (i_func3[1:0])
                2'b00: begin // Byte
                    if(temp_addr <= end_addr) dmem[temp_addr] <= i_st_data[7:0];
                end
                2'b01: begin // Half
                    if(temp_addr <= end_addr) dmem[temp_addr] <= i_st_data[7:0];
                    if(temp_addr + 1 <= end_addr) dmem[temp_addr + 1] <= i_st_data[15:8];
                end
                2'b10: begin // Word
                    if(temp_addr <= end_addr) dmem[temp_addr] <= i_st_data[7:0];
                    if(temp_addr + 1 <= end_addr) dmem[temp_addr + 1] <= i_st_data[15:8];
                    if(temp_addr + 2 <= end_addr) dmem[temp_addr + 2] <= i_st_data[23:16];
                    if(temp_addr + 3 <= end_addr) dmem[temp_addr + 3] <= i_st_data[31:24];
                end
            endcase
        end
    end
end

always_comb begin : proc_check_out_data
    if(temp_addr <= end_addr) temp_data[0] = dmem[temp_addr];
    else temp_data[0] = 8'h0;

    if(temp_addr + 1 <= end_addr) temp_data[1] = dmem[temp_addr + 1];
    else temp_data[1] = 8'h0;

    if(temp_addr + 2 <= end_addr) temp_data[2] = dmem[temp_addr + 2];
    else temp_data[2] = 8'h0;

    if(temp_addr + 3 <= end_addr) temp_data[3] = dmem[temp_addr + 3];
    else temp_data[3] = 8'h0;
end

always_comb begin : proc_load_data
    case(i_func3)
        LB: o_dmem_data = {{24{temp_data[0][7]}}, temp_data[0]};
        LH: o_dmem_data = {{16{temp_data[1][7]}}, temp_data[1], temp_data[0]};
        LW: o_dmem_data = {temp_data[3], temp_data[2], temp_data[1], temp_data[0]};
        LBU: o_dmem_data = {24'h0, temp_data[0]};
        LHU: o_dmem_data = {16'h0, temp_data[1], temp_data[0]};
        default: o_dmem_data = 32'hz;
    endcase
end
endmodule
