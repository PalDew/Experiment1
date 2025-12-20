// This is the iteration of the previous program
// This counts the number of words, lines and characters from getchar()
//
// I am counting words as they end. Thus, I have to check for a special last
// word case.
#include <stdio.h>
int main(int argc, char *argv[]) {
  int c;
  int nc = 0, nl = 1, nw = 0, state = 0;
  while ((c = getchar()) != EOF) {
    ++nc; //always increment new character
    if (c == '\n') {
      ++nl; //increase new line whenever you encounter a \n
    }

    if (state == 1) { // if inside a word
      if (c == ' ' || c == '\n' || c == '\t') { // Increment new word when you see space, tab or new line
        ++nw;
        state = 0;              // change the state to out after increment
      }
    }

    else if (c != ' ' && c != '\t' && c != '\n') // already outside word and do not encounter space, tab or newline
      state = 1; // change state to inside word
  }// exit while loop

  if (state == 1) // for last word. Because it doesn't have an ending character.
    ++nw; // This statement executes when you encounter EOF. The while loop exits.
  return 0;
}
