#include <stdio.h>

int main(void) {
  char a[100] = "Welcome to...", *b = "the Black Parade!";
  char *pa = &a[0], *pb = &b;
  printf("The first string is: %s\n", a);
  printf("The second string is: %s\n", b);
  while (*pa != '\0') {
    pa++;
  }
  printf("Address of the null terminator is %p:\n", (void *)pa);
  printf("Address of the null terminator, a[13] is %p:\n", &a[12]);
  printf("The null terminator is printed as %c\n", *pa);

  return 0;
}
