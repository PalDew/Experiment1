// Extra Credit Homework for exercise 10 in the book
// Switch case statements

#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Only one argument give, bruh!\n");
    return 1;
  }

  for (int i = 0; argv[1][i] != '\0';
       i++) // This checks for the arguments, then searches until it sees the
            // null character.
  {
    char letter = argv[1][i];
    if ((int)letter >= 65 && (int)letter <= 90) {
      printf("%c is uppercase.\n", letter);
      letter = 32 + letter;
      printf("This is how it would look lowercased: %c\n\n", letter);
    } else {
      printf("%c is lowercase.\n", letter);
    }
  }
  return 0;
}
