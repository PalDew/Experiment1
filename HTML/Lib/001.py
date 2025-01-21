import csv
with open ('sample.csv', mode = 'r') as file:
    A = csv.reader(file)
    for lines in A:
        print(lines)

