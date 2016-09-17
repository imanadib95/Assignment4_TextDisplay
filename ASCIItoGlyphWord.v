`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:41 09/16/2016 
// Design Name: 
// Module Name:    ASCIItoGlyphWord 
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
module ASCIItoGlyphWord(
	 input clk,
    input [7:0] ASCII,
    input [2:0] PixelCount,
    input [2:0] LineCount,
    output [15:0] GlyphWord,
    output [15:0] GlyphWord2
    );
	wire [15:0] doutb;
	wire [12:0] GlyphTableAddress;
	
	ASCIItoGlyphAddress _ASCIItoGlyphAddress(
		ASCII,
		PixelCount,
		LineCount,
		GlyphTableAddress
    );
	 
   GlyphTable _GlyphTable(
	  .clka(clk), // input clka
	  .wea(1'b0), // input [0 : 0] wea
	  .addra(GlyphTableAddress), // input [12 : 0] addra
	  .dina(16'b0), // input [15 : 0] dina
	  .douta(GlyphWord), // output [15 : 0] douta
	  .clkb(clk), // input clkb
	  .web(1'b0), // input [0 : 0] web
	  .addrb(GlyphTableAddress), // input [12 : 0] addrb
	  .dinb(16'b0), // input [15 : 0] dinb
	  .doutb(GlyphWord2) // output [15 : 0] doutb
	);


endmodule
