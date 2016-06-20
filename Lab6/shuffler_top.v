`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:02:35 03/14/2016 
// Design Name: 
// Module Name:    shuffler_top 
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
module shuffler_top(
		input [3:0] sw,
		output [6:0] a_to_g_t,
		output dp,
		output [3:0] an
    );
	 
wire [3:0] bcd_t;
assign dp=1;
assign an=4'b1110;
lab6module m1(.sw_t(sw), .bcd(bcd_t));
hex7seg m2(.x(bcd_t), .a_to_g(a_to_g_t));

endmodule
