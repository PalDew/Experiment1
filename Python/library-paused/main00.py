## This is the most basic version. Literally just displays the csv files as it is
import csv

# Path to your CSV file
csv_file_path = '/home/palash/Downloads/testa.csv'

# Open the CSV file
with open(csv_file_path, mode='r', newline='', encoding='utf-8') as file:
    reader = csv.DictReader(file)
    
    # Print the headers
    headers = reader.fieldnames
    print(" | ".join(headers))
    print("-" * 80)  # Print a separator line
    
    # Print each row
    for row in reader:
        print(" | ".join([row[header] for header in headers]))
