/*Convert fahrenheit to celcius*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  float temp_f = atoi(argv[1]), temp_c;
  if (argc != 2) {
    printf("Plese enter a single value\n");
    return 1;
  } else {
    temp_c = (temp_f - 32) * 5.00 / 9.00;
    printf("The temp %.2f in fahrenheit is %.2f in Celcius\n", temp_f, temp_c);
  }
  return 0;
}
