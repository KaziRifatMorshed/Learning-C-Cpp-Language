#include <stdio.h>

int main(void) {
  FILE *fp;
  fp = fopen("file1.txt", "a+"); // open the file
  fputc('a', fp);                // write a single character to the file
  fclose(fp);                    // close the file
}
