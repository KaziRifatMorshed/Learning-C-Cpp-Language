#include "FileHeader.h"
#include <stdio.h>
// printing donkey student
int main(void) {
  FILE *p = fopen("DonkeyStudent.txt", "r");
  check_is_file_open_or_not(p);
  char ch;
  while (fgetc(p) != EOF) {
    printf("%c", ch);
  }
  // EOF
}