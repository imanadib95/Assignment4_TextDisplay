`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:17 09/17/2016 
// Design Name: 
// Module Name:    CharExtract 
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
module CharExtract(
	 input clk,
	 input [6:0] HorzPos,
    input [5:0] LineCount,
    output [7:0] ASCII,
	 output [7:0] TextColor
    );
    
	 wire [12:0] TextAreaAddress;
	 wire [15:0] doutb;

	 assign TextAreaAddress = {LineCount, HorzPos};

	TextAreaMemory _TextAreaMemory (
	  .clka(clk), // input clka
	  .wea(1'b0), // input [0 : 0] wea
	  .addra(TextAreaAddress), // input [12 : 0] addra
	  .dina(16'd0), // input [15 : 0] dina
	  .douta({TextColor,ASCII}), // output [15 : 0] douta
	  .clkb(clk), // input clkb
	  .web(1'b0), // input [0 : 0] web
	  .addrb(13'd0), // input [12 : 0] addrb
	  .dinb(16'd0), // input [15 : 0] dinb
	  .doutb() // output [15 : 0] doutb
	);

endmodule
