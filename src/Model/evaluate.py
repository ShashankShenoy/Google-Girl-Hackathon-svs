import os
import json
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score
import xgboost as xgb
import logging

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(name)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

class ModelEvaluator:
    def __init__(self, model_path, test_data_path, results_dir=os.path.expanduser('~/Google-Girl-Hackathon/Results')):
        self.model_path = model_path
        self.test_data_path = test_data_path
        self.results_dir = results_dir
        
        if not os.path.exists(results_dir):
            os.makedirs(results_dir)
        
        # Load the model from the specified path
        self.model = xgb.Booster()
        self.model.load_model(model_path)
        logger.info(f"Loaded model from {model_path}")
        
        # Load the test data
        self.test_data = pd.read_csv(test_data_path)
        logger.info(f"Loaded test data from {test_data_path} with {len(self.test_data)} samples")
    
    def evaluate(self):
        X_test = self.test_data.drop(['module', 'signal', 'actual_delay'], axis=1)
        y_test = self.test_data['actual_delay']
        dtest = xgb.DMatrix(X_test)
        y_pred = self.model.predict(dtest)
        
        mae = mean_absolute_error(y_test, y_pred)
        rmse = np.sqrt(mean_squared_error(y_test, y_pred))
        r2 = r2_score(y_test, y_pred)
        
        percentage_error = np.abs(y_test - y_pred) / y_test * 100
        mape = np.mean(percentage_error)
        within_10_percent = np.sum(percentage_error <= 10) / len(percentage_error) * 100
        
        results = {
            'mae': mae,
            'rmse': rmse,
            'r2': r2,
            'mape': mape,
            'within_10_percent': within_10_percent
        }
        
        # Save evaluation metrics to a JSON file
        with open(os.path.join(self.results_dir, 'evaluation_metrics.json'), 'w') as f:
            json.dump(results, f, indent=4)
        
        logger.info(f"Evaluation results: MAE={mae:.4f}, RMSE={rmse:.4f}, R²={r2:.4f}")
        logger.info(f"MAPE={mape:.2f}%, Within 10% error: {within_10_percent:.2f}%")
        
        return results
    
    def generate_plots(self):
        X_test = self.test_data.drop(['module', 'signal', 'actual_delay'], axis=1)
        y_test = self.test_data['actual_delay']
        dtest = xgb.DMatrix(X_test)
        y_pred = self.model.predict(dtest)
        
        result_df = pd.DataFrame({
            'module': self.test_data['module'],
            'signal': self.test_data['signal'],
            'actual': y_test,
            'predicted': y_pred,
            'error': np.abs(y_test - y_pred),
            'error_percent': np.abs(y_test - y_pred) / y_test * 100
        })
        
        result_df.to_csv(os.path.join(self.results_dir, 'detailed_results.csv'), index=False)
        plots_dir = os.path.join(self.results_dir, 'plots')
        if not os.path.exists(plots_dir):
            os.makedirs(plots_dir)
        
        # Plot Actual vs Predicted Delay
        plt.figure(figsize=(10, 8))
        sns.scatterplot(x='actual', y='predicted', data=result_df, alpha=0.6)
        plt.plot([0, max(y_test)], [0, max(y_test)], 'r--')
        plt.xlabel('Actual Delay')
        plt.ylabel('Predicted Delay')
        plt.title('Actual vs Predicted Delay')
        plt.savefig(os.path.join(plots_dir, 'actual_vs_predicted.png'), dpi=300, bbox_inches='tight')
        
        # Plot Error Distribution
        plt.figure(figsize=(10, 8))
        sns.histplot(result_df['error_percent'], kde=True)
        plt.xlabel('Percentage Error')
        plt.ylabel('Count')
        plt.title('Error Distribution')
        plt.savefig(os.path.join(plots_dir, 'error_distribution.png'), dpi=300, bbox_inches='tight')
        
        # Plot Average Error by Module
        plt.figure(figsize=(12, 8))
        module_error = result_df.groupby('module')['error_percent'].mean().sort_values(ascending=False)
        sns.barplot(x=module_error.index, y=module_error.values)
        plt.xticks(rotation=90)
        plt.xlabel('Module')
        plt.ylabel('Average Error Percentage')
        plt.title('Average Error by Module')
        plt.savefig(os.path.join(plots_dir, 'error_by_module.png'), dpi=300, bbox_inches='tight')
        
        logger.info(f"Saved evaluation plots to {plots_dir}")
    
    def analyze_worst_predictions(self, n=10):
        X_test = self.test_data.drop(['module', 'signal', 'actual_delay'], axis=1)
        y_test = self.test_data['actual_delay']
        dtest = xgb.DMatrix(X_test)
        y_pred = self.model.predict(dtest)
        
        result_df = pd.DataFrame({
            'module': self.test_data['module'],
            'signal': self.test_data['signal'],
            'actual': y_test,
            'predicted': y_pred,
            'error': np.abs(y_test - y_pred),
            'error_percent': np.abs(y_test - y_pred) / y_test * 100
        })
        
        worst_predictions = result_df.sort_values('error_percent', ascending=False).head(n)
        worst_predictions.to_csv(os.path.join(self.results_dir, 'worst_predictions.csv'), index=False)
        
        logger.info(f"Top {n} worst predictions saved to {self.results_dir}/worst_predictions.csv")
        
        return worst_predictions

def main():
    import argparse
    parser = argparse.ArgumentParser(description='Evaluate trained model')
    parser.add_argument('--model', type=str, default=os.path.expanduser('~/Google-Girl-Hackathon/Models/xgboost_model.json'), help='Path to saved model')
    parser.add_argument('--test-data', type=str, required=True, help='Path to test data CSV')
    parser.add_argument('--results-dir', type=str, default=os.path.expanduser('~/Google-Girl-Hackathon/Results'), help='Directory to save results')
    args = parser.parse_args()
    
    evaluator = ModelEvaluator(args.model, args.test_data, args.results_dir)
    evaluator.evaluate()
    evaluator.generate_plots()
    evaluator.analyze_worst_predictions()

if __name__ == "__main__":
    main()
