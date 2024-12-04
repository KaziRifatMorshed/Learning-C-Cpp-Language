/*// Manishankar Sir Old Lab Tests (Batch2022 or older)

Write a program that takes a string with spaces from the user. Your program will
then determine the following.

1. Find the individual words and store them in a two-dimensional array. Print the words. (20)

2. Count the number of vowels in each word. Show the counts for all words. (20)

3. Print the appearance counts of the distinct words? Draw a histogram considering the appearance counts. (20)


Sample Input:

I know the man. the man is a good human being. the man has good characteristics.
man man man man  the the the the good good

Sample Output:

I, vowel count = 1
know, vowel count = 1
the, vowel count = 1
man, vowel count = 1
the, vowel count = 1
man, vowel count = 1
is, vowel count = 1
a, vowel count = 1
good, vowel count = 2
human, vowel count = 2
being, vowel count = 2
the, vowel count = 1
man, vowel count = 1
has, vowel count = 1
good, vowel count = 2
characteristics, vowel count = 5
man, vowel count = 1
man, vowel count = 1
man, vowel count = 1
man, vowel count = 1
the, vowel count = 1
the, vowel count = 1
the, vowel count = 1
the, vowel count = 1
good, vowel count = 2
good, vowel count = 2

distinct words and appearance counts:

I: *
know: *
the: ***
man: ***
is: *
a: *
good: ****
human: *
being: *
has: *
characteristics: *

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD 100
#define MAX_WORD_LENGTH 50

void PrintandCountVowels(char *p) {
  int vowels = 0;
  for (int j = 0; p[j] != '\0'; j++) {
    char c = toupper((char)p[j]);
    if (p[j] == 'A' || p[j] == 'E' || p[j] == 'I' || p[j] == 'O' ||
        p[j] == 'U') {
      vowels++;
    }
  }
  printf("%s has %d vowels", p[j], vowels);
}

int main(void) {
  char str[1000] = {0};
  int word[MAX_WORD][MAX_WORD_LENGTH];

  printf("Enter a string with spaces: \n");
  scanf("%[^\n]s", str);

  // Tokenization and store them in arr
  char *token = strtok(str, " ");
  int word_count = 0;
  while (token != NULL) {
    strcpy(word[word_count], token);
    strtok(NULL, " ");
  }
  // Print Individual words and count vowels
  for (int i = 0; i < word_count; i++) {
    PrintandCountVowels(&word[i]);
  }

}

// ========================================================

/*Solved by SEAM

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_words(char str[], int size, char words[100][100]);
void count_vowels(char words[100][100], int size);
void count_distinct(char words[100][100], int size);
bool is_present(char words[100][100], char s[100], int index);

int main()
{
    int size, f = 0, i = 0, j = 0;
    char str[10000], words[100][100], ch;

    while (scanf("%c", &ch) && ch != '\n') {
        if (isalpha(ch)) {
            words[i][j++] = ch;

            f = 0;
        }
        else if (!f) {
            i++;
            j = 0;

            f = 1;
        }
    }

    size = i + 1;

    printf("\n\nAll the words:\n");
    printf("-----------------------------\n");

    print_words(str, size, words);

    printf("-----------------------------\n");

    printf("\n\nVowel Count:\n");
    printf("-----------------------------\n");

    count_vowels(words, size);

    printf("-----------------------------\n");

    printf("\n\nDistinct Words:\n");
    printf("-----------------------------\n");

    count_distinct(words, size);

    printf("-----------------------------\n");

    return 0;
}

void print_words(char str[], int size, char words[100][100])
{
    int i;

    for (i = 0; i < size; i++) {
        puts(words[i]);
    }
}

void count_vowels(char words[100][100], int size)
{
    int i, j, len, count = 0;
    char ch;

    for (i = 0; i < size; i++) {
        len = strlen(words[i]);
        count = 0;

        for (j = 0; j < len; j++) {
            ch = words[i][j] | 32;

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }

        printf("Vowels in %s = %d\n", words[i], count);
    }
}

void count_distinct(char words[100][100], int size)
{
    int i, j, count;
    char s[100];

    for (i = 0; i < size; i++) {
        strcpy(s, words[i]);

        if (is_present(words, s, i) == false) {
            count = 1;

            for (j = i + 1; j < size; j++) {
                if (strcmp(s, words[j]) == 0) {
                    count++;
                }
            }

            printf("%s = %d times\n", s, count);
        }
    }
}

bool is_present(char words[100][100], char s[100], int index)
{
    int i = 0;

    for (i = 0; i < index; i++) {
        if (strcmp(words[i], s) == 0) {
            return true;
        }
    }

    return false;
}

// Ibnul Abrar Shahriar Seam*/

