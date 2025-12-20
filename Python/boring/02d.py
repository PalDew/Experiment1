## This uses the continue command.
## That continue statement, when executed, takes you back to the start of the loop.

while True:
    print('What is your name?')
    name = input()
    if name != 'Palash':
        continue
    print('Hello, Nagweed. What is the password? (Hint: It is a fish).')
    password = input()
    if password == 'Dolphin':
        break
print('Access Granted.')

