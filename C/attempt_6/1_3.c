#include <stdio.h>
int main(void) {
  float fah;
  printf("°F\t°C\n");
  for (fah = 0; fah <= 300; fah = fah + 20) {
      printf("%3.0f\t%3.1f\n", fah, ((5.0/9.0)*(fah-32)));
  }
  return 0;
}
