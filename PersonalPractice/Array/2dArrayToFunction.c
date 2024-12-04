#include <stdio.h>

void PrintArr(int arr[][3], int row, int col) { // MENTION NUM OF COLS
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d\n", arr[i][j]);
    }
    printf("\n");
  }
}

// void PrintArr(int *arr_zero, int row, int col) {
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       printf("%d\n", *(arr_zero + i * row + j));
//     }
//     printf("\n");
//   }
// }

int main(void) {
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Get the row and col count
  int row = sizeof(arr) / sizeof(arr[0]);
  int col = sizeof(arr[0]) / sizeof(arr[0][0]);

  PrintArr(arr, row, col);
} // DONE

/*
Lets Learn:
// COPIED FROM GPT

#include <stdio.h>

// Function that takes a 2D array as an argument
void processArray(int arr[][3], int rows, int cols) {
    // Iterate through the 2D array and print its elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int myArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Calculate the number of rows and columns in the array
    int rows = sizeof(myArray) / sizeof(myArray[0]);
    int cols = sizeof(myArray[0]) / sizeof(myArray[0][0]);

    // Call the function and pass the 2D array along with its dimensions
    processArray(myArray, rows, cols);

    return 0;
}


*/