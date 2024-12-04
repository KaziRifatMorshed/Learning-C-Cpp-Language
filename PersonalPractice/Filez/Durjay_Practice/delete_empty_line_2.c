#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *f = fopen("file7.txt", "r");

  char output[1000] = "";
  char line[1000];

  while (fgets(line, sizeof(line), f)) {
    if (line[0] != '\n' && line[0] != '\0') {
      strcat(output, line);
    }
  }

  printf("Output:\n%s", output);

  fclose(f);
} // this works
