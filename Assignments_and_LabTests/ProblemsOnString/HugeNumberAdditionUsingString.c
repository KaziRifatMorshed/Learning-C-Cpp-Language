#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char str1[] = "7432051098763254098721345678901234567890";
  char str2[] = "8923476091238740928374059837450982374092837450982347509";
  char sum[101] = {0};
  int temp = 0, rem = 0;

  int len1 = strlen(str1); // 40
  int len2 = strlen(str2); // 55
  // printf("%d %d", len1, len2);
  int maxlen = (len1 > len2) ? len1 : len2;

  for (int i = maxlen - 1; i >= 0; i--) {
    temp = (int)atoi(&str1[i]) + (int)atoi(&str2[i]) + rem;

    if (temp > 9) {
      rem = 1;
    } else {
      rem = 0;
    }
    sum[i] = 48 + (temp % 10);
  }

  printf("\nSUM = %s", sum);
}

/*8923476091238740928374059837450982374092837450982347509 +
7432051098763254098721345678901234567890 =
ANSWER: 8923476098670792027266111983128664612824873126653575403999*/