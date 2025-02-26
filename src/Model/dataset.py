import os
import json
import pandas as pd
import logging
from glob import glob
from sklearn.model_selection import train_test_split

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

class DatasetPreparation:
    def __init__(self, features_dir='~/Google-Girl-Hackathon/Data/Features', rtl_dir='~/Google-Girl-Hackathon/Data/RTL_Sources'):
        self.features_dir = os.path.expanduser(features_dir)  # Contains Yosys & Verilator outputs
        self.rtl_dir = os.path.expanduser(rtl_dir)  # Contains Verilog source files
    
    def parse_timing_reports(self):
        """Parse synthesis timing reports to extract ground truth"""
        logger.info("Parsing timing reports for ground truth")
        
        ground_truth = {}
        
        for report_file in glob(os.path.join(self.features_dir, '*_timing.json')):
            try:
                module_name = os.path.basename(report_file).split('_')[0]
                
                with open(report_file, 'r') as f:
                    timing_data = json.load(f)
                
                for signal, depth in timing_data.items():
                    full_signal_name = f"{module_name}.{signal}"
                    ground_truth[full_signal_name] = depth
                
                logger.info(f"Extracted {len(timing_data)} paths from {report_file}")
            
            except Exception as e:
                logger.error(f"Error parsing timing report {report_file}: {str(e)}")
        
        return ground_truth
    
    def merge_features_with_ground_truth(self, ground_truth):
        """Merge extracted features from Yosys and Verilator with ground truth data"""
        logger.info("Merging features with ground truth")
        
        all_data = []
        
        for yosys_file in glob(os.path.join(self.features_dir, '*_yosys_features.json')):
            try:
                module_name = os.path.basename(yosys_file).split('_')[0]
                
                with open(yosys_file, 'r') as f:
                    yosys_features = json.load(f)
                
                verilator_file = os.path.join(self.features_dir, f"{module_name}_verilator_features.json")
                verilator_features = {}
                if os.path.exists(verilator_file):
                    with open(verilator_file, 'r') as f:
                        verilator_features = json.load(f)
                
                for signal, signal_features in yosys_features.items():
                    full_signal_name = f"{module_name}.{signal}"
                    
                    if full_signal_name in ground_truth:
                        combined_features = {
                            'module_name': module_name,
                            'signal_name': signal,
                            
                            # Yosys Features
                            'fan_in_count': signal_features.get('fan_in_count', 0),
                            'signal_width': signal_features.get('signal_width', 1),
                            'has_multiply': signal_features.get('has_multiply', 0),
                            'has_divide': signal_features.get('has_divide', 0),
                            'has_add': signal_features.get('has_add', 0),
                            
                            # Verilator Features
                            'critical_path_length': verilator_features.get(signal, {}).get('critical_path_length', 0),
                            'num_gates': verilator_features.get(signal, {}).get('num_gates', 0),
                            'num_ff': verilator_features.get(signal, {}).get('num_ff', 0),
                            
                            # Timing Ground Truth
                            'combinational_depth': ground_truth[full_signal_name]
                        }
                        
                        all_data.append(combined_features)
                
                logger.info(f"Processed features for {module_name}")
                
            except Exception as e:
                logger.error(f"Error processing features file {yosys_file}: {str(e)}")
        
        df = pd.DataFrame(all_data)
        logger.info(f"Created dataset with {len(df)} samples and {len(df.columns)} features")
        
        return df
    
    def prepare_dataset(self, test_size=0.2, random_state=42):
        """Prepare the full dataset with train/test split"""
        
        ground_truth = self.parse_timing_reports()
        df = self.merge_features_with_ground_truth(ground_truth)
        
        os.makedirs(os.path.join(self.features_dir, 'processed'), exist_ok=True)
        df.to_csv(os.path.join(self.features_dir, 'processed/full_dataset.csv'), index=False)
        
        train_df, test_df = train_test_split(df, test_size=test_size, random_state=random_state)
        
        train_df.to_csv(os.path.join(self.features_dir, 'processed/train_dataset.csv'), index=False)
        test_df.to_csv(os.path.join(self.features_dir, 'processed/test_dataset.csv'), index=False)
        
        logger.info(f"Dataset prepared: {len(train_df)} training samples, {len(test_df)} test samples")
        
        return train_df, test_df

if __name__ == "__main__":
    dataset_prep = DatasetPreparation()
    dataset_prep.prepare_dataset()
