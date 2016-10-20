`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:00:42 10/18/2016 
// Design Name: 
// Module Name:    CoreAndRam 
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
module CoreAndRam(
    input clk
    );
	 wire [15:0] ReadData, Address, WriteData;
	 wire WriteEnable;
	 
	 CoreI c(clk, ReadData, Address, WriteData, WriteEnable
    );
	 
	 ram R (
  .clka(clk), // input clka
  .wea(1'b0), // input [0 : 0] wea
  .addra(), // input [13 : 0] addra
  .dina(), // input [15 : 0] dina
  .douta(), // output [15 : 0] douta
  .clkb(clk), // input clkb
  .web(WriteEnable), // input [0 : 0] web
  .addrb(Address[14:0]), // input [13 : 0] addrb
  .dinb(WriteData), // input [15 : 0] dinb
  .doutb(ReadData) // output [15 : 0] doutb
);


endmodule
