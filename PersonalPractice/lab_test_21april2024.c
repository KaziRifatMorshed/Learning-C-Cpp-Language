

#include <stdio.h>
#include <string.h>
#include <strings.h>

char words[10000][100];
int wordcount = 0;
int word_count[10000] = {0}; // 1D array to store frequency

void finddistinctword() {

  for (int i = 0; i < 10000; i++) {
    if (strlen(words[i]) == 0) {
      continue;
    }

    word_count[i]++;

    for (int j = i + 1; j < 10000; j++) {
      //   if (strlen(words[j]) == 0) {
      //     continue;
      //   }
      if (strcmp(words[i], words[j]) == 0) {
        word_count[i]++;
        strcpy(words[j], "\0");
        word_count[j] = 0;
        // printf("\n%s has occurred %d times", words[i], word_count[i]);
      }
    }

    if (word_count[i] > 0) {
      printf("\n%s has occurred %d times", words[i], word_count[i]);
    }
  }
}

int main(void) {
  char word[100];
  int i = 0;
  FILE *fs = fopen("input.txt", "r");

  while (fscanf(fs, "%s", word) != EOF) {
    strcpy(words[i], word);

    // printf("%s\n", words[i]);
    i++;
  }
  wordcount = i;
  finddistinctword();
  //
  fclose(fs);
}