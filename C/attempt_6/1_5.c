#include <stdio.h>
#define lower 0
#define upper 300
#define step 20

int main(void) {
  int fah;
  printf("°C\t°F\n");
  for (fah = lower; fah <= upper; fah = fah + step)
  printf("%3d\t%3.1f\n", fah, ((5.0/9.0)*(fah - 32)));
return 0;
}
