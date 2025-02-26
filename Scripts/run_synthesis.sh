#!/bin/bash

# Directory containing the RTL Verilog files
RTL_DIR="~/Google-Girl-Hackathon/Data/RTL_Sources"

# Directory for storing synthesis results (if needed)
SYNTHESIS_RESULTS_DIR="~/Google-Girl-Hackathon/Results/Synthesis"

# Make sure the results directory exists
mkdir -p "$SYNTHESIS_RESULTS_DIR"

# Loop through all RTL files in the RTL directory
for RTL_FILE in "$RTL_DIR"/*.v; do
    # Get the base name of the RTL file (without path and extension)
    TOP_MODULE=$(basename "$RTL_FILE" .v)

    # Run the synthesis tool (Yosys or others) on the RTL file
    # You need to replace 'yosys' with your actual synthesis command
    yosys -p "read_verilog $RTL_FILE; synth -top $TOP_MODULE; write_json $SYNTHESIS_RESULTS_DIR/$TOP_MODULE.json"

    echo "Synthesis completed for $TOP_MODULE"
done
