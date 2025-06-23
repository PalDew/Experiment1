// This is exercise 17 of the book
 // Heap & Stack memory allocation

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
int id, set; //conventionally, and for easier debugging and version control; we declare one data per line
char name[MAX_DATA], email[MAX_DATA];
};

struct Database{
struct Address rows[MAX_ROWS];
};

struct Connection{
FILE *file;
struct Database *db;
};

void die (const char *message){
if (errno){perror(message);}
else {printf("ERROR: %s\n", message);}
 exit(1);
}
