import pandas as pd
# import sys
import os
# from file_fetch import fetch_data
from file_stg import process_and_store_data
from datetime import datetime
import time


start_time = time.time()
# Fetch the updated data from fetch.py
df, source_file = process_and_store_data()
current_date = datetime.now().strftime('%m%d%y')
# Specify columns to move to the front

# df = df.sort_values(
# by=['rank', 'Youtuber', 'started'],  # columns to sort by
# ascending=[False, True, True])       # sort order for each column

# lastname = df['LastName'].iloc[0]
# firstname = df['FirstName'].iloc[0]

# # df = df.sort_values(by='Data', ascending=False)
# # Create temporary columns for sorting
# df['temp_youtuber'] = pd.to_datetime(df['Youtuber'], errors='coerce')
# df['temp_started'] = pd.to_datetime(df['started'], errors='coerce')

# Sort using temporary columns
# df = df.sort_values(
#     by=['rank', 'temp_youtuber', 'temp_started'],
#     ascending=[False, True, True]
# )

# Remove temporary columns
# df = df.drop(['temp_youtuber', 'temp_started'], axis=1)


# Convert date columns to datetime and sort
df['temp_Sdate'] = pd.to_datetime(df['Sdate'], errors='coerce')
df['temp_Endate'] = pd.to_datetime(df['Endate'], errors='coerce')

# Sort by Sdate and Endate, pushing empty values to the end
df = df.sort_values(
    by=['temp_Sdate', 'temp_Endate'],
    ascending=[True, True],
    na_position='last'
)

# Remove temporary columns
df = df.drop(['temp_Sdate', 'temp_Endate'], axis=1)

# Reorder columns (your existing code)
columns_to_front = ["Ownership", "Data", "FirstName"]
new_order = columns_to_front + [col for col in df.columns if col not in columns_to_front]
df = df[new_order]

columns_to_front = ["Ownership", "Data", "FirstName"]

# Reorder columns
new_order = columns_to_front + [col for col in df.columns if col not in columns_to_front]
df = df[new_order]

# Create Excel writer object with xlsxwriter engine
output_path = r"/Users/sbksu_lap/Downloads/{},{}_{}.xlsx".format(lastname, firstname, current_date)
# output_path = r"/Users/sbksu_lap/Downloads/Test_{}.xlsx".format(current_date)
writer = pd.ExcelWriter(output_path, engine='xlsxwriter')

# Write the dataframe to Excel
df.to_excel(writer, sheet_name='Sheet1', index=False)

# Get workbook and worksheet objects
workbook = writer.book
worksheet = writer.sheets['Sheet1']

# Define formats
header_format = workbook.add_format({
    'bold': True,
    'text_wrap': True,
    'valign': 'vcenter',
    'align': 'center',
    'fg_color': '#FFED94',
    'border': 1 
})

data_format = workbook.add_format({
    'bold': True,
    'text_wrap': True,
    'valign': 'vcenter',
    'align': 'center',
    'fg_color': '#FFED94',
    'font_color': '#C9211E',
    'border': 1
})

spcl_format = workbook.add_format({
    'bold': True,
    'text_wrap': True,
    'valign': 'vcenter',
    'align': 'center',
    'fg_color': '#FFED94',
    'font_color': '#C9211E',
    'border': 1
})

worksheet.freeze_panes(1, 0)
worksheet.autofilter(0, 0, len(df), len(df.columns) - 1)
# Set row height (40 for all rows)
worksheet.set_row(40)


# Set column widths (13 for all columns)
# for col in range(len(df.columns)):
#     worksheet.set_column(col, col, 13)

for col_num, column in enumerate(df.columns):
    if column in ["Alpha", "Ownership"]:
        # Get maximum length of column content including header
        max_length = max(
            df[column].astype(str).apply(len).max(),  # max length of values
            len(str(column))  # length of column header
        )
        worksheet.set_column(col_num, col_num, max_length + 2)  # Add 2 for padding
    else:
        # Fixed width for other columns
        worksheet.set_column(col_num, col_num, 13)

# Format headers
# for col_num, column in enumerate (df.columns):
#     if column == "Data":
#         worksheet.write(0, col_num, column, data_format)
#     else:
#         worksheet.write(0, col_num, column, header_format)

# Replace the existing format headers section with:

# Format headers

data_columns = ["Data"]
header_columns = ["FirstName", "LastName", "Ownership", "xray"]
special_columns = ["Alpha", "Beta", "gama"]

for col_num, column in enumerate(df.columns):
    if column == "Data":
        worksheet.write(0, col_num, column, data_format)
    elif column in ["Alpha", "Beta", "gama"]:
        worksheet.write(0, col_num, column, spcl_format)
    elif column in ["FirstName", "LastName", "Ownership", "xray"]:
        worksheet.write(0, col_num, column, header_format)
    else:
        worksheet.write(0, col_num, column, header_format)  # Default format for any other columns

# Save the workbook
writer.close()

print(f"Processed file saved at: {output_path}")

try:
    # Get the path of the source file from file_stg module
     # Assuming the path is stored in the function
    if os.path.exists(source_file):
        os.remove(source_file)
        print(f"Source file deleted successfully: {source_file}")
    else:
        print("Source file not found")
except Exception as e:
    print(f"Error deleting source file: {e}")


end_time = time.time()
execution_time = end_time - start_time
print (f"process completed in {execution_time//60} minutes")
# sys.exit()