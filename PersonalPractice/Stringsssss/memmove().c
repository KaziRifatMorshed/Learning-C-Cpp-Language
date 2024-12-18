/* A C program to demonstrate working of memmove */
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Geekskaka"; // Array of size 100
  char str2[] = "Quiz";      // Array of size 5

  puts("str1 before memmove ");
  puts(str1);

  /* Copies contents of str2 to sr1 */
  memmove(str1 + 1, str2, sizeof(str2)); // dest, sec, size of source

  puts("\nstr1 after memmove ");
  puts(str1);

  return 0;
}
