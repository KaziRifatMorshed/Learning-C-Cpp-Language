#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp;
  char c;
  system("clear");

  fp = fopen("file1.txt", "r");

  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  int a, b = 4, d = 3;
  if ((a = b) != d) {
    printf("\nyes, this expression works");
  }

  fclose(fp);
}
