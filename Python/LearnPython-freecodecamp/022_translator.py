#!/usr/bin/env python3

## Build a basic translator: take a string and then translate it to a made up language
## First example - make all the vowels to g

def translate(phrase):
    translation = ""
    for letter in phrase:
        if letter in "AEIOU":
            translation = translation + "G"
        if letter in "aeiou": # alternatively, we can use: if letter.lower() in "aeiou"
            translation = translation + "g"
        else:
            translation = translation + letter
    return translation

print(translate(input("Enter a phrase: ")))
"""
This is a multi-line comment.
"""
