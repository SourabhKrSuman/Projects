def format_nbk_id(nbk_id):
    """Format the NBK ID to ensure it meets the required standards."""
    return nbk_id.strip().upper()

def save_file(file_path, data):
    """Save data to a specified file path."""
    with open(file_path, 'w') as file:
        file.write(data)

def read_file(file_path):
    """Read data from a specified file path."""
    with open(file_path, 'r') as file:
        return file.read()