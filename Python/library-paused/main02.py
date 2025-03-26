## Not displaying and checking the existance of file in the Summary column
## Took some time but got it without messing up the column justification
import csv
import os

# Path to your CSV file
csv_file_path = '/home/palash/Downloads/testa.csv'

# Open the CSV file
with open(csv_file_path, mode='r', newline='', encoding='utf-8') as file:
    reader = csv.DictReader(file)
    
    # Reading the headers and excluding the "Link to file" column
    headers = [header for header in reader.fieldnames if header.strip() != "Link to file"]
    # The header.strip removes any whitespace around the headers.

    # Read all rows into a list to calculate column widths
    rows = list(reader)

    # Calculate the maximum width for each column
    column_widths = {header: len(header) for header in headers}
    
    # Calculate max length for each column based on the rows
    for row in rows:
        for header in headers:
            value = row[header].strip()
            if header == "Summary":
                # Check for 'Yes' or 'No' based on file existence
                value = "Yes" if value and os.path.exists(value) else "No"
            column_widths[header] = max(column_widths[header], len(value))

    # Print the headers and align them center
    print(" | ".join(header.center(column_widths[header]) for header in headers))
    print("-" * (sum(column_widths[header] for header in headers) + 3 * (len(headers) - 1)))  # Print a separator line
    
    # Print each row, excluding the "Link to file" column and center aligned 
    for row in rows:
        row_data = []
        for header in headers:
            value = row[header].strip()
            if header == "Summary":
                # Check for 'Yes' or 'No' based on file existence
                value = "Yes" if value and os.path.exists(value) else "No"
            row_data.append(value.center(column_widths[header]))
        print(" | ".join(row_data))

"""
old code
## Literally Just not displaying the link to file column
## and formatting the column widths
import csv
import os

# Path to your CSV file
csv_file_path = '/home/palash/Downloads/testa.csv'

# Open the CSV file
with open(csv_file_path, mode='r', newline='', encoding='utf-8') as file:
    reader = csv.DictReader(file)
    
    # Reading the headers and excluding the "Link to file" column
    headers = [header for header in reader.fieldnames if header.strip() != "Link to file"]
    #The header.strip removes any whitespace around the headers.

    ## Calculate the maximum width for each column
    column_widths = {header: len(header) for header in headers}

    ## Read through the rows to determine the maxdimu width of each column
    rows = list(reader)
    for row in reader:
        for header in headers:
            column_widths[header] = max(column_widths[header], len(row[header].strip()))

    # Print the headers and align them center
    print(" | ".join(header.center(column_widths[header]) for header in headers))
    print("-" * (sum(column_widths[header] for header in headers) + 3 * (len(headers) -1)))  # Print a separator line
    
    # Print each row, excluding the "Link to file" column and center aligned 
    #file.seek(0)
    #next(reader)
    for row in rows:
        if any(row[header].strip() for header in headers):
           row_data = []
           for header in headers:
                if header == "Summary":
                    summary_path = row[header].strip()
                    if summary_path and os.path.exists(summary_path):
                        row_data.append("Yes".center(column_widths[header]))
                    else:
                        row_data.append("No".center(column_widths[header]))
                else:
                    row_data.append(row[header].strip().center(column_widths[header]))
        print(" | ".join(row_data))
 """    
