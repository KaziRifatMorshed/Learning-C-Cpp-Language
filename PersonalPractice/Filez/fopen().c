#include <stdio.h>

int main(void) {
  FILE *fp;
  char ch;

  fp = fopen("text1.txt", "r");

  while (1) {
    ch = fgetc(fp);
    // printf("%c\n", ch);
    if (ch == EOF) {
      break;
    }
    // printf("%c\n", ch); // এটা if এর পিছনে দিলে EOF প্রিন্ট হয়ে যাবে
    putc(ch, stdout); // nice
  }
  fclose(fp);
}
