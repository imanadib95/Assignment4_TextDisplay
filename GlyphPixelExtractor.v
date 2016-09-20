`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:41:13 09/16/2016 
// Design Name: 
// Module Name:    ASCIItoGlyphAddress 
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
module ASCIItoGlyphAddress(
    input [7:0] ASCII,
//    input [2:0] PixelCount,
    input [2:1] LineCount,
	 output reg[12:0] GlyphTableAddress
    );
		always @(*)
		GlyphTableAddress = ({3'b000,ASCII,2'b00}+LineCount[2:1]);
	
	
	


endmodule
