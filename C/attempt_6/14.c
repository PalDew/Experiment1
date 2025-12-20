#include <stdio.h>
#define OUT 0 //outside a word
#define IN 1 //inside a word
int main (int argc  , char *argv[]){
int c, nl=IN, nw=OUT, nc=OUT, state = OUT;
// to count lines, words and characters
while ((c = getchar()) != EOF){
  ++nc; //Always increment the character counter.
        //Personally, I would not increment it when a space or a newline character is added, but that is how it is shown in the book
 if (c == '\n')
   ++nl;
 if (c == ' ' || c == '\n' || c == '\t')
   state = OUT;
 	else if (state == OUT){
    state = IN;
    ++nw;
}}//end of while loop
printf("\nCharacters = %d\tLines = %d\tWords = %d\n",nc,nl,nw);
return 0;
}
