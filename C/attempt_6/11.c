#include <stdio.h>
int main(int argc, char *argv[]) {
//Count tab characters in input
//We are still under the limited knowledge of just getchar and putchar
int c, nl = 0, tab = 0 , spc = 0;
while ((c = getchar()) != EOF)
if (c == '\n')
  ++nl;
else if (c == '\t')
    ++tab;
else if (c == ' ')
    ++spc;
printf("The number of new lines are %d.\n Tabs are %d\n And spaces are %d\n", nl, tab, spc);
return 0;
}
