`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:23:54 03/06/2016 
// Design Name: 
// Module Name:    sevenInputCircuit 
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
module sevenInputCircuit(
    input A,
    input B,
    input C,
    input D,
    input E,
    input F,
    input G,
    output X,
    output Y,
    output Z
    );
	 
	wire	w1,w2,w3,w4,w5,w6,w7,w8,w9;

	or	G1(Z,A,B);
	nor	G2(w1,C,Z);
	and	G3(w2,w1,D);
	not	G4(w3,E);
	and	G5(w4,w2,w3);
	and	G6(w5,F,w4);
	and	G7(X,G,w5);
	and	G8(w6,w2,E);
	not	G9(w7,F);
	and	G10(w8,w7,w6);
	not	G11(w9,G);
	and	G12(Y,w9,w8);
	

endmodule

