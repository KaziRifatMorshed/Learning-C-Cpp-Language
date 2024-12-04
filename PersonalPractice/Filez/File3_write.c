// #include <stdio.h>
// #include <stdlib.h>
#include "FileHeader.h"
#include <stdio.h>

int main(void) {
  FILE *fp;
  // char str[] =
  //    "seam said,\n linux is pocca\nhowever, he\n is\n the real pocca seam";
  char str[] = "he is a good boy\nmeaw";

  fp = fopen("DonkeyStudent.txt", "w");
  if (fp == NULL) {
    printf("file is not opened, the program will now exit.\n");
    exit(0);
  } else {
    printf("file opened successfully\n\n");

    // write the data
    if (strlen(str) > 0) {
      fputs(str, fp);
      fputs("0\n00\t00", fp);
      fputs("\n\nja ja add korbo ta concatnate hoa jabe", fp);
    }

    // fscanf(fp, );
    fclose(fp);
    printf("file may be written successfully and file has been closed "
           "successfully.\n");
  }
} // overwriting those lines