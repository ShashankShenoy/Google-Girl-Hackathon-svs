import json
import subprocess
import os
import logging

logging.basicConfig(level=logging.DEBUG)
logger = logging.getLogger(__name__)

class VerilatorExtractor:
    def __init__(self, output_dir=None):
        # Set correct output directory
        self.output_dir = os.path.expanduser("~/Google-Girl-Hackathon/Data/Features") if output_dir is None else output_dir
        os.makedirs(self.output_dir, exist_ok=True)
        
    def extract_features(self, rtl_file, top_module):
        """Extract features from RTL using Verilator"""
        logger.info(f"Extracting features from {rtl_file}")
        
        # Generate unique output file name
        base_name = os.path.basename(rtl_file).split('.')[0]
        json_output = os.path.join(self.output_dir, f"{base_name}_analysis.json")
        
        # Run Verilator command to generate a JSON output for the Verilog file
        verilator_cmd = [
            "verilator", 
            "--json",  # Enable JSON output
            "--top-module", top_module,  # Specify the top module
            rtl_file
        ]
        
        try:
            logger.debug(f"Running Verilator command: {' '.join(verilator_cmd)}")
            # Run Verilator
            subprocess.run(verilator_cmd, check=True, stderr=subprocess.PIPE)
            
            # Check if JSON file exists and load it
            if not os.path.exists(json_output):
                logger.error(f"Verilator did not produce JSON output for {rtl_file}")
                return {}
            
            logger.debug(f"Verilator output found at {json_output}")
            with open(json_output) as f:
                design_data = json.load(f)
            
            # Log the raw JSON content for debugging
            logger.debug(f"Raw JSON data from Verilator for {rtl_file}: {json.dumps(design_data, indent=2)}")
            
            # Extract features from the Verilator JSON output
            features = self._process_json(design_data, top_module)
            
            # Save features to a new JSON file
            features_file = os.path.join(self.output_dir, f"{base_name}_features.json")
            with open(features_file, 'w') as f:
                json.dump(features, f, indent=2)
                
            return features
            
        except subprocess.CalledProcessError as e:
            logger.error(f"Verilator error: {e.stderr.decode()}")
            return {}
        except Exception as e:
            logger.error(f"Error extracting features: {str(e)}")
            return {}
    
    def _process_json(self, design_data, top_module):
        """Process Verilator JSON output to extract features"""
        features = {}
        
        try:
            module_data = design_data['modules'][top_module]
            
            # Process cells (logic elements)
            for cell_name, cell_data in module_data['cells'].items():
                cell_type = cell_data['type']
                connections = cell_data['connections']
                
                # Skip non-relevant cells
                if not cell_name.startswith('$'):
                    continue
                
                # Calculate signal width from connections
                signal_width = max([len(pins) for _, pins in connections.items()], default=1)
                
                # Determine operation type
                has_multiply = 1 if '$mul' in cell_type else 0
                has_divide = 1 if '$div' in cell_type else 0
                has_add = 1 if any(op in cell_type for op in ['$add', '$sub']) else 0
                
                # Count fan-in connections
                fan_in_count = sum(1 for _, pins in connections.items() if pins)
                
                # Store features
                features[cell_name] = {
                    'cell_type': cell_type,
                    'signal_width': signal_width,
                    'fan_in_count': fan_in_count,
                    'has_multiply': has_multiply,
                    'has_divide': has_divide,
                    'has_add': has_add
                }
            
            # Process nets for additional fan-in information
            for net_name, net_data in module_data.get('netnames', {}).items():
                if 'bits' in net_data:
                    net_size = len(net_data['bits'])
                    
                    # If we already have this in features, update it
                    if net_name in features:
                        features[net_name]['net_size'] = net_size
                    # Otherwise add new entry
                    else:
                        features[net_name] = {
                            'net_size': net_size,
                            'signal_width': net_size,
                            'fan_in_count': 0,  # Default, we'll calculate this later
                            'has_multiply': 0,
                            'has_divide': 0,
                            'has_add': 0
                        }
            
            return features
            
        except KeyError as e:
            logger.error(f"Key error processing JSON: {str(e)}")
            return {}

