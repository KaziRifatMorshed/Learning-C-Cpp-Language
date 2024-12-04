#include <stdio.h>
int vstring(int Count_index, char *str) {
  if (str[Count_index] == '\0') {
    return 0;
  } else {
    if (str[Count_index] == 'a') {
      return 1 + vstring(Count_index + 1, str);
    } else {
      return 0 + vstring(Count_index + 1, str);
    }
  }
}

int main(void) {
  char str[100] = "I am a Disco Dancer, Meaw, Halum";
  printf("%d", vstring(0, str));
} // DONE