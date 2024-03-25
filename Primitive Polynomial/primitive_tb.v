// Code your testbench here
// or browse Examples
`timescale 1ns / 1ps

module lfsr_4bit_and_gate_tb;

// Inputs
reg clk;
reg rst;

// Outputs
wire [3:0] q;
wire out, e, f;

// Instantiate the Unit Under Test (UUT)
lfsr_4bit_and_gate uut (
    .clk(clk), 
    .rst(rst), 
    .q(q), 
    .out(out),
    .e(e),
    .f(f)
);

initial begin
    // Initialize Inputs
    clk = 0;
    rst = 1;

    // Wait 100 ns for global reset to finish
    #100;
      
    // Add stimulus here
    rst = 0;
end

// Clock generation
always #10 clk = ~clk;

// Monitor changes and dump to file
initial begin
    $dumpfile("dump.vcd"); $dumpvars(0, lfsr_4bit_and_gate_tb);
    #2000; // Run long enough to see repeating patterns
    $finish;
end

// Optional: Monitor output
initial begin
    $monitor("Time = %d, rst = %b, clk = %b, q = %b, out = %b, e = %b, f = %b", $time, rst, clk, q, out, e, f);
end

endmodule
