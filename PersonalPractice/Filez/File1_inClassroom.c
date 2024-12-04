// CLANG KAJ KORE NA
// Scan from file CHARACTER BY CHARACTER and store each character in `ch`
// variable.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char ch;
  FILE *f = fopen("hhh.txt", "r");
  if (f == NULL) {
    printf("FILE FAILED TO OPEN.");
    exit(0);
  }

  // fgetc(f)
  while (1) {
    ch = fgetc(f);
    if (ch == EOF) {
      break;
    }
    printf("-%c", ch);
  }
  putchar('\n');

  // REWIND the file pointer
  rewind(f);

  // fscanf(f, "%c", &ch) != EOF
  while (fscanf(f, "%c", &ch) != EOF) {
    printf("%c_", ch);
  }

  fclose(f);
  // end
}
