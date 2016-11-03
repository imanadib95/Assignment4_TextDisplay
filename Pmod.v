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
module Pmod(
      clk,
    JA,
    an,
    seg, 
	 dir
    //Led
    );

	 // ===========================================================================
	 // 										Port Declarations
	 // ===========================================================================
    input clk;
    input [7:4] JA;
    output [3:0] an;
    output [6:0] seg;
	 output [1:0] dir; // 00 - idle, 01 - right, 10 - left
    //output [1:0] Led;

	 // ===========================================================================
	 // 							  Parameters, Regsiters, and Wires
	 // ===========================================================================
	 wire [3:0] an;
	 wire [6:0] seg;
	 wire [1:0] Led;
	 wire [1:0] DIR; 
	 wire [4:0] EncO;
	 
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
				  .BTN(JA[6]),
				  .EncOut(EncO),
				  .LED(Led),
				  .dir(dir)
	 ); 

 	 DisplayController C2_DisplayController (
				  .clk(clk),
				  .SWT(JA[7]),
				  .DispVal(EncO),
				  .anode(an),
				  .segOut(seg)
	 );
endmodule
