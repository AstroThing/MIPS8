module InstructionMemory(
    input [7:0] address,
    output reg [15:0] data
);

    always @ (address)
    begin
        case (address)
            8'h00: data = 16'h4800;
            8'h01: data = 16'h4A0C;
            8'h02: data = 16'h4C06;
            8'h03: data = 16'h4E00;
            8'h04: data = 16'h6400;
            8'h05: data = 16'h6848;
            8'h06: data = 16'h0E80;
            8'h07: data = 16'h5C02;
            8'h08: data = 16'h8820;
            8'h09: data = 16'h0000;
            default: data = 16'h0000;
        endcase
    end
endmodule