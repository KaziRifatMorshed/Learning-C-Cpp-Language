#include <stdio.h>
int main(void) {
  FILE *f;
  f = fopen("hhh.txt", "r");
  int ch;
  if (f == NULL) {
    printf("FILE OPEN FAILED\n");
  }

  while (fscanf(f, "%d", &ch) != EOF) {
    printf("%d", ch); // file reading
  }
  fclose(f);
}
// CLANG KAJ KORE NA
