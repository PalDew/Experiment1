// This program will help you look at the arguments given to the main funciton.
/*

 * There is no true or false value: they are 0 for false and 1 for true
 * This is me doing something bad with the program, hoping to break things and
 then learn from it.
 */

#include <stdio.h>
int main(int argc, char *argv[]) {
  int i;

  if (argc == 1) {
    printf("You only have given no arguments. Ha ha.\n");
  } else if (argc > 1 && argc < 4) { /* Changing it to logical or operates the
                                       for loop, for all the arguments. */
    //  Then, for 0 arguments, it will print the first one
    //  Does never run the last else statement
    printf("Yup you have given correct number of arguments.\n");
   for (i = 1; i < argc; i++) {
      printf("%s\n", argv[i]);
    }
  } else { // If you do not use the last else statement, you wouldn't know when
           // you have entered too many arguments.
    printf("You have too many arguments. Just 1 & 2 are allowed.\n");
  }
  return 0;
}
