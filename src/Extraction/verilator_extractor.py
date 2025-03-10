import json
import subprocess
import os
import logging
import re

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

class VerilatorExtractor:
    def __init__(self, output_dir=os.path.expanduser("~/Google-Girl-Hackathon/Data/Features/Verilator")):
        self.output_dir = output_dir
        os.makedirs(self.output_dir, exist_ok=True)
        
    def extract_features(self, rtl_file):
        """Extract features from RTL using Verilator"""
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

        # Unique output filenames
        base_name = os.path.basename(rtl_file).split('.')[0]
        verilator_out_dir = os.path.join(self.output_dir, f"{base_name}_verilator_build")
        os.makedirs(verilator_out_dir, exist_ok=True)
        
        # Run Verilator to generate C++ simulation model
        verilator_cmd = [
            "verilator", "--cc", rtl_file,
            "--top-module", top_module,
            "--Mdir", verilator_out_dir,  # Output directory
            "--trace"  # Enables tracing signals for debugging
        ]  

        logger.info(f"Running Verilator with command: {' '.join(verilator_cmd)}")
        
        try:
            result = subprocess.run(verilator_cmd, check=True, stderr=subprocess.PIPE, stdout=subprocess.PIPE)

            if result.stderr:
                logger.error(f"Verilator stderr: {result.stderr.decode()}")

            # Extract features from the generated Verilator files
            features = self._extract_verilator_features(verilator_out_dir, top_module)
            
            # Save features as JSON
            features_file = os.path.join(self.output_dir, f"{base_name}_features.json")
            with open(features_file, 'w') as f:
                json.dump(features, f, indent=2)
                
            logger.info(f"Features saved to {features_file}")
            return features
            
        except subprocess.CalledProcessError as e:
            logger.error(f"Verilator error: {e.stderr.decode()}")
            return {}
        except Exception as e:
            logger.error(f"Error extracting features: {str(e)}")
            return {}
    
    def _get_top_module(self, rtl_file):
        """Extract the top module name from the Verilog file"""
        try:
            with open(rtl_file, 'r') as f:
                content = f.read()
                
                match = re.search(r"module\s+(\w+)\s*\(", content)
                if match:
                    return match.group(1)
                else:
                    logger.warning(f"No module found in {rtl_file}")
                    return None
        except Exception as e:
            logger.error(f"Error reading file {rtl_file}: {str(e)}")
            return None
        
    def _extract_verilator_features(self, build_dir, top_module):
        """Extract features from Verilator-generated files"""
        features = {}

        cpp_file = os.path.join(build_dir, f"V{top_module}.cpp")
        h_file = os.path.join(build_dir, f"V{top_module}.h")

        try:
            if not os.path.exists(cpp_file) or not os.path.exists(h_file):
                logger.error(f"Verilator output files missing in {build_dir}")
                return {}

            # Extract signals and their widths from the header file
            with open(h_file, 'r') as f:
                for line in f:
                    match = re.match(r"\s*VL_(IN|OUT|SIG)\((\d+),\s*(\w+)\)", line)
                    if match:
                        direction, width, name = match.groups()
                        features[name] = {
                            "direction": "input" if direction == "VL_IN" else "output" if direction == "VL_OUT" else "signal",
                            "width": int(width),
                        }
            
            return features
            
        except Exception as e:
            logger.error(f"Error processing Verilator files: {str(e)}")
            return {}

# Usage example
if __name__ == "__main__":
    extractor = VerilatorExtractor()
    
    rtl_sources_dir = os.path.expanduser("~/Google-Girl-Hackathon/Data/RTL_Sources")
    
    for rtl_file in os.listdir(rtl_sources_dir):
        if rtl_file.endswith(".v"):
            file_path = os.path.join(rtl_sources_dir, rtl_file)
            extractor.extract_features(file_path)

