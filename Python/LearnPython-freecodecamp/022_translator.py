#!/usr/bin/env python3

## Build a basic translator: take a string and then translate it to a made up language
## First example - make all the vowels to g

def translate(phrase):
    translation = ""
    for letter in phrase:
        if letter in "AEIOUaeiou":
            translation = translation + "g"
        else:
            translation = translation + letter
    return translation

print(translate(input("Enter a phrase: ")))
