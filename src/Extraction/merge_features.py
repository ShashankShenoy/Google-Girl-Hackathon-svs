import os
import pandas as pd
import logging

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

features_dir = os.path.expanduser("~/Google-Girl-Hackathon/Data/Features")
output_file = os.path.join(features_dir, "combined_features.csv")

# Check if the directory exists
if not os.path.exists(features_dir):
    logger.error(f"Features directory does not exist: {features_dir}")
    exit(1)

# List all JSON files
json_files = [f for f in os.listdir(features_dir) if f.endswith("_features.json")]

if not json_files:
    logger.error("No feature files found in Features directory.")
    exit(1)

logger.info(f"Found {len(json_files)} feature files.")

# Merge all JSON files
all_data = []
for file in json_files:
    file_path = os.path.join(features_dir, file)
    try:
        df = pd.read_json(file_path)
        df["source_file"] = file  # Keep track of the source
        all_data.append(df)
    except Exception as e:
        logger.error(f"Error reading {file}: {e}")

# Combine all data into one DataFrame
if all_data:
    merged_df = pd.concat(all_data, ignore_index=True)
    merged_df.to_csv(output_file, index=False)
    logger.info(f"Saved combined features to {output_file}")
else:
    logger.error("No valid data found to merge.")
