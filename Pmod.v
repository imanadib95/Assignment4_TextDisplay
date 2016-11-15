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
    Dir
    );

	 // ===========================================================================
	 // 										Port Declarations
	 // ===========================================================================
    input clk;
    input [7:4] JA;
    output [1:0] Dir;

	 // ===========================================================================
	 // 							  Parameters, Regsiters, and Wires
	 // ===========================================================================
	 wire [3:0] an;
	 wire [6:0] seg;
	 wire [1:0] Dir;
	 wire [4:0] EncO;
	 
	 // ===========================================================================
	 // 										Implementation
	 // ===========================================================================
 	 Debouncer _Debouncer (
				  .clk(clk),
				  .Ain(JA[4]),
				  .Bin(JA[5]),
				  .Aout(AO),
				  .Bout(BO)
	 );
	 
 	Encoder _Encoder (
				  .clk(clk),
				  .A(AO),
				  .B(BO),
				  .BTN(JA[6]),
				  .LED(Dir)
	 ); 

endmodule
