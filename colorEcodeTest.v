`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:17:30 11/17/2016
// Design Name:   EncCounter
// Module Name:   C:/Users/Kara/Documents/GitHub/Assignment4_TextDisplay/colorEcodeTest.v
// Project Name:  VGA_w_Dispatch2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EncCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module colorEcodeTest;

	// Inputs
	reg clk;
	reg [1:0] move;

	// Outputs
	wire [15:0] pixel;

	// Instantiate the Unit Under Test (UUT)
	EncCounter uut (
		.clk(clk), 
		.move(move), 
		.pixel(pixel)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		move = 2'b0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always begin
		move = 2'b10;
		#5 clk = ~clk;
		
		move = 2'b10;
		#5 clk = ~clk;
		
		move = 2'b01;
		#5 clk = ~clk;
	end
      
endmodule

