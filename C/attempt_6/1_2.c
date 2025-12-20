#include <stdio.h>
/*We are printing a table for fahrenheit 0 to 300 in steps of 20*/

int main(void) {
  float fah, cel;
  float lower = 0, upper = 300, step = 20;
  fah = lower;
  printf("°F\t°C\n");
  while (fah <= upper) {
    cel = (5.0 * (fah - 32)/9.0);
    printf("%3.0f\t%3.2f\n", fah, cel);
    fah = fah + step;
  }
return 0;
}
