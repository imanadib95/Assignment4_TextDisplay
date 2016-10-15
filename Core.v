`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:26:37 10/14/2016 
// Design Name: 
// Module Name:    Core 
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
module Core(
	 input clk,
	 input rst,
    //input IO,
	 input [3:0] readData,
	 output reg [15:0]writeData,
	 output reg writeEnable,
	 output reg [15:0]address
	 );
	 
	 reg [15:0] PC = 16'h24000;
	 reg [15:0] memAdd;
	 reg [15:0]	data;
	 reg [4:0] PS, NS;
	 
	 parameter[4:0] clear = 5'd0, fetch = 5'd1, receive = 5'd2, reset = 5'd3, load = 5'd4, store = 5'd5, 
							advance = 5'd6, increment = 5'd7, pause = 5'd8, add = 5'd9, move = 5'd10, loadExe = 5'd11
							;
	 
	 always @ (posedge clk) begin
			if(PS == fetch && NS == receive)
				PC <= PC + 1'b1; //Increment PC Counter 
			else
				PC <= PC; 
			PS <= NS;
	 end
	 
	 always @ (*) begin
		case(PS)
			//Fetch instruction
			fetch: begin
				address <= PC; //Fetch instruction at PC counter
				writeData <= 16'bX; //Don't care about write date
				writeEnable <= 0; 
				NS <= receive;
			end
			
			receive: begin
				address <= memAdd; //Fetch value at memory address
				writeData <= 16'bX;
				writeEnable <= 0;
				case(readData) 
					4'b0000: NS <= reset;
					4'b0001: NS <= load;
					4'b0010: NS <= store;
					4'b0011: NS <= advance;
					4'b0100: NS <= increment;
					4'b0101: NS <= pause;
					4'b0110: NS <= add;
					4'b0111: NS <= move;
					default: NS <= fetch;
				endcase
			end			
			
			load: begin
				address <= PC;
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= loadExe;
			end
			
			default: begin
				address <= PC;
				writeData <= 16'bX;
				writeEnable <= 0;
				NS <= fetch;
			end
		endcase
		

	 end

endmodule
