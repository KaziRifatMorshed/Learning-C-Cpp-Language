#include <stdio.h>
#include <string.h>
// thanks to seam
// পরে নিজেও করেছি 
char strrev(char str[]) {
  int i, len = strlen(str);

  for (i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];//এরে ইন্ডেক্সিং এক কম করে শুরু হয় 
    str[len - i - 1] = temp;
  }
}

int main() {
  char str[21];
  gets(str);
  strrev(str);
  puts(str);
  return 0;
}// done