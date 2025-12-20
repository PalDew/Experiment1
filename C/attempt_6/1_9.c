#include <stdio.h>
int main(int argc, char *argv[]) {
int nc = 0;
while (getchar() != EOF)
    nc++; //prefix operator, just a stylistic choice
printf("The number of character you input is %d\n", nc);
return 0;
}
