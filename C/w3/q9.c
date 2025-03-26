#include <stdio.h>

typedef struct complex {
  int real;
  int imaginary;
} complex_s;

int main(int argc, char *argv[]) {
  complex_s a, b, sum;
  printf("Enter first number\n");
  scanf("%d %d", &a.real, &a.imaginary);
  printf("Enter second number\n");
  scanf("%d %d", &b.real, &b.imaginary);
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  printf("The sum is %d +i%d\n", sum.real, sum.imaginary);
  return 0;
}
