#!/usr/bin/env python3
## basics of reading and opening files

employee_file = open(
    "/home/pal/Documents/Experiment1/Python/LearnPython-freecodecamp/024_input.txt", "r"
)
print(employee_file.readlines())
employee_file.seek(0)
for a in employee_file.readlines():
    print(a)
employee_file.close()
