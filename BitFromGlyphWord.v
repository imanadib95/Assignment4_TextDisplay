`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:08:54 09/16/2016 
// Design Name: 
// Module Name:    BitFromGlyphWord 
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
module BitFromGlyphWord(
    input [15:0] GlyphWord,
    input LineCountLSB,
    input [2:0] PixelCount,
    output reg PixelOnOff
    );
	 wire [7:0] GlyphHalfWord;
//assign PixelOnOff = GlyphWord[({LineCountLSB,PixelCount})];// Extract nth bit from GlyphWord
																				 // and horz position in the glyph.
																				 
	// where n is dictated by the verticle
	assign GlyphHalfWord = LineCountLSB? GlyphWord[7:0]:GlyphWord[15:8];	
	assign PixleOnOff = GlyphHalfWord[PixelCount];
	
endmodule
