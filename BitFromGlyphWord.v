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

	assign GlyphHalfWord = LineCountLSB? GlyphWord[7:0]:GlyphWord[15:8];																		 // where n is dictated by the verticle




	//assign PixelOnOff = GlyphHalfWord[PixelCount+:3];


	always @(*)
		case (PixelCount)
		0: PixelOnOff = GlyphHalfWord[0];
		1: PixelOnOff = GlyphHalfWord[1];
		2: PixelOnOff = GlyphHalfWord[2];
		3: PixelOnOff = GlyphHalfWord[3];
		4: PixelOnOff = GlyphHalfWord[4];
		5: PixelOnOff = GlyphHalfWord[5];
		6: PixelOnOff = GlyphHalfWord[6];
		7: PixelOnOff = GlyphHalfWord[7];
		endcase
endmodule
