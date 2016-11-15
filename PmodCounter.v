`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:47 11/03/2016 
// Design Name: 
// Module Name:    PmodCounter 
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
module EncCounter(
	input clk,
	input [1:0] move,
	output reg [7:0] pixel
	 );
	
	//Max number of pixels
	parameter max = 0; 
	
	always @ (posedge clk) begin
		case(move)
			2'b00: pixel <= pixel;
			
			2'b10: begin
				if(pixel < max)
					pixel <= pixel + 1'b1;
			end
			
			2'b01: begin
				if(pixel > 0)
					pixel <= pixel - 1'b1;
			end
			
			default: pixel <= pixel;
		endcase
	end

endmodule
