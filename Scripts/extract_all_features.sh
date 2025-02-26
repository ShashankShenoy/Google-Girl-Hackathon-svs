#!/bin/bash

# Directory containing the RTL Verilog files
RTL_DIR="~/Google-Girl-Hackathon/Data/RTL_Sources"

# Directory where the extracted features will be saved
FEATURES_DIR="~/Google-Girl-Hackathon/Data/Features"

# Make sure the output directory exists
mkdir -p "$FEATURES_DIR"

# Loop through all RTL files in the RTL directory
for RTL_FILE in "$RTL_DIR"/*.v; do
    # Get the base name of the RTL file (without path and extension)
    TOP_MODULE=$(basename "$RTL_FILE" .v)

    # Run the feature extraction process (adjust the command according to how your extraction is set up)
    python3 ~/Google-Girl-Hackathon/src/Extraction/yosys_extractor.py "$RTL_FILE" "$TOP_MODULE" > "$FEATURES_DIR/$TOP_MODULE.features.json"

    # Optionally, if you want to extract Verilator control flow, do so here as well
    python3 ~/Google-Girl-Hackathon/src/Extraction/verilator_extractor.py "$RTL_FILE" "$TOP_MODULE" > "$FEATURES_DIR/$TOP_MODULE.control_flow.json"

    echo "Extracted features for $TOP_MODULE"
done
