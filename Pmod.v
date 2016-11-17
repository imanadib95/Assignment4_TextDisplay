`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:32 11/03/2016 
// Design Name: 
// Module Name:    Pmod 
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
module PmodEnc(
    clk,
    JA,
    EncO
    );

	 // ===========================================================================
	 // 										Port Declarations
	 // ===========================================================================
    input clk;
    input [7:4] JA;
    output [7:0]EncO;

	 // ===========================================================================
	 // 							  Parameters, Regsiters, and Wires
	 // ===========================================================================
	 wire [3:0] an;
	 wire [6:0] seg;
	 wire [1:0] Led;
	 
	 wire [7:0] EncO;
	 
	 parameter max = 8'd120;
	 parameter factor = 2'd0;
	 
	 // ===========================================================================
	 // 										Implementation
	 // ===========================================================================
 	 Debouncer C0_Debouncer (
				  .clk(clk),
				  .Ain(JA[4]),
				  .Bin(JA[5]),
				  .Aout(AO),
				  .Bout(BO)
	 );
	 
 	Encoder C1_Encoder (
				  .clk(clk),
				  .A(AO),
				  .B(BO),
				  .max(Max),
				  .factor(factor),
				  .BTN(JA[6]),
				  .EncOut(EncO),
				.LED(Led)
	 ); 

 	 EncDisplayController C2_DisplayController (
				  .clk(clk),
				  .SWT(JA[7]),
				  .DispVal(EncO),
				  .anode(an),
				  .segOut(seg)
	 );
endmodule