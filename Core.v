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
	 //input rst,
    //input IO,
	 input [15:0] readData,
	 output reg [15:0]writeData,
	 output reg writeEnable,
	 output reg [15:0]address
	 );
	 
	 reg [15:0] PC = 16'h0;
	 reg [15:0] memAdd;
	 reg [15:0]	data;
	 reg [4:0] PS, NS;
	 
	 integer counter = 0;
	 
	 parameter[4:0] clear = 5'd0, fetch = 5'd1, receive = 5'd2, reset = 5'd3, load = 5'd4, store = 5'd5, 
							advance = 5'd6, increment = 5'd7, pause = 5'd8, add = 5'd9, move = 5'd10, resetBuffer = 5'd11						
							;
	 
	 //TODO/Questions: 
	 // 1) Figure out max PC, don't want to just keep going
	 // 2) Find better way to do advance and increment (too bulky?)
	 // 3) Determine what PC address @ reset (right now it's 0x2400)
	 // 4) When does PC value latch w/reset?
	 
	 always @ (posedge clk) begin
			//Increment PC Counter if necessary
			if(PS == fetch && NS == receive)
				PC <= PC + 1'b1; 
			else
				PC <= PC; 
			
			//Update present state
			PS <= NS;
			
			//Do action based on PS
			case(PS)
				load: data <= readData;
				advance: memAdd <= memAdd + 1'b1;
				increment: data <= data + 1'b1;
				reset: PC <= 16'h0;
				
			endcase
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
			
			//Receive instruction 
			receive: begin
				address <= memAdd; //Fetch value at memory address,
				writeData <= 16'bX;
				writeEnable <= 0;
				case(readData[15:12])  
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
			
			//Load memory data into register
			load: begin
				address <= 16'bX; //Have already fetched memory address (pretty sure we don't care here?)
				writeData <= 16'bX; //Don't care, not writing data
				writeEnable <= 0;  //Don't enable writing to memory
				NS <= fetch;
			end
			
			//Load register data into memory
			store:begin
				address <= memAdd; //Give memory address that we want to write to
				writeData <= data; //Give data that we want to write to memory
				writeEnable <= 1;  //Enable writing to memory
				NS <= fetch;
			end
			
			//Advance memory address by 1
			advance: begin
				address <= 16'bX; //Don't really care, work being done elsewhere (sequential)
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= fetch;
			end
			
			//Increment data value by 1
			increment: begin
				address <= 16'bX; //Don't really care, work being done elsewhere (sequential)
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= fetch;
			end
			
			//Pause advancement of program for 1 milisecond
			pause: begin
				address <= 16'bX; 
				writeData <= 16'bX;
				writeEnable <= 0; 
				if (counter == 1_000_000) begin //Counter to wait for one milisecond
					NS <= fetch;
					counter = 0;
				end
				else begin
					NS <= pause;
					counter = counter + 1;
				end
			end
			
			//Reset program counter to the beginning of program's address
			reset: begin
				address <= 16'bX; //Have already fetched memory address (pretty sure we don't care here?)
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= resetBuffer;
			end
			
			//Give reset time to latch new PC value - no idea if this is needed or not 
			resetBuffer: begin
				address <= 16'bX; 
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= fetch;
			end
			
			/*
			//Will include add and move instructions later!
			add: begin
				address <= 16'bX; 
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= fetch;
			end
			
			
			move: begin
				address <= 16'bX;
				writeData <= 16'bX;
				writeEnable <= 0; 
				NS <= fetch;
			end
			*/
			
			default: begin
				address <= 16'bX;
				writeData <= 16'bX;
				writeEnable <= 0;
				NS <= fetch;
			end
		endcase
		

	 end

endmodule
