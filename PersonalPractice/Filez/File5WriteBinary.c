#include "FileHeader.h"
#include <stdio.h>
struct three_num {
  int n1, n2, n3;
};

int main(void) {
  FILE *fp;
  fp = fopen("DonkeyStudent.bin", "wb");
  check_is_file_open_or_not(fp);
  char dataToBeRead[100] = {0};
  struct three_num alpha;
  int flags = 0;

  for (int i = 0; i < 5; ++i) {
    alpha.n1 = i;
    alpha.n2 = 5 * i;
    alpha.n3 = 5 * i + 1;
    flags = fwrite(&alpha, sizeof(alpha), 1, fp);
  }
  return_value_checker(flags);

  fclose(fp);
  printf("\n\nfile may be written successfully and file has been closed "
         "successfully.\n");
}
