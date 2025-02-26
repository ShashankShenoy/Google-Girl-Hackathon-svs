import json
import subprocess
import os
import logging
import re

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

class YosysExtractor:
    def __init__(self, output_dir=os.path.expanduser("~/Google-Girl-Hackathon/Data/Features")):
        self.output_dir = output_dir
        os.makedirs(self.output_dir, exist_ok=True)
        
    def extract_features(self, rtl_file):
        """Extract features from RTL using Yosys"""
        logger.info(f"Extracting features from {rtl_file}")
        
        # Ensure the RTL file exists
        if not os.path.isfile(rtl_file):
            logger.error(f"Verilog file {rtl_file} not found!")
            return {}
        
        # Dynamically determine the top module by parsing the RTL file
        top_module = self._get_top_module(rtl_file)
        if not top_module:
            logger.error(f"No top module found in {rtl_file}")
            return {}
        
        # Generate unique output file name
        base_name = os.path.basename(rtl_file).split('.')[0]
        json_output = os.path.join(self.output_dir, f"{base_name}_analysis.json")
        
        # Create Yosys script
        yosys_cmd = [
            "yosys", 
            "-p", 
            f"read_verilog {rtl_file}; "
            f"proc; flatten; "
            f"opt; "
            f"stat -top {top_module}; "
            f"write_json {json_output}"
        ]  

        logger.info(f"Running Yosys with command: {' '.join(yosys_cmd)}")  # This logs the command
        
        try:
            # Run Yosys and capture any errors in stderr
            result = subprocess.run(yosys_cmd, check=True, stderr=subprocess.PIPE, stdout=subprocess.PIPE)
            
            # Log any errors that happen
            if result.stderr:
                logger.error(f"Yosys stderr: {result.stderr.decode()}")
            
            # Parse the JSON output if Yosys ran successfully
            with open(json_output) as f:
                design_data = json.load(f)
            
            # Extract features from the JSON data
            features = self._process_json(design_data, top_module)
            
            # Save features in the Features directory
            features_file = os.path.join(self.output_dir, f"{base_name}_features.json")
            with open(features_file, 'w') as f:
                json.dump(features, f, indent=2)
                
            logger.info(f"Features saved to {features_file}")
            return features
            
        except subprocess.CalledProcessError as e:
            logger.error(f"Yosys error: {e.stderr.decode()}")
            return {}
        except Exception as e:
            logger.error(f"Error extracting features: {str(e)}")
            return {}
    
    def _get_top_module(self, rtl_file):
        """Extract the top module name from the Verilog file"""
        try:
            with open(rtl_file, 'r') as f:
                content = f.read()
                
                # Search for the module declaration using regex (assuming the first module is the top module)
                match = re.search(r"module\s+(\w+)\s*\(", content)
                if match:
                    return match.group(1)
                else:
                    logger.warning(f"No module found in {rtl_file}")
                    return None
        except Exception as e:
            logger.error(f"Error reading file {rtl_file}: {str(e)}")
            return None
        
    def _process_json(self, design_data, top_module):
        """Process Yosys JSON output to extract features"""
        features = {}
        
        try:
            # Check if the top module exists in the design data
            if top_module not in design_data['modules']:
                logger.error(f"Top module '{top_module}' not found in the design data.")
                return {}
            
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

# Usage example
if __name__ == "__main__":
    extractor = YosysExtractor()
    
    rtl_sources_dir = os.path.expanduser("~/Google-Girl-Hackathon/Data/RTL_Sources")
    
    # Process each Verilog file in the RTL_Sources directory
    for rtl_file in os.listdir(rtl_sources_dir):
        if rtl_file.endswith(".v"):  # Check if it's a Verilog file
            file_path = os.path.join(rtl_sources_dir, rtl_file)
            extractor.extract_features(file_path)
