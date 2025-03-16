import pandas as pd

def process_excel(file_path, nbk_id):
    # Load the Excel file
    df = pd.read_excel(file_path)

    # Filter the DataFrame based on the NBK ID
    filtered_df = df[df['User ID'] == nbk_id]

    # Retain only the specified columns
    result_df = filtered_df[['FirstName', 'LastName', 'Date', 'User ID']]

    return result_df