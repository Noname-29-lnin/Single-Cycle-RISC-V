module brc(
    input logic         i_br_un, // 0 sign, 1 unsign
    input logic [31:0]  i_rs1_data,
    input logic [31:0]  i_rs2_data,

    output logic        o_brc_less,
    output logic        o_brc_equal
);

logic [32:0] sub;
assign sub = {i_rs1_data[31], i_rs1_data} + ~{i_rs2_data[31], i_rs2_data} + 32'b1;

always_comb begin
    assign o_brc_equal = ~(|(i_rs1_data ^ i_rs2_data));
    if(i_br_un) begin // unsign
        if(~(i_rs1_data[31] ^ i_rs2_data[31])) o_brc_less = sub[32];
        // if(i_rs1_data[31] == i_rs2_data[31]) o_brc_less = sub[32];
        else o_brc_less = i_rs1_data[31];
    end else begin // sign
        o_brc_less = sub[32];
    end
end

endmodule
