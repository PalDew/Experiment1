#pg56
# Importing a function
#prints a random integer between 1 and 10, 5 times:

import random
for i in range(5):
    print(random.randint(1,10)) ## here, both the limits are inclusive. You can get 1 and 10 both as the output.


# Ending a program with sys.exit

import sys

while True:
    print('Type exit to exit.')
    response = input()
    if response =='exit':
        sys.exit() ## I like to think that sys.exit() is like return 0 statement in C
    print("You typed " + response + ".")
