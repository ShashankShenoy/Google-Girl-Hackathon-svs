# Google-Girl-Hackathon

## Overview

This project aims to develop an AI-based algorithm that predicts the combinational logic depth of signals directly from behavioral RTL (Register Transfer Level) code. By leveraging machine learning techniques, particularly XGBoost, the system provides early-stage estimations of timing violations, allowing engineers to make necessary adjustments before synthesis. This approach accelerates project execution and reduces costly architectural refactoring.

## Features

- **Custom Dataset and Feature Extraction**: Developed a custom dataset by sourcing Verilog code from multiple websites and creating original RTL code. Used Yosys for RTL synthesis and Verilator for C++ model conversion to extract essential features in JSON format, enabling efficient analysis of combinational logic depth.


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
#### Yosys Installation 

On Ubuntu/Desbian:
```bash
sudo apt-get install yosys
```
On macOS (Homebrew):
```bash
brew install yosys
```
For Windows, For Windows, refer to the [Yosys download page](https://yosyshq.net/yosys/download.html).

#### Verilator Installation 

On Ubuntu/Desbian:
```bash 
sudo apt install verilator
```

On macOS (Homebrew):
```bash
brew install verilator
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
```

## Running the Project 

#### 1. Feature Extraction
To extract features from RTL files, use:
```bash
./Scripts/extract_all_features.sh
```

#### 2. Run Synthesis 
To run synthesis and obtain timing reports, use:
```bash 
./Scripts/run_synthesis.sh
```

#### 3. Train Model 
To train the model, use:
```bash 
python3 src/Model/train.py
```

#### 4. Predictions 
To predict the combinational depth of a signal, use:
```bash
python3 src/Predict/predict.py --signal <signal_name>
```

#### 5. Evaluation 
Evaluation is done by comparing the predicted combinational depth with the actual values obtained from the synthesis report. This can be done by running:
```bash 
./Scripts/evaluate_model.sh
```
