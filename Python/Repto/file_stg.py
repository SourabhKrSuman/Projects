import pandas as pd
from file_fetch import fetch_data

def process_and_store_data():
    # Unpack the tuple returned by fetch_data
    df, excel_path = fetch_data()

    # Count Primary ownership by FirstName and LastName combination
    primary_counts = df[df['Ownership'] == 'Primary'].groupby(['FirstName', 'LastName']).size()

    # Get the person (FirstName, LastName) with highest count of Primary ownership
    max_primary_person = primary_counts.idxmax()

    filtered_df = df[
        (df['FirstName'] == max_primary_person[0]) & 
        (df['LastName'] == max_primary_person[1])
    ]

    # Sort the filtered data by Ownership (Primary first, then Secondary)
    filtered_df = filtered_df.sort_values('Ownership')

    # Write filtered data to the same Excel file in Sheet2
    # with pd.ExcelWriter(excel_path, mode='a', engine='openpyxl') as writer:
    #      filtered_df.to_excel(writer, sheet_name='Sheet2', index=False)

    return filtered_df, excel_path

    # print("\nFiltered results:")
# print(process_and_store_data())

    #print(f"\nFiltered results have been written to Sheet2 in {excel_path}")
    #print(filtered_df)
    # print(excel_path)


# if __name__ == "__main__":
#process_and_store_data()
    # print(filtered_data)