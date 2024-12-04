#include <stdio.h>
#include <string.h>
// with help of GPT 3.5
int main(void) {
  char inputstring[100];
  char charSet[256] = {0};

  printf("Input a string: ");
  // fgets(inputstring, sizeof(inputstring), stdin); // See explanations below
  // inputstring[strcspn(inputstring, "\n")] = '\0';
  // gets(inputstring);
  scanf("%[^\n]s", inputstring);

  int length = strlen(inputstring), count = 0;

  printf("Distinct characters are: ");

  for (int i = 0; i < length; i++) {
    if (inputstring[i] == ' ') { // Skip  Spaces
      continue;
    }
    if (charSet[inputstring[i]] == 0) {
      charSet[inputstring[i]] = 1;
      printf("%c ", inputstring[i]);
      count++;
    }
  } // Based on the code provided, it seems that the issue might be related to
    // the fgets function. The fgets function reads a line from the input
    // stream, including the newline character at the end. This means that the
    // inputstring array will contain the newline character as the last
    // character.

  // When the for loop iterates over the characters in the inputstring array, it
  // encounters the newline character and treats it as a distinct character.
  // This results in the count being one more than expected.

  // To fix this issue, we can modify the code to remove the newline character
  // from the inputstring array before calculating the length. We can use the
  // strcspn function to find the position of the newline character and replace
  // it with a null character.
  printf("\nTotal %d distinct characters.", count);
} // DONE
/*
Further Notice :


  fgets output :
    Input a string: qwertyuiop
    Distinct characters are: q w e r t y u i o p

    Total 11 distinct characters.⏎

  Here, after character p, it accepted newline-character (by pressing enter)
and while showing output, it also printed the newline character and created a
new line.

Now, look at gets() output:

  Input a string: qwertyuiop
  Distinct characters are: q w e r t y u i o p Total 10 distinct characters.⏎
*/

// DONE
