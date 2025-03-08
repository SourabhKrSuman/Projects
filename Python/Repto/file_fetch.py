import pandas as pd
import os
from datetime import datetime

def fetch_data():
    # Fetch the latest RODB file from Downloads directory
    downloads_path = r"/Users/sbksu_lap/Downloads"
    
    # List all files starting with RODB
    rodb_files = [f for f in os.listdir(downloads_path) if f.startswith('RODB') and f.endswith('.xlsx')]
    
    if not rodb_files:
        raise FileNotFoundError("No RODB files found in Downloads directory")
    
    # Get the latest file based on modification time
    latest_file = max(rodb_files, key=lambda x: os.path.getmtime(os.path.join(downloads_path, x)))
    
    # Full path to the latest file
    latest_file_path = os.path.join(downloads_path, latest_file)
    
    # print(f"Reading file: {latest_file}")
    data = pd.read_excel(latest_file_path)
    return data, latest_file_path

# if __name__ == "__main__":
# print(fetch_data())