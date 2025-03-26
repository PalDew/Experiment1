# Now let's implement the jk and q functionality
import csv
import os
import curses
import sys 

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

def main(stdscr):
    stdscr.clear()  # Clears the screen
    current_row = 0  # Start at the first row

    # Infinite loop to display rows and handle user input
    while True:
        # Displaying headers
        header_line = " | ".join(header.center(column_widths[header]) for header in headers)
        separator_line = "-" * (sum(column_widths[header] for header in headers) + 3 * (len(headers) - 1))
        stdscr.addstr(0, 0, header_line)  # Adds header_line to the 0,0 position in the terminal
        stdscr.addstr(1, 0, separator_line)  # Adds separator_line to the 1,0 position in terminal

        # Displaying rows
        for idx, row in enumerate(rows):
            row_data = []
            for header in headers:
                value = row[header].strip()
                if header == "Summary":
                    value = "Yes" if value and os.path.exists(value) else "No"
                row_data.append(value.center(column_widths[header]))
            # Highlight the current row
            if idx == current_row:
                stdscr.addstr(idx + 2, 0, " | ".join(row_data), curses.A_REVERSE)
            else:
                stdscr.addstr(idx + 2, 0, " | ".join(row_data))

        stdscr.refresh()

        # Handle user input
        key = stdscr.getch()  # Get user input
        if key == ord('q'):  # Quit on 'q'
            break  # Exit the while loop
        elif key == ord('j') and current_row < len(rows) - 1:  # Move down on 'j'
            current_row += 1
        elif key == ord('k') and current_row > 0:  # Move up on 'k'
            current_row -= 1

curses.wrapper(main)
