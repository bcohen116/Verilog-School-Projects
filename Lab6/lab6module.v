`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:14:32 03/10/2016 
// Design Name: 
// Module Name:    lab6module 
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
module lab6module(
    input [3:0] sw_t,
    output [3:0] bcd
    );

assign bcd[3] = (sw_t[3]&&sw_t[2]) || (sw_t[2]&&sw_t[1]&&(!sw_t[0])) || (sw_t[3]&&sw_t[1]&&sw_t[0]) || (sw_t[2]&&sw_t[1]&&(!sw_t[0]));
assign bcd[2] = ((!sw_t[3])&&sw_t[2]&&(!sw_t[1])&&(!sw_t[0])) || (sw_t[3]&&sw_t[2]&&sw_t[1]&&sw_t[0]) || ((!sw_t[3])&&(!sw_t[2])&&sw_t[0]) || ((!sw_t[2])&&sw_t[1]&&(!sw_t[0]));
assign bcd[1] = ((!sw_t[3])&&(!sw_t[1])&&(!sw_t[0])) || (sw_t[3]&&(!sw_t[2])&&(!sw_t[1])) || (sw_t[3]&&(!sw_t[1])&&sw_t[0]) || ((!sw_t[3])&&(!sw_t[2])&&sw_t[1]&&sw_t[0]) || (sw_t[3]&&sw_t[2]&&sw_t[1]&&(!sw_t[0]));
assign bcd[0] = (sw_t[2]&&(!sw_t[0])) || ((!sw_t[3])&&(!sw_t[2])&&(!sw_t[0])) || (sw_t[3]&&(!sw_t[2])&&(!sw_t[1])&&sw_t[0]) || ((!sw_t[3])&&sw_t[2]&&sw_t[1]);


endmodule
