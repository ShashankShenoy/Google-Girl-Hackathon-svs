import os
import json
import pandas as pd
import xgboost as xgb
import logging
import joblib
import sys

# Add project root to path
sys.path.append(os.path.expanduser("~/Google-Girl-Hackathon"))

from src.extraction.yosys_extractor import YosysExtractor
from src.extraction.verilator_extractor import VerilatorExtractor

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

class TimingPredictor:
    def __init__(self, model_path='~/Google-Girl-Hackathon/Models/xgboost_model.json'):
        self.model_path = os.path.expanduser(model_path)
        self.model = None
        self.yosys_extractor = YosysExtractor()
        self.verilator_extractor = VerilatorExtractor()
        
        # Rule-based predictor thresholds
        self.rules = {
            'multiplier_threshold': {
                'condition': lambda f: f['has_multiply'] == 1 and f['signal_width'] >= 16,
                'prediction': lambda f: 12  # Approximate depth for wide multipliers
            },
            'simple_logic_threshold': {
                'condition': lambda f: f['fan_in_count'] <= 2 and f['has_multiply'] == 0 and f['has_divide'] == 0,
                'prediction': lambda f: 2  # Approximate depth for simple logic
            }
        }
        
        self._load_model()
        
    def _load_model(self):
        """Load the trained model"""
        try:
            self.model = xgb.XGBRegressor()
            self.model.load_model(self.model_path)
            logger.info("Model loaded successfully")
        except Exception as e:
            logger.error(f"Error loading model: {str(e)}")
            raise
    
    def extract_features(self, rtl_file, top_module):
        """Extract features from RTL file"""
        # Extract basic features using Yosys
        yosys_features = self.yosys_extractor.extract_features(rtl_file, top_module)
        
        # Extract control flow using Verilator
        control_flow = self.verilator_extractor.extract_control_flow(rtl_file)
        
        # Merge features
        all_features = {}
        for signal, signal_features in yosys_features.items():
            all_features[signal] = signal_features.copy()
            all_features[signal]['control_flow_depth'] = control_flow.get(signal, 0)
        
        return all_features
    
    def apply_rules(self, features):
        """Apply rule-based prediction for clear cases"""
        for rule_name, rule in self.rules.items():
            if rule['condition'](features):
                return rule['prediction'](features)
        return None
    
    def predict_depth(self, features):
        """Predict combinational depth using model or rules"""
        # Check if we have a clear rule-based prediction
        rule_prediction = self.apply_rules(features)
        if rule_prediction is not None:
            return rule_prediction
        
        # Prepare features for model
        feature_vector = features
        
        # Convert to DataFrame with correct column order
        X = pd.DataFrame([feature_vector])
        
        # Make prediction
        predicted_depth = self.model.predict(X)[0]
        
        # Round to nearest integer
        return round(predicted_depth)
    
    def predict_timing_violations(self, rtl_file, top_module, clock_period):
        """Predict timing violations for an RTL file"""
        logger.info(f"Predicting timing violations for {rtl_file}")
        
        # Extract features
        features = self.extract_features(rtl_file, top_module)
        
        # Make predictions for each signal
        predictions = {}
        violations = {}
        
        for signal, signal_features in features.items():
            # Predict depth
            depth = self.predict_depth(signal_features)
            
            # Estimate delay (very simple approximation)
            # In a real implementation, you would use technology-specific delay models
            estimated_delay = depth * 0.1  # 0.1ns per logic level as a rough estimation
            
            # Store prediction
            predictions[signal] = {
                'predicted_depth': depth,
                'estimated_delay': estimated_delay
            }
            
            # Check for violations
            if estimated_delay > clock_period:
                slack = clock_period - estimated_delay
                violations[signal] = {
                    'predicted_depth': depth,
                    'estimated_delay': estimated_delay,
                    'slack': slack
                }
        
        # Save results
        results_dir = os.path.expanduser('~/Google-Girl-Hackathon/Results')
        os.makedirs(results_dir, exist_ok=True)
        results_file = os.path.join(results_dir, f"{os.path.basename(rtl_file).split('.')[0]}_predictions.json")
        
        with open(results_file, 'w') as f:
            json.dump({
                'clock_period': clock_period,
                'predictions': predictions,
                'violations': violations
            }, f, indent=2)
        
        logger.info(f"Found {len(violations)} potential timing violations")
        logger.info(f"Results saved to {results_file}")
        
        return violations