// ========================================================

/*SOLVED BY BARD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 20

int countVowels(char *word);
void printHistogram(char *words[], int wordCounts[], int numWords);

int main() {
    // Get input from the user
    char input[1000];
    printf("Enter a string with spaces: ");
    fgets(input, sizeof(input), stdin);

    // Split the input into words
    char *words[MAX_WORDS];
    int numWords = 0;
    char *token = strtok(input, " ");
    while (token != NULL) {
        words[numWords] = token;
        numWords++;
        token = strtok(NULL, " ");
    }

    // Find the individual words and store them in a two-dimensional array
    char wordArray[MAX_WORDS][MAX_WORD_LENGTH];
    for (int i = 0; i < numWords; i++) {
        strcpy(wordArray[i], words[i]);
    }

    // Print the words
    for (int i = 0; i < numWords; i++) {
        printf("%s\n", wordArray[i]);
    }

    // Count the number of vowels in each word
    for (int i = 0; i < numWords; i++) {
        int vowelCount = countVowels(wordArray[i]);
        printf("%s, vowel count = %d\n", wordArray[i], vowelCount);
    }

    // Print the appearance counts of the distinct words
    int wordCounts[MAX_WORDS];
    for (int i = 0; i < numWords; i++) {
        wordCounts[i] = 0;
    }

    for (int i = 0; i < numWords; i++) {
        for (int j = 0; j < numWords; j++) {
            if (strcmp(wordArray[i], wordArray[j]) == 0) {
                wordCounts[i]++;
            }
        }
    }

    printf("\ndistinct words and appearance counts:\n");
    for (int i = 0; i < numWords; i++) {
        if (wordCounts[i] > 0) {
            printf("%s: ", wordArray[i]);
            for (int j = 0; j < wordCounts[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    // Print the histogram
    printHistogram(wordArray, wordCounts, numWords);

    return 0;
}

int countVowels(char *word) {
    int vowelCount = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o'
|| word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
word[i] == 'O' || word[i] == 'U') { vowelCount++;
        }
    }
    return vowelCount;
}

void printHistogram(char *words[], int wordCounts[], int numWords) {
    int maxCount = 0;
    for (int i = 0; i < numWords; i++) {
        if (wordCounts[i] > maxCount) {
            maxCount = wordCounts[i];
        }
    }

    for (int i = maxCount; i >= 0; i--) {
        for (int j = 0; j < numWords; j++) {
            if (wordCounts[j] == i) {
                printf("%s: ", words[j]);
                for (int k = 0; k < wordCounts[j]; k++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
}
*/

// =====================================================================

/* Copied from GPT
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

void countVowels(const char *word) {
    int vowels = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    printf("%s, vowel count = %d\n", word, vowels);
}

int main() {
    char input[1000];
    printf("Enter a string with spaces: ");
    fgets(input, sizeof(input), stdin);

    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int wordCount = 0;

    // Tokenize the input string into words
    char *token = strtok(input, " ");
    while (token != NULL && wordCount < MAX_WORDS) {
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(NULL, " ");
    }

    // Print individual words and count vowels
    for (int i = 0; i < wordCount; i++) {
        countVowels(words[i]);
    }

    // Calculate appearance counts of distinct words and print histogram
    printf("\nDistinct words and appearance counts:\n");
    for (int i = 0; i < wordCount; i++) {
        int count = 1;
        if (words[i][0] != '\0') {
            for (int j = i + 1; j < wordCount; j++) {
                if (strcmp(words[i], words[j]) == 0) {
                    count++;
                    words[j][0] = '\0'; // Mark repeated words as processed
                }
            }
            printf("%s: ", words[i]);
            for (int k = 0; k < count; k++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
*/