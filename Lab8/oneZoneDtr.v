`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:25 04/06/2016 
// Design Name: 
// Module Name:    oneZoneDtr 
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
module oneZoneDtr(
    input clk1,
    input clear,
    input dInew,
	 input dSnew,
    output reg Zout
    );
	 
	reg [1:0] state, next_state;
	parameter S0 = 2'b00, S1 = 2'b01, S2 = 2'b10, S3 = 2'b11;
	always @ (posedge clk1, posedge clear) 
		if (clear == 1)
			state <= S0;
		else
			state <= next_state;
			
	always @ (state,dInew)
		case (state)
		 S0: if (dInew && dSnew) next_state = S1; else if(~dInew && dSnew) next_state = S0; else next_state = S0;
		 S1: if (~dInew && dSnew) next_state = S2; else if(dInew && dSnew) next_state = S1; else next_state = S0;
		 S2: if (dInew && dSnew) next_state = S3; else if(~dInew && dSnew) next_state = S0; else next_state = S0;
		 S3: if (dInew && dSnew) next_state = S1; else if(~dInew && dSnew) next_state = S0; else next_state = S0;
		endcase

			always @ (state, dInew)
			 case(state)
			 // $monitor("state: %b, output: %b", state, Zout);
			  S0,S1,S2: Zout = 0;
			  S3: Zout = 1;
			 endcase
		

endmodule
