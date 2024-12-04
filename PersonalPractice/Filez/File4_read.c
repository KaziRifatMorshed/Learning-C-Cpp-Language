// #include <stdio.h>
// #include <stdlib.h>
#include "FileHeader.h"
#include <stdio.h>

int main(void) {
  FILE *fp;
  fp = fopen("DonkeyStudent.txt", "r");
  check_is_file_open_or_not(fp);
  char dataToBeRead[100] = {0};

  while (fgets(dataToBeRead, 4, fp) != NULL) { // 10 ????
    printf("%s", dataToBeRead);
  }

  fclose(fp);
  printf("\n\nfile may be written successfully and file has been closed "
         "successfully.\n");
}
