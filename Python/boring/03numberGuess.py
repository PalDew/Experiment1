 # This is a number guessing game
import random
secretNumber = random.randint (1, 20)
print("I am thinking of a number in between 1 and 20.\nYou have 6 tries:\n")

# Asking the player to enter their guesses
for guessTaken in range (1,7):
    print("Take a guess:")
    guess = int(input()) ## I have added another variable to bypass the input command
    if guess < secretNumber:
        print("Your guess is low.")
    elif guess > secretNumber:
        print("Your guess is high.")
    else :
        break
if guess == secretNumber:
    print ("You are correct. You guessed it in: " + str(guessTaken) +" guesses!")
else :
    print("Sorry, you ran out of tries. I was thinking of: " + str(secretNumber))
