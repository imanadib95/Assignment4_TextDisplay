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
	 
	//BitFromGlyphWord
	wire [7:0] GlyphHalfWord;		
	wire [12:0] GlyphTableAdress;
	assign GlyphHalfWord = LineCount[0] ? GlyphWord[7:0] : GlyphWord[15:8];	// where n is dictated by the verticle
	assign PixleOnOff = GlyphHalfWord[PixelCount];
	 
	// ASCIItoGlyphWord
	assign GlyphTableAddress = ({3'b000,ASCII,2'b00}+LineCount[2:1]);
	
	GlyphTable _GlyphTable(
	  .clka(clk), 						// input clka
	  .wea(1'b0), 						// input [0 : 0] wea
	  .addra(GlyphTableAddress), 	// input [12 : 0] addra
	  .dina(16'b0), 					// input [15 : 0] dina
	  .douta(GlyphWord), 			// output [15 : 0] douta
	  .clkb(clk), 						// input clkb
	  .web(1'b0), 						// input [0 : 0] web
	  .addrb(GlyphTableAddress), 	// input [12 : 0] addrb
	  .dinb(16'b0), 					// input [15 : 0] dinb
	  .doutb() 							// output [15 : 0] doutb
	);

endmodule
