import pandas as pd
# import sys
import os
# from file_fetch import fetch_data
from file_stg import process_and_store_data
from datetime import datetime

# Fetch the updated data from fetch.py
df, source_file = process_and_store_data()
current_date = datetime.now().strftime('%m%d%y')
# Specify columns to move to the front

# df = df.sort_values(
# by=['rank', 'Youtuber', 'started'],  # columns to sort by
# ascending=[False, True, True])       # sort order for each column
lastname = df['LastName'].iloc[0]
firstname = df['FirstName'].iloc[0]

df = df.sort_values(by='Data', ascending=False)
columns_to_front = ["Ownership", "Data", "FirstName"]

# Reorder columns
new_order = columns_to_front + [col for col in df.columns if col not in columns_to_front]
df = df[new_order]

# Create Excel writer object with xlsxwriter engine
output_path = r"/Users/sbksu_lap/Downloads/{},{}_{}.xlsx".format(lastname,firstname, current_date)
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

worksheet.freeze_panes(1, 0)
worksheet.autofilter(0, 0, len(df), len(df.columns) - 1)
# Set row height (40 for all rows)
for row in range(len(df) + 1):  # +1 for header row
    worksheet.set_row(row, 40)


# Set column widths (13 for all columns)
for col in range(len(df.columns)):
    worksheet.set_column(col, col, 13)

# Format headers
for col_num, column in enumerate (df.columns):
    if column == "Data":
        worksheet.write(0, col_num, column, data_format)
    else:
        worksheet.write(0, col_num, column, header_format)

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
# sys.exit()