#include <stdio.h>
int main (int argc , char *argv[]){

// The initial program just displayed whatever was given as the input.

int c;
while ((c = getchar()) != EOF){
    if (c == '\t')
        printf("\\t");
    else if (c == '\b')
        printf("\\b");
    else if (c == '\\')
        printf("\\\\");
    else
        putchar(c);}
return 0;
}
