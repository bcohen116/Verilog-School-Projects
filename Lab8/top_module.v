`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:49 04/05/2016 
// Design Name: 
// Module Name:    top_module 
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
module top_module(
    input clock,
	 input dI,
    input dS,
	 input clear,
	 output [6:0] seg,
    output Zout,
	 output wire clk1,
	 output [3:0] an
    );
	 wire dInew, dSnew;
	 wire clk190;
	 
	 wire [7:0] bin;
	 wire [15:0] bcd;
	

	
	 Clock_down_converter m2(clock,clear,clk1,clk190);
	 Debounce I_dbc(clk190,clear,dI,dInew);
	 Debounce S_dbc(clk190,clear,dS,dSnew);
	 oneZoneDtr m1(clk1,clear,dI,dS,Zout);
	 
	//part 2
	shiftR m5(clk1,dI,dS,bin);
	bin2bcd m3(bin,bcd);
	bcd7seg m4(clk190,bcd,seg,an);
	
	
endmodule
