// This time I am gonna go recursive
// Printing fibonacci sequences
// Changes - in the fib function, I am changing how the if command works:
#include <stdio.h>
int fib(int n) {
  if (n == 1 || n == 0) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv) {
  int n;
  printf("How many numbers? ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("%d\n", fib(i));
  }
  return 0;
}
