`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:18:48 10/14/2016 
// Design Name: 
// Module Name:    VGA_Controller 
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
module VGA_Controller(clk, rst, ASCIIColChar,GlyphWord,SubPixelCount,PixelCount,LineCount,TextAreaAddress,ColorOut,Hsync,Vsync
    );
	 input clk, rst;
	 input [15:0] ASCIIColChar;
	 input [15:0] GlyphWord;
	 //Signals for Dispatch
	 output [1:0] SubPixelCount;
	 output [9:0] PixelCount;
	 output [9:0] LineCount;
	 output [15:0] TextAreaAddress;
//	 output [15:0] GlyphAreaAddress;
	 // Signals for Screen
	 output [7:0] ColorOut;
	 output Hsync, Vsync;

	// Intermodule Wires
	wire [9:0] PixelCount, LineCount;
	
	// Intermediate Wires
	wire [7:0] GlyphHalfWord;
	
	// Intermediate Registers
	reg PixelOnOff;
	
	
	
	// Determine address in text area
	assign TextAreaAddress = {LineCount[8:3],PixelCount[9:3]} +16'd512;
//	// Determine address of ASCII Character in glyph table
//	assign GlyphAreaAddress = ({3'b000,ASCIIColChar[7:0],2'b00}+LineCount[2:1]);
	// Extract Proper line from 16'b glyph word
	assign GlyphHalfWord = LineCount[0]? GlyphWord[7:0]:GlyphWord[15:8];	
	// Extract Bit from 8'b Glyph line
	always @(*)
		case (PixelCount[2:0])
		0: PixelOnOff = GlyphHalfWord[7];
		1: PixelOnOff = GlyphHalfWord[0];
		2: PixelOnOff = GlyphHalfWord[1];
		3: PixelOnOff = GlyphHalfWord[2];
		4: PixelOnOff = GlyphHalfWord[3];
		5: PixelOnOff = GlyphHalfWord[4];
		6: PixelOnOff = GlyphHalfWord[5];
		7: PixelOnOff = GlyphHalfWord[6];
		endcase

// Signal Generator and Output to Screen
	VGA_SignalGen SignalGen(clk, rst,{8'b11111111&{8{PixelOnOff}}}, SubPixelCount, PixelCount, LineCount, Hsync,Vsync, ColorOut);




endmodule
