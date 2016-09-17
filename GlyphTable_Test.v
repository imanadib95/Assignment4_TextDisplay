`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:56:06 09/15/2016
// Design Name:   GlyphTable
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/GlyphTable_Test.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GlyphTable
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GlyphTable_Test;

	// Inputs
	reg clka;
	reg [0:0] wea;
	reg [12:0] addra;
	reg [15:0] dina;
	reg clkb;
	reg [0:0] web;
	reg [12:0] addrb;
	reg [15:0] dinb;

	// Outputs
	wire [15:0] douta;
	wire [15:0] doutb;
	
	// Instantiate the Unit Under Test (UUT)
	GlyphTable uut (
		.clka(clka), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta), 
		.clkb(clkb), 
		.web(web), 
		.addrb(addrb), 
		.dinb(dinb), 
		.doutb(doutb)
	);
	integer i;
	initial begin
		// Initialize Inputs
		clka = 0;
		wea = 0;
		addra = 0;
		dina = 0;
		clkb = 0;
		web = 0;
		addrb = 0;
		dinb = 0;

		// Wait 100 ns for global reset to finish
		#1;
      for(i=0;i<8192;i=i+1)
		begin
			addra = i;
			#4;
		end
		// Add stimulus here

	end
   
	always
	#1 clka <=~clka;
endmodule

