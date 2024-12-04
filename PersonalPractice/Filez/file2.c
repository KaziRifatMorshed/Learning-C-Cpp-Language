#include <stdio.h>
#include <wchar.h>
int main(void) {
  FILE *source, *fp, *even, *odd;

  fp = fopen("numbers.txt", "w");
  if (fp == NULL) {
    // printf("Error opening file for writing.\n");
    perror("Error opening file for writing");
    return 1;
  }

  /*Certainly! In the provided C code, the line `fprintf(fp, "%d\n", num);` is
  used to write an integer (`num`) followed by a newline character (`\n`) to a
  text file (`fp`).

  Let's break it down:

  - `fprintf`: This function is used to write formatted data to a file in C. It
  works similarly to `printf`, but instead of printing to the console, it prints
  to a specified file.

  - `fp`: It's a pointer to a `FILE` structure, representing the file that you
  have opened. In this case, it is the file pointer for the file named
  "numbers.txt".

  - `"%d\n"`: This is the format string. `%d` is a format specifier for an
  integer, and `\n` represents a newline character. So, `%d\n` means "write the
  integer followed by a newline".

  - `num`: The integer value that you want to write to the file.

  So, when this line is executed, it takes the value of `num`, formats it as an
  integer, appends a newline character, and writes it to the file specified by
  `fp`. This is a common practice when creating text files with one piece of
  data per line, making it more human-readable and avoiding potential encoding
  issues.*/

  // Getting input
  for (int i = 0; i < 9; i++) {
    int num = 0;
    scanf("%d", &num);
    if (num == -1) {
      break;
    }
    // putw(num, fp); // ACTING WIRED coz ANCIENT
    fprintf(fp, "%d", num); // 9987654321
                            // NOTE, it is not PRINTING anything
  }
  fclose(fp);

  // READ FROM DATA
  fp = fopen("numbers.txt", "r");
  int num;
  while ((num = getw(fp)) != EOF) {
    printf("%d-", num);
  }

  // END
}