#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int T = 0, i, j, lastchar = 0, lastdigit = 0;
  char N[101]; // স্ট্রিং এখানে স্টোর করবে

  //printf("\ninput how many times you want to test it=");
  scanf("%d", &T); // T = কতবার লুপ চলবে , i  = ঐ লুপের কাউন্টার

  for (i = 1; i <= T; i++) { //কতবার টেস্ট করবে 
    //printf("\ninput your desired number for test="); // ট্রস্টের জন্য নাম্বার ইনপুট নিবে
    scanf("%s", &N);                              // main twist

    for (j = 0; N[j] != '\0'; j++) // Last Char Finder; j is for Finder Loop Counter
    {
      lastchar = N[j];
    }

    lastdigit = (int)lastchar - 48;
    // lastdigit = lastdigit - 48;

    if (lastdigit % 2 == 0) {
      printf("even\n");
    } else {
      printf("odd\n");
    }
  }


  return 0;
}