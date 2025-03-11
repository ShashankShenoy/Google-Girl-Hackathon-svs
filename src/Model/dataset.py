import os
import json
import pandas as pd
from sklearn.model_selection import train_test_split

# Define paths
BASE_DIR = os.path.expanduser("~/Google-Girl-Hackathon/Data/Features")
VERILATOR_FEATURES_DIR = os.path.join(BASE_DIR, "Verilator")
YOSYS_FEATURES_FILE = os.path.join(BASE_DIR, "Yosys", "yosys_features.json")

def load_verilator_features():
    """Load all Verilator feature files into a dictionary."""
    features = {}
    for file in os.listdir(VERILATOR_FEATURES_DIR):
        if file.endswith(".json"):
            file_path = os.path.join(VERILATOR_FEATURES_DIR, file)
            with open(file_path, "r") as f:
                features[file] = json.load(f)
    return features

def load_yosys_features():
    """Load Yosys feature JSON file."""
    with open(YOSYS_FEATURES_FILE, "r") as f:
        return json.load(f)

def create_dataset():
    """Merge Verilator and Yosys features into a dataset."""
    verilator_data = load_verilator_features()
    yosys_data = load_yosys_features()

    dataset = []
    for file, verilator_features in verilator_data.items():
        module_name = file.replace(".json", "")  # Assuming filenames match module names
        yosys_features = yosys_data.get(module_name, {})

        combined_features = {"module": module_name}
        combined_features.update(verilator_features)
        combined_features.update(yosys_features)

        dataset.append(combined_features)

    return pd.DataFrame(dataset)

def split_dataset(df, test_size=0.2, random_state=42):
    """Split dataset into train and test sets."""
    train_df, test_df = train_test_split(df, test_size=test_size, random_state=random_state)
    return train_df, test_df

if __name__ == "__main__":
    df = create_dataset()
    train_df, test_df = split_dataset(df)

    print("Train Set:")
    print(train_df.head())
    
    print("\nTest Set:")
    print(test_df.head())

    # Save to CSV if needed
    train_df.to_csv(os.path.join(BASE_DIR, "train.csv"), index=False)
    test_df.to_csv(os.path.join(BASE_DIR, "test.csv"), index=False)
