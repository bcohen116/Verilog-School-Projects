`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:59 04/05/2016 
// Design Name: 
// Module Name:    bin2bcd 
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
`timescale 1ns / 1ps
// Binary to BCD converter
module bin2bcd(bin, bcd);
	input [7:0] bin;
	output reg [15:0] bcd;
	integer i = 7;
	
	// Loop 7 times and then perform the final shift
	always @ (bin) begin
		bcd = 0;
		for (i = 7; i > 0; i = i - 1) begin
			bcd = bcd << 1;
			bcd[0] = bin[i];
			if (bcd[7:4] >= 5) // Add 3 to the tens column
			bcd = bcd + 48;
			if (bcd[3:0] >= 5) // Add 3 to the ones column
			bcd = bcd + 3;
		end
		bcd = bcd << 1;
		bcd[0] = bin[0];
	end


endmodule
