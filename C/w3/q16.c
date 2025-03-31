// Let's find factorial of the number
// We will use recurison here.

#include <stdio.h>

int fact(int n) { return 0; }

int main(int argc, char *argv[]) {
  int n, f;
  printf("Your number pelase!\t");
  scanf("%d", &n);
  f = fact(n);
  printf("The answer you are looking for is: %d\n", f);
  return 0;
}
