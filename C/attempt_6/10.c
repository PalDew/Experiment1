#include <stdio.h>
int main(int argc, char *argv[]) {
//Count line in input
//We are still under the limited knowledge of just getchar and putchar
int c, nl = 0;
while ((c = getchar()) != EOF)
if (c == '\n')
  ++nl;
printf("%d\n", nl);
return 0;
}
