// This calculates the simple interest
#include <stdio.h>
float sint(int p, int t, int r) { return p * t * r / 100; }

int main(int argc, char *argv[]) {
  int p, r, t;
  float a = 0;
  printf("Principal, rate and time in years?\t");
  scanf("%d %d %d", &p, &r, &t);
  a = (float)p + sint(p, r, t);
  printf("This is the simple interest %.2f\n", sint(p, r, t));
  printf("The amount is %.2f\n", a);
  return 0;
}
