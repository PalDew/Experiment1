#!/usr/bin/env python3

# 2 dimensional lists

"""
number_grid = [
    1,2,3,4,5,6,7,8
}
This is generally how we describe a list.

But, if each item is a list, we call it a 2D list.
"""
number_grid = [[1, 2, 3],
               [4, 5, 6],
               [7, 8, 9],
               [0]
               ]

print(number_grid[0][1])  ## This prints 2
print(number_grid[3][0])  ## This prints 0
print(number_grid[3])  ## This prints 0 but as the entire list

for row in number_grid:
    print(row) # It is printing out all the items in the list of number_grid. The fact that the items themselves are a list is another matter.
