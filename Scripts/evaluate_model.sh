#!/bin/bash

# Directory containing the extracted features
FEATURES_DIR="~/Google-Girl-Hackathon/Data/Features"

# Directory for saving the evaluation results
EVALUATION_RESULTS_DIR="~/Google-Girl-Hackathon/Results/Evaluation"

# Make sure the results directory exists
mkdir -p "$EVALUATION_RESULTS_DIR"

# Path to the trained model and feature names
MODEL_PATH="~/Google-Girl-Hackathon/Models/xgboost_model.json"
FEATURE_NAMES_PATH="~/Google-Girl-Hackathon/Models/feature_names.joblib"

# Loop through all the feature files in the Features directory
for FEATURE_FILE in "$FEATURES_DIR"/*.features.json; do
    # Get the base name of the feature file (without path and extension)
    TOP_MODULE=$(basename "$FEATURE_FILE" .features.json)

    # Run the evaluation script (adjust the command according to your project setup)
    python3 ~/Google-Girl-Hackathon/src/Model/evaluate.py --model "$MODEL_PATH" --features "$FEATURE_FILE" --output "$EVALUATION_RESULTS_DIR/$TOP_MODULE.evaluation.json"

    echo "Evaluation completed for $TOP_MODULE"
done
