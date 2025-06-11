// Check if a number is palindrome, using a function
#include <stdbool.h>
#include <stdio.h>
bool isPalindrome(int x) {
  int y = 0, z = x;
  if (x < 0) {
    return false;
  } else {
    //    for (int i = 0; x > 0; i++) {
    //      /* printf("%d\n", x%10);   - we can use this line to see all the
    //      digits
    //       one by one, in reverse */
    //      y = y * 10 + (x % 10);
    //      x = x / 10;
    //    }
    //    Using while instead of for-loop. For using one less variable
    while (x > 0) {
      y = y * 10 + (x % 10);
      x = x / 10;
    }
  }
  //  if (z != y) {
  //    return false;
  //  } else {
  //    return true;
  //  }

  // * Trying to return better statement
  return z == y;
}
int main(int argc, char *argv[])

{
  long int x;
  printf("Enter x: ");
  scanf("%ld", &x);
  if (x > 2147483647 || x < -2147483648) {
    printf("Out of bounds!\n");
    return 0;
  } else {
    if (isPalindrome(x)) {
      printf("The number x: %ld is a palindrome\n", x);
    } else {
      printf("The number x: %ld is not a palindrome\n", x);
    }
  }
  return 0;
}
