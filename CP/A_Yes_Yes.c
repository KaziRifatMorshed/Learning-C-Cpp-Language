#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  char boss_string[] = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesY"
                       "esYesYesYesYesYes";
  int t = 0;
  scanf("%d", &t);
  getchar(); // BULLSHIT !!!!

  while (t--) {
    scanf("%[^\n]s", str);
    getchar(); // BULLSHIT !!!!
    if (strstr(boss_string, str)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
} // DONE