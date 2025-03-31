// Check a year for leap year
#include <stdio.h>

int main(int argc, char *argv[]) {
  int year;
  printf("What is the year, bro?: ");
  scanf("%d", &year);
  if ((year % 100 != 0 && year % 4 == 0) ||
      (year % 400 == 0 && year % 100 == 0))
    printf("Leap year\n");
  else
    printf("Not a leap year\n");
  return 0;
}
