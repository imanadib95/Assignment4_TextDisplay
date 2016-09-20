`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:42:09 09/16/2016 
// Design Name: 
// Module Name:    ASCIItoPixelOnOff 
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
module ASCIItoPixelOnOff(
    input clk,
    input [7:0] ASCII,
	 input [2:0] PixelCount,
	 input [2:0] LineCount,
    output PixelOnOff
    );
	 wire [15:0] GlyphWord,GlyphWord2;
	 
	 ASCIItoGlyphWord _ASCIItoGlyphWord(
	 clk,
    ASCII,
//    PixelCount,
    LineCount[2:1],
    GlyphWord
    ); 
	  
	 BitFromGlyphWord _BitFromGlyphWord(
    GlyphWord,
    LineCount[0],
    PixelCount,
    PixelOnOff
    );


endmodule
