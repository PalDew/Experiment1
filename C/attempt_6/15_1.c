#include <stdio.h>

int main (int argc, char *argv[]){
int c, nw = 1, nc = 0, langth [50]={0};

while ((c = getchar()) != EOF){
    ++nc;
    if (c == '\n' || c == ' ')
    { ++nw; // tracks the count of words
      langth[nw - 1] = nc - 1; //langth[0] is the length of 1st word
      nc=0;
    }
  } //while loop ends here
printf("\nThere are %d number of words.\n", nw);
for (int i=0 ; i<nw ; i++)
    printf("The %d word is %d\n" , i+1, langth[i]);
return 0;
}
