/*
9. Write a C program to count occurrences of all words in a text file.

file.txt
I love programming.
Programming with files is so fun.
Learning C programming at KU is so simple and easy.

input from User
*/
#include <stdio.h>
#include <string.h>
struct DATABASE {
  char w[50];
  int count;
};

struct DATABASE database[100];
int database_size = 0;

void add(char *t) {
  int i = 0;
  for (i = 0; i < database_size; i++) {
    if (strcasecmp(t, database[i].w) == 0) {
      database[i].count++;
      return;
    }
  }
  // if not found, add
  strcpy(database[i].w, t);
  database[i].count++;
  database_size++;
}

int main(void) {
  FILE *f = fopen("file9.txt", "r");
  char str[1000];
  freopen("file9.txt", "r", stdin);
  freopen("file9out.txt", "w", stdout);
  scanf("%[^EOF]", str);

  char *t = strtok(str, " ,.\n");
  while (t != NULL) {
    add(t);
    t = strtok(NULL, " ,.\n");
  }
  //
  for (int i = 0; i < database_size; i++) {
    printf("%12s : ", database[i].w);
    for (int j = 0; j < database[i].count; j++) {
      printf("*");
    }
    printf("\n");
  }
  //
  fclose(f);
}