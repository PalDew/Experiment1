#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *task; // name of task
  int status; // 1 for completed, 0 for incomplete
} Task;

Task *tasks = NULL;
int length = 0; // number of tasks in the list

void addTask(const char *task) {
  tasks = (Task *)realloc(tasks, (length + 1) * sizeof(Task));
  tasks[length].task = (char *)malloc(strlen(task) + 1);
}
void listTask() {}
void markCompleted() {}
void deleteTask() {}
void editTask() {}

int main(int argc, char *argv[]) { return 0; }
