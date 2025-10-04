#! /usr/bin/env python3

# It is a special structure in python.
# Has something called key-value pairs.

monthConv = {
    "Jan": "January",
        1: "January",
    "Feb": "February",
        2: "February",
    "Mar": "March",
        3: "March",
        4: "April",
    "Apr": "April",
    "May": "May",
        5: "May",
    "Jun": "June",
        6: "June",
        7: "July",
    "Jul": "July",
    "Aug": "August",
        8: "August",
        9: "September",
    "Sep": "September",
    "Oct": "October",
       10: "October",
       11: "November",
    "Nov": "November",
       12: "December",
    "Dec": "December",
}
# The format is key : value
# The key has to be unique
# The value can be repeated.
# It is like a many to one mapping between two sets.

print(monthConv["Nov"])
print(monthConv.get("Nov"))  ## This is preferred way of accessing the keys
print(monthConv.get("Luv", "Not a valid key"))
print(monthConv[2])
