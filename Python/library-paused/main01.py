## Literally Just not displaying the link to file column
## and formatting the column widths
import csv

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
    for row in reader:
        for header in headers:
            column_widths[header] = max(column_widths[header], len(row[header].strip()))

    # Print the headers and align them center
    print(" | ".join(header.center(column_widths[header]) for header in headers))
    print("-" * (sum(column_widths[header] for header in headers) + 3 * (len(headers) -1)))  # Print a separator line
    
    # Print each row, excluding the "Link to file" column and center aligned 
    file.seek(0)
    next(reader)
    for row in reader:
        if any(row[header].strip() for header in headers):
            row_data = [row[header].strip().center(column_widths[header]) for header in headers]
            print(" | ".join(row_data))

