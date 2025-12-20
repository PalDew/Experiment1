// this finds the value of EOF
#include <stdio.h>
int main(int argc, char *argv[]) {
int c;
if ((c=getchar()) == EOF) printf("%d\n", c);
else
printf("%d\n",c);
return 0;
}
