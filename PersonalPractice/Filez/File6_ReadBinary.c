#include "FileHeader.h"
#include <stdio.h>
struct three_num {
  int n1, n2, n3;
};

int main(void) {
  FILE *fp;
  fp = fopen("DonkeyStudent.bin", "rb");
  check_is_file_open_or_not(fp);
  char dataToBeRead[100] = {0};
  struct three_num alpha;

  for (int i = 0; i < 5; ++i) {
    fread(&alpha, sizeof(alpha), 1, fp);
    printf("n1= %d\tn2= %d\tn3= %d\n", alpha.n1, alpha.n2, alpha.n3);
  }

  fclose(fp);
  printf("\n\nfile may be written successfully and file has been closed "
         "successfully.\n");
} //  done