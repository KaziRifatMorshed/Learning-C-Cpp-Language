/*
7. Write a C program to remove empty lines from a text file.

file.txt
I love programming.



Programming with files  fun.

Learning C programming at Codeforwin  simple and easy.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *f = fopen("file7.txt", "r");
  char c;
  char output[1000] = {0}, src[1000] = {0};

  // while ((c = fgetc(f)) != EOF) {
  //   strcat(src, &c);
  // } // NOT WORKING

  for (int i = 0; (c = fgetc(f)) != EOF; i++) {
    src[i] = c;
  } // working

  char *t = strtok(src, "\n"); // NOT WORKING

  while (t != NULL) {

    if (strlen(t) > 0) {
      strcat(output, t);
      strcat(output, "\n");
    }
    t = strtok(NULL, "\n");
  }

  printf("%s", output);

  fclose(f);
} // done