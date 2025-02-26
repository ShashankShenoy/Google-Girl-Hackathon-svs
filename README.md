# Google-Girl-Hackathon

## Overview

This project aims to develop an AI-based algorithm that predicts the combinational logic depth of signals directly from behavioral RTL (Register Transfer Level) code. By leveraging machine learning techniques, particularly XGBoost, the system provides early-stage estimations of timing violations, allowing engineers to make necessary adjustments before synthesis. This approach accelerates project execution and reduces costly architectural refactoring.

## Features

- **Feature 1**: Description of feature 1.
- **Feature 2**: Description of feature 2.
- **Feature 3**: Description of feature 3.

## Installation

Follow the steps below to set up and install the necessary dependencies for this project:

### Prerequisites

Ensure that you have **Python 3.x** installed on your system. You can verify this by running:

```bash
python3 --version


## Project Structure

The project is organized as follows:

```plaintext
Project/
├── Data/
│   ├── RTL_Sources/           # Your RTL Verilog files
│   └── Features/              # Extracted features for ML
├── src/
│   ├── Extraction/
│   │   ├── __init__.py
│   │   ├── yosys_extractor.py  # Feature extraction using Yosys
│   │   └── verilator_extractor.py  # Control flow extraction
│   ├── Model/
│   │   ├── __init__.py
│   │   ├── dataset.py         # Dataset preparation
│   │   ├── train.py           # Model training
│   │   └── evaluate.py        # Model evaluation
│   ├── Predict/
│   │   ├── __init__.py
│   │   └── predict.py         # Prediction pipeline
│   └── Utils/
│       ├── __init__.py
│       └── timing_parser.py   # Parse synthesis timing reports
├── Notebooks/
│   ├── feature_exploration.ipynb
│   └── model_tuning.ipynb
├── Scripts/
│   ├── extract_all_features.sh
│   ├── run_synthesis.sh
│   └── evaluate_model.sh
├── Models/                    # Saved models directory
│   └── xgboost_model.json
├── Results/                   # Prediction results
├── requirements.txt
├── setup.py
└── README.md


