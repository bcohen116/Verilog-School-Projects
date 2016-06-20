`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:33:16 04/06/2016 
// Design Name: 
// Module Name:    shiftR 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module shiftR(input clk1, input dI, input dS, output reg [7:0] bin);


always @(posedge clk1)
	begin
		if (dS == 1)
			begin
				bin[0] <= dI;
				bin[1] <= bin[0];
				bin[2] <= bin[1];
				bin[3] <= bin[2];
				bin[4] <= bin[3];
				bin[5] <= bin[4];
				bin[6] <= bin[5];
				bin[7] <= bin[6];
			end
		end
endmodule
