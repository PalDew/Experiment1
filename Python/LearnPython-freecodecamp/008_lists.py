#!/usr/bin/env python3

 #list of all my friends

# For storing multiple data or sets of data in a single variable.
friends = ["Kevin", "Karen", "Jim", "Jack", "Zach"]
print(friends)
print("This is the index number 1:" ,friends[1])
# Using (-)ve index will start from the end.
# So, using -2 as the index will print the second from the last element.
# There is no (-)0 index
print("This is item at the minus two index:" ,friends[-2])

# You can select range
print("From the index number 1 to last:",friends[1:])
print("Giving a range, the last one is excluded:",friends[1:3])

# Changing or modifying the items on the list
friends[1] ="Hashie"
print("This is the updated friends list:", friends)
