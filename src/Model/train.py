import os
import pandas as pd
import numpy as np
import xgboost as xgb
from sklearn.metrics import mean_squared_error, mean_absolute_error
import logging
import joblib

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

class ModelTrainer:
    def __init__(self, model_dir=os.path.expanduser('~/Google-Girl-Hackathon/Models')):
        self.model_dir = model_dir
        os.makedirs(model_dir, exist_ok=True)
        
    def train_model(self, train_data, validation_data=None, params=None):
        """Train XGBoost model for timing prediction"""
        logger.info("Training XGBoost model")
        
        # Default params if none provided
        if params is None:
            params = {
                'max_depth': 5,
                'learning_rate': 0.1,
                'n_estimators': 100,
                'objective': 'reg:squarederror',
                'gamma': 0,
                'min_child_weight': 1,
                'subsample': 0.8,
                'colsample_bytree': 0.8
            }
        
        # Prepare data
        if isinstance(train_data, str):
            train_df = pd.read_csv(train_data)
        else:
            train_df = train_data
            
        # Extract features and target
        X_train = train_df.drop(['module_name', 'signal_name', 'combinational_depth'], axis=1)
        y_train = train_df['combinational_depth']
        
        # Prepare validation data if available
        eval_set = None
        if validation_data is not None:
            if isinstance(validation_data, str):
                val_df = pd.read_csv(validation_data)
            else:
                val_df = validation_data
                
            X_val = val_df.drop(['module_name', 'signal_name', 'combinational_depth'], axis=1)
            y_val = val_df['combinational_depth']
            eval_set = [(X_val, y_val)]
        
        # Train model
        model = xgb.XGBRegressor(**params)
        
        if eval_set:
            model.fit(X_train, y_train, eval_set=eval_set, eval_metric='rmse', early_stopping_rounds=10)
        else:
            model.fit(X_train, y_train)
        
        # Save model
        model_file = os.path.join(self.model_dir, 'xgboost_model.json')
        model.save_model(model_file)
        
        # Save feature names
        feature_names_file = os.path.join(self.model_dir, 'feature_names.joblib')
        joblib.dump(X_train.columns.tolist(), feature_names_file)
        
        logger.info(f"Model trained and saved to {model_file}")
        
        return model
    
    def evaluate_model(self, model, test_data):
        """Evaluate model performance on test data"""
        logger.info("Evaluating model performance")
        
        # Load test data
        if isinstance(test_data, str):
            test_df = pd.read_csv(test_data)
        else:
            test_df = test_data
            
        # Extract features and target
        X_test = test_df.drop(['module_name', 'signal_name', 'combinational_depth'], axis=1)
        y_test = test_df['combinational_depth']
        
        # Make predictions
        y_pred = model.predict(X_test)
        
        # Calculate metrics
        rmse = np.sqrt(mean_squared_error(y_test, y_pred))
        mae = mean_absolute_error(y_test, y_pred)
        
        # Calculate percentage of predictions within 2 logic levels
        within_2_levels = np.mean(np.abs(y_test - y_pred) <= 2) * 100
        
        logger.info(f"Model performance: RMSE = {rmse:.2f}, MAE = {mae:.2f}")
        logger.info(f"Predictions within 2 logic levels: {within_2_levels:.2f}%")
        
        # Create error analysis dataframe
        results = test_df[['module_name', 'signal_name', 'combinational_depth']].copy()
        results['predicted_depth'] = y_pred
        results['error'] = results['combinational_depth'] - results['predicted_depth']
        results['abs_error'] = np.abs(results['error'])
        
        # Save results
        results_dir = os.path.expanduser('~/Google-Girl-Hackathon/Results')
        os.makedirs(results_dir, exist_ok=True)
        results.to_csv(os.path.join(results_dir, 'model_evaluation.csv'), index=False)
        
        return {
            'rmse': rmse,
            'mae': mae,
            'within_2_levels': within_2_levels,
            'results': results
        }
    
    def tune_hyperparameters(self, train_data, validation_data=None):
        """Simple hyperparameter tuning"""
        from sklearn.model_selection import GridSearchCV
        
        logger.info("Performing hyperparameter tuning")
        
        # Prepare data
        if isinstance(train_data, str):
            train_df = pd.read_csv(train_data)
        else:
            train_df = train_data
            
        # Extract features and target
        X_train = train_df.drop(['module_name', 'signal_name', 'combinational_depth'], axis=1)
        y_train = train_df['combinational_depth']
        
        # Define parameter grid
        simplified_param_grid = {
            'max_depth': [3, 5],
            'learning_rate': [0.1],
            'n_estimators': [100]
        }
        
        # Create base model
        xgb_model = xgb.XGBRegressor(objective='reg:squarederror')
        
        # Perform grid search
        grid_search = GridSearchCV(
            estimator=xgb_model,
            param_grid=simplified_param_grid,
            scoring='neg_mean_squared_error',
            cv=3,
            verbose=1
        )
        
        grid_search.fit(X_train, y_train)
        
        # Best parameters
        best_params = grid_search.best_params_
        logger.info(f"Best parameters: {best_params}")
        
        # Train model with best parameters
        return self.train_model(train_data, validation_data, best_params)
