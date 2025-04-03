// This program will help you look at the arguments given to the main funciton.
/*

 * There is no true or false value: they are 0 for false and 1 for true

 */

#include <stdio.h>
int main(int argc, char *argv[]) {
  int i;

  if (argc == 1) {
    printf("You only have one argument. Ha ha.\n");
  } else if (argc > 1 && argc < 4) {
    printf("Yup you have given correct number of arguments.\n");
    for (i = 0; i < argc; i++) {
      printf("%s\n", argv[i]);
    }
  } else {
    printf("You have too many arguments. Just 1 & 2 are allowed.\n");
  }
  printf("Because the first argument is always the name of the function.\n");
  return 0;
}
