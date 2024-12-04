#include <stdio.h>

int CountVowels(char *str) {
  if (*str == '\0') { // JUST THINK, what possiblities can happen
    return 0;
  } else if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' ||
             *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' ||
             *str == 'O' || *str == 'O') {
    return 1 + CountVowels(str + 1);
  } else {
    return CountVowels(str + 1);
  }
}
int NON_Vowels(char *str); // PROTOTYPE

int main(void) {
  char str[100] = {0};
  printf("input a string\vwe will count vowels:\n");
  scanf("%[^\n]s", str);
  printf("there are %d vowels & %d Non Vowels", CountVowels(str),
         NON_Vowels(str));
}

int NON_Vowels(char *str) {
  if (*str == '\0') { // JUST THINK, what possiblities can happen
    return 0;
  } else if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' ||
             *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' ||
             *str == 'O' || *str == 'O' || *str == ' ') {
    return NON_Vowels(str + 1); // Be careful about LOGIC
  } else {
    return 1 + NON_Vowels(str + 1);
  }
} // DONE

/*int NON_Vowels(char *str) {
  if (*str == '\0') {
    return 0;
  } else if (*str != 'a' && *str != 'e' && *str != 'i' && *str != 'o' &&
             *str != 'u' && *str != 'A' && *str != 'E' && *str != 'I' &&
             *str != 'O' && *str != ' ') {
    return 1 + NON_Vowels(str + 1);
  } else {
    return NON_Vowels(str + 1);
  }                                // THIS WILL ALSO WORK
}*/       // THINK IN Boolean Alzebratic Way