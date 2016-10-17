`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:23 10/14/2016 
// Design Name: 
// Module Name:    VGA_Dispatch 
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
module VGA_Dispatch(
	 input clk,
    input [15:0] TextAreaAddress,
//    input [15:0] GlyphAreaAddress,
    input [1:0] SubPixelCount,
	 input [9:0] PixelCount,
	 input [9:0] LineCount,
	 input [15:0] doutA,
    output reg [15:0] ASCIIColChar,
    output [15:0] GlyphWord,
	 output reg [15:0] AddressA
    );
	
	wire [15:0] GlyphAreaAddress;
	// Determine address of ASCII Character in glyph table
	assign GlyphAreaAddress = ({5'b00000,ASCIIColChar[7:0],2'b00}+LineCount[2:1] +3'd4);
	always @(posedge clk)
	begin
		case(SubPixelCount)
		0: AddressA <= TextAreaAddress;
		1: begin
				AddressA <= GlyphAreaAddress;
				ASCIIColChar <= doutA;
			end
		2: begin
				AddressA <= GlyphAreaAddress;
				ASCIIColChar <= doutA;
			end
		3: AddressA <=TextAreaAddress;
		endcase
	end
	assign GlyphWord = (SubPixelCount == 2'd3||SubPixelCount ==2'd0)?doutA:16'bx;
	
endmodule
