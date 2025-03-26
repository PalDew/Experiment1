// This program will use functions to multiply two floats

#include <stdio.h>

float product(float a, float b) { return a * b; };

int main(void) {
  printf("Enter two numbers\n");
  float a, b;
  scanf("%f %f", &a, &b);
  printf("The product is %f\n", product(a, b));
  return 0;
}

