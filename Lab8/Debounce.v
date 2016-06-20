`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:02 04/05/2016 
// Design Name: 
// Module Name:    Debounce 
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
module Debounce(
	 inout clock, // Delays pushbutton by three 4-ms clock 
    input clear, // Resets the debounce action to start 
    input dbin, // from un-debounced push button
    output dbout // debounced output from pushbutton
    );
	 
 reg delay1;
 reg delay2;
 reg delay3;
 always @ (posedge clock, posedge clear) begin
	 if (clear) begin
		 delay1 <= 1'b0;
		 delay2 <= 1'b0;
		 delay3 <= 1'b0;
	 end
	 else begin
		 delay1 <= dbin;
		 delay2 <= delay1;
		 delay3 <= delay2;
	 end
 end
 assign dbout = delay1 & delay2 & delay3;

endmodule
