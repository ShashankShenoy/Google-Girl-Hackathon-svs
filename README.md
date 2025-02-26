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
#### Setting Up a Virtual Environment (Optional, but Recommended)

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
##### Installing Dependencies

Once your virtual environment is activated, install the necessary Python dependencies by running:
```bash
pip install -r requirements.txt
```
The [requirements](https://github.com/smritivs/Google-Girl-Hackathon/blob/main/requirements.txt) file includes a list of the Python packages and their versions required to run the project. 





