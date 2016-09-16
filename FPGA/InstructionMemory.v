module InstructionMemory(
    input [7:0] address,
    output reg [15:0] data
);

    always @ (address)
    begin
        case (address)
            8'h00: data = 16'h4A0A;
            8'h01: data = 16'h4E02;
            8'h02: data = 16'h4800;
            8'h03: data = 16'h6200;
            8'h04: data = 16'h68A8;
            8'h05: data = 16'h4802;
            8'h06: data = 16'h6200;
            8'h07: data = 16'h68A8;
            8'h08: data = 16'h4800;
            8'h09: data = 16'h4C00;
            8'h0A: data = 16'h4200;
            8'h0B: data = 16'h6200;
            8'h0C: data = 16'h7090;
            8'h0D: data = 16'h3700;
            8'h0E: data = 16'h4800;
            8'h0F: data = 16'h3A00;
            8'h10: data = 16'h5A02;
            8'h11: data = 16'h8810;
            8'h12: data = 16'h0D80;
            8'h13: data = 16'h5A02;
            8'h14: data = 16'h8858;
            8'h15: data = 16'hf800;
            default: data = 16'h0000;
        endcase
    end
endmodule