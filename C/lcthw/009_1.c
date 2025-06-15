// Exercise 14 of the book
/*
This is me trying to break things
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int can_print_it(
    char ch); // If you don't declare the funcitons before using them, C throws
              // wimplicit-error(yup, that's the spelling).
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[]) {
  int i = 0;
  for (i = 0; i < argc; i++) {
    print_letters(argv[i]); // sending arguments, character by character to
  }
}

void print_letters(char arg[]) {
  int i = 0;
  for (i = 0; arg[i] != '\0'; i++) { // search for the arguments, character by
                                     // character, until it encounters a blank
    char ch = arg[i];
    if (can_print_it(ch)) { // ignores the numbers. But there is nothing done if
                            // there are special characters
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n"); // this is the else statement, prints a new line each time a
                // space is encountered
}

int can_print_it(char ch) {
  return isalpha(ch) || isblank(ch);
} // returns true if the arguments have blanks or characters only

int main(int argc, char *argv[]) {
  print_arguments(argc, argv); // calls the function print_arguments
  return 0;
}
