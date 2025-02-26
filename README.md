# Google
Overview:
This project aims to develop an AI-based algorithm that predicts the combinational logic depth of signals directly from behavioral RTL (Register Transfer Level) code. By leveraging machine learning techniques, particularly XGBoost, the system provides early-stage estimations of timing violations, allowing engineers to make necessary adjustments before synthesis. This approach accelerates project execution and reduces costly architectural refactoring.

Project Structure

The project is organized into the following directories:

    Data/: Contains all data-related resources.
        RTL_Sources/: Houses the RTL Verilog files used for feature extraction.
        Features/: Stores the features extracted from RTL files, such as fan-in, fan-out, and other key parameters.

    src/: Contains the source code for various components.
        Extraction/: Modules for extracting features from RTL using Yosys and Verilator.
            yosys_extractor.py: Performs feature extraction using Yosys.
            verilator_extractor.py: Handles control flow extraction.
        Model/: Includes code for preparing datasets, training the ML models, and evaluating performance.
            dataset.py: Prepares the dataset for training.
            train.py: Trains the prediction model.
            evaluate.py: Evaluates the model's performance.
        Predict/: Contains the prediction pipeline for making combinational depth predictions based on trained models.
            predict.py: Handles the prediction pipeline.
        Utils/: Utilities for parsing timing reports generated from synthesis tools.
            timing_parser.py: Parses synthesis timing reports.

    Notebooks/: Jupyter Notebooks for feature exploration and model tuning.
        feature_exploration.ipynb: Explores and analyzes features extracted from RTL files.
        model_tuning.ipynb: Tunes the model's hyperparameters for optimal performance.

    Scripts/: Shell scripts for automating various tasks.
        extract_all_features.sh: Extracts features from all RTL files.
        run_synthesis.sh: Runs synthesis and generates timing reports.
        evaluate_model.sh: Evaluates the trained model's performance.

    Models/: Directory for saved models.
        xgboost_model.json: Saved XGBoost model for combinational depth prediction.

    Results/: Stores prediction results.

    requirements.txt: Lists the Python dependencies required to run the project.

    setup.py: Setup script for installing the project as a package.

