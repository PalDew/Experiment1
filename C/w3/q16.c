// Let's find factorial of the number
// We will use recurison here.

#include <stdio.h>

int fact(int n) { 
  if (n > 1)
  n = fact (n-1) * n;
  else
    return n; }

int main(int argc, char *argv[]) {
  int n, f;
  printf("Your number plase!: ");
  scanf("%d", &n);
  f = fact(n);
  printf("The factorial for %d is: %d\n",n, f);
  return 0;
}
