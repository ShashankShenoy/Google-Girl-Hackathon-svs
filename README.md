# Google-Girl-Hackathon

## Overview

This project aims to develop an AI-based algorithm that predicts the combinational logic depth of signals directly from behavioral RTL (Register Transfer Level) code. By leveraging machine learning techniques, particularly XGBoost, the system provides early-stage estimations of timing violations, allowing engineers to make necessary adjustments before synthesis. This approach accelerates project execution and reduces costly architectural refactoring.

## Features

- **AI-based Algorithm**: Leverages XGBoost to predict logic depth from RTL code.
- **Early-stage Estimations**: Predicts timing violations before synthesis, allowing adjustments.
- **Custom Dataset**: Uses a collection of Verilog codes from various sources and custom-written RTL for training.
- **Feature Extraction**: Extracts features using Yosys and Verilator, stored as JSON files.
- **Model Evaluation**: Includes scripts for training, evaluating, and predicting with the XGBoost model.

## Installation

Follow the steps below to set up and install the necessary dependencies for this project:

### Prerequisites

Ensure that you have **Python 3.x** installed on your system. You can verify this by running:

```bash
python3 --version
```
### Setting Up a Virtual Environment (Optional, but Recommended)

It's a good practice to use a virtual environment to isolate project dependencies. To set up a virtual environment, follow these steps:

1. Create a new virtual environment:

```bash
python3 -m venv venv
```
2. Activate the virtual environment:
   
On Linux/macOS:
```bash
source venv/bin/activate
```
On Windows:
```bash
venv\Scripts\activate
```
### Installing Dependencies

Once your virtual environment is activated, install the necessary Python dependencies by running:
```bash
pip install -r requirements.txt
```
The [requirements](https://github.com/smritivs/Google-Girl-Hackathon/blob/main/requirements.txt) file includes a list of the Python packages and their versions required to run the project. 

## Project Structure

The project is organized as follows:
```plaintext
Google-Girl-Hackathon/
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





