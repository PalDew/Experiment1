// We are going functional and structural this time. Same problem, but different
// solutions
#include <stdio.h>

typedef struct complex {
  int real;
  int imaginary;
} complex_s;

complex_s add(complex_s a, complex_s b) {
  return (complex_s){a.real + b.real, a.imaginary + b.imaginary};
}

int main(int argc, char *argv[]) {
  complex_s a, b, sum;
  printf("Enter first number\n");
  scanf("%d %d", &a.real, &a.imaginary);
  printf("Enter second number\n");
  scanf("%d %d", &b.real, &b.imaginary);
  sum = add(a, b);
  printf("The sum is %d +i%d\n", sum.real, sum.imaginary);
  return 0;
}
