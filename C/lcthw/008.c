// This is exercise 13 of the book
//
// For-Loops and Arrays of Strings
//

#include <stdio.h>
int main(int argc, char * argv[]){
int i = 0;

//Go through each string in argv. Take special note of the argv[0]

for (i = 0 ; i < argc; i++){
printf("arg %d: %s\n",i, argv[i]);
} 

//Making our own array of strings

char *states[] = {"California","Oregon", "Washington","Texas"};
int num_states = 5;

for (i=0; i<num_states;i++){
printf("state %d: %s\n", i, states[i]);
}

return 0;
}
