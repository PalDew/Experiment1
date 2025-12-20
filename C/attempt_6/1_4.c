#include <stdio.h>
int main(void) {
  int fah;
  printf("°F\t°C\n");
  for (fah = 300; fah>=0; fah = fah - 20) {
   printf("%3d\t%3.1f\n",fah,((5.0/9.0)*(fah - 32 )));
  }
return 0;
}
