// SET A

/* Dear Juniors, this is the exact code that I coded during first lab test exam.
I intentionally did not run the code because I was afraid that the code might
not work. However, the time was up and I completed my coding and had about 10
min left for deadline.
Later, I had taken help of GPT to fix the code which is inside another source
code comment section below.
however the main objective of Manishankar Sir's Lab Test is to check your
Logical Thinking and Capability to make GOOD (WELL INDENTED(Follow Indention
bro)) CODE. However, I am greatful to my course teacher, he understood my logic
by reading the source code (without running/testing it) and gave me full marks
;) */
//
/*

// HELPED BY GPT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define row_num 5
#define col_no 10 // Will add one more row for storing TargetRow
// wherer zero means false and 1 means that that row is a target row

void PrintCommonElements(int arr[][col_no + 1], int r1, int r2) {
  // Modify the logic to find common elements between rows r1 and r2
  for (int j = 0; j < col_no; j++) {
    for (int k = 0; k < col_no; k++) {
      if (arr[r1][j] == arr[r2][k]) {
        printf("%d ", arr[r2][k]);
      }
    }
  }
  printf("\n");
}

int SumOfRowElements(int arr[][col_no + 1], int r, int c) {
  int sum = 0;
  for (int i = 0; i < col_no; i++) {
    sum += arr[r][i];
  }
  return sum;
}

int main(void) {
  int arr[row_num][col_no + 1] = {0};

  // (1) Take input for all elements in the matrix
  for (int i = 0; i < row_num; i++) {
    for (int j = 0; j < col_no; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // (2) For each row, find the "target row" based on specific conditions
  for (int row = 0; row < row_num; row++) {
    for (int col = 0; col < col_no; col++) {
      int sum = SumOfRowElements(arr, row, 0); // Calculate the sum for the row

      if (arr[row][col] == (sum - arr[row][col])) {
        arr[row][col_no] = 1; // Mark the row as a "target row"
        printf("TARGET ROW= %d\n", row + 1);
        for (int k = 0; k < col_no; k++) {
          printf("%d ", arr[row][k]);
        }
        printf("\n");
        break; // Exit the loop once the condition is met
      }
    }
  }

  // (3) Check if target rows are equal
  for (int r1 = 0; r1 < row_num; r1++) {
    for (int r2 = r1 + 1; r2 < row_num; r2++) { // Avoid redundant comparisons
      if (arr[r1][col_no] == 1 && arr[r2][col_no] == 1 &&
          (SumOfRowElements(arr, r1, 0) == SumOfRowElements(arr, r2, 0))) {
        printf("\nAmong Target rows, Eq Rows are row:%d and row:%d", r1 + 1, r2
+ 1);
      }
    }
  }

  // (4) Print common elements of target rows
  printf("\nPrinting common elements of target rows:\n");
  for (int r1 = 0; r1 < row_num; r1++) {
    for (int r2 = r1 + 1; r2 < row_num; r2++) { // Avoid redundant comparisons
      if (arr[r1][col_no] == 1 && arr[r2][col_no] == 1) {
        printf("Common elements between rows %d and %d: ", r1 + 1, r2 + 1);
        PrintCommonElements(arr, r1, r2);
      }
    }
  }

  return 0;
}
*/
//

// My RAW CODE
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
#define row_num 5
#define col_no 10 // Will add one more row for storing TargetRow

void PrintCommonElements(int arr[][col_no + 1], int r1, int r2) {
  for (int i = 0; i < row_num; i++) {
    if (arr[i][10] == 1) {
      for (int j = 0; j < col_no; j++) {
        for (int k = 0; k < col_no; k++) {
          if (arr[r1][j] == arr[r2][k]) {
            printf("%d ", arr[r2][k]);
          }
        }
      }
    }
    printf("\n");
  }
}

int SumOfRowElements(int arr[][col_no + 1], int r, int c) {
  int sum = 0;
  for (int i = 0; i < col_no; i++) {
    sum += arr[r][i]; // row স্থির
  }
  return sum;
}

int main(void) {
  int arr[row_num][col_no + 1] = {0};

  // (1) take/input all elements in the matrix
  for (int i = 0; i < row_num; i++) {
    for (int j = 0; j < col_no; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // (2) for each row, finding

  for (int row = 0; row < row_num; row++) {  // per line
    for (int col = 0; col < col_no; col++) { // pause this element and sum other
      for (int i = 0; i < col_no; i++) {     // who will sum
        // int sum = 0;
        // if (i == col) {
        //   continue;
        // } else {
        //   sum += arr[row][i];
        // }

        if (arr[row][col] == (SumOfRowElements(arr, row, 0) -
                              arr[row][col])) { // if target row found
          arr[row][10] = 1;
          // if target row found, the last element of the row will be 1 which is
          // outside matrix
          printf("TARGET ROW= %d\n", row + 1);
          for (int k = 0; k < col_no; k++) {
            printf("%d ", arr[row][k]);
          }
          printf("\n");
        }

        // if (arr[row][col] == sum) { // if target row found
        //   arr[row][10] = 1;
        //   // if target row found, the last element of the row will be 1 which
        //   is
        //   // outside matrix
        //   printf("TARGET ROW= %d\n", row + 1);
        //   for (int k = 0; k < col_no; k++) {
        //     printf("%d ", arr[row][k]);
        //   }
        //   printf("\n");
        // }
      }
    }
  }

  // (3) check are target rows eq or not
  for (int r1 = 0; r1 < row_num; r1++) {
    for (int r2 = 0; r2 < row_num; r2++) {
      if (arr[r1][10] == 1 && arr[r2][10] == 1 &&
          (SumOfRowElements(arr, r1, 0) == SumOfRowElements(arr, r2, 0))) {
        printf("\nAmong Target rows, Eq Rows are row:%d and row:%d", r1 + 1,
               r2 + 1);
      }
    }
  }

  // (4)  for each target pair of row you will have to find the common elements
  // of any
  printf("Printing common elements of targetRows");
  for (int r1 = 0; r1 < row_num; r1++) {
    for (int r2 = 0; r2 < row_num; r2++) {
      PrintCommonElements(arr, r1, r2);
    }
  }

  // the end
}