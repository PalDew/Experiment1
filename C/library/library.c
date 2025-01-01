#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h> 

struct Book 
{
char title[150];
char author[60];
char genre[30];
char status[20];
float rating;
char summary_file[100];
char book_file[100];
};

int main ()
{
  initscr();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);

// Create a Window and a border around it
WINDOW *win = newwin(20, 80, 0, 0);
box ()win, 0,0);

//Display book list
wprintw(win, "Book Library\n");

  endwin();
  return 0;
}
