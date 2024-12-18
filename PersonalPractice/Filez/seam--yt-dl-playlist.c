#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// seam 230201
int main() {
  char url[200];
  char cmd[500] = "yt-dlp ";
  char version[100];

  FILE *fp = popen("yt-dlp --version", "r");

  if (fp == NULL) {
    printf("Error!");
  } else {
    int i = 1;
    while (fgets(version, 100, fp) != NULL) {
      i++;
    }

    if (i == 1) {
      system("sudo pacman -S yt-dlp");

      puts("\nPlease restart shell. Then rerun the program.");

      return 0;
    }
  }

  puts("Enter url:");
  //   gets(url);
  scanf("%[^\n]s", url);

  strcat(cmd, url);
  strcat(cmd, " -f b -g");

  puts("\nExtracting urls to urls.txt file...\n");
  puts("It might be a lengthy process depending on playlist size.\n");

  freopen("urls.txt", "w", stdout);

  system(cmd);

  printf("\n\n---The End---\n");

  freopen("CON", "w", stdout);

  puts("\nExtraction complete\n");

  return 0;
}
