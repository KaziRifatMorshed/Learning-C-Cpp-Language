#include <stdio.h>
int main(void) {
  printf("Hi! Input Data: ");
  char c;
  // char str1[] = "Seam bole Linux pocca";

  FILE *fp;
  fp = fopen("text1.txt", "w");

  while ((c = getchar()) != EOF) {
    putc(c, fp);
  }
  fclose(fp);

  fp = fopen("text1.txt", "r");

  while ((c = getchar()) != EOF) {
    printf("%c", c);
  }

  fclose(fp);
}