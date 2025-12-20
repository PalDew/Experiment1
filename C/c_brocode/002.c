#include <stdio.h>

int main() {
  int age = 25;
  int year = 2025;
  int qty = 1;

  printf("You are %d years old.\n", age);
  printf("The year is: %d.\n", year);
  printf("You have ordered %d x item(s).\n", qty);

  float gpa = 2.5;
  float price = 19.99;
  float temperature = -10.1;
  printf("Your GPA is %f\n", gpa);
  printf("Your GPA is %.2f\n", gpa);
  printf("The price is %.2f \n", price);
  printf("The temperature outside is %.1f °C \n", temperature);

  double pi = 3.141592653589;
  printf("The value of pi is: %lf \n", pi);
  printf("The value of pi is: %.10lf \n", pi);
  return 0;
}
