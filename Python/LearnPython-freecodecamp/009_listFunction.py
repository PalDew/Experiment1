#!/usr/bin/env python3

friends = ["Kevin", "Karen", "Jim", "Oscar", "Toby"]

This is how you duplicate lists
friends1 = friends.copy()
lucky_numbers = [4, 8, 19, 6, 23, 42]

# First function is just printing out
print("There are two lists:\n" ,friends, lucky_numbers)

# Extend list function
friends.extend(lucky_numbers)
# Mixing two different types of data is allowed in python,
# but the lsp and convention highly discourage this behaviour.

print("After extending:\n" , friends)

# append funciton
friends1.append ("Creed")
print("After appending, the new old list is:\n", friends1)
# always adds the new item to the end of the list

# to insert it at a desired spot, we use the aptly named insert function
# To understand it better, insert function goes to the index, then inserts the new item before the index
friends1.insert(-3, "Shelby")
print("friends1 is now\n", friends1)

# remove function
friends1.remove("Jim")
# The remove function only removes the first match
# del friends1[index] or friends1.pop(index) would remove the item at a particular index.
print("After Jim went away with remove commmand, we are left with:\n", friends1)
print("We could clear the entire list. Like:\n", friends.clear())

#by default, list.pop() deletes the last index of the list.
print("After using pop the result is:\n", friends1.pop())
print("The resulting list is:\n", friends1)
print("Because we already said goodbye to Jim with the previous command.")

# Knowing where does Oscar stand. In the list I mean.
print(friends1.index("Oscar"))
print(friends1)

# Similarly, list.count("item") function will count the number of duplicate entries or no. of occurrences of item

print("Now we will sort out our friends. The list I mean.")
friends1.sort()
print(friends1)
print("This sorts the list into increasing order")
lucky_numbers.sort()
print(lucky_numbers)

## list.reverse()
print("Let's try reversing our friends")
friends1.reverse()
print(friends1)
