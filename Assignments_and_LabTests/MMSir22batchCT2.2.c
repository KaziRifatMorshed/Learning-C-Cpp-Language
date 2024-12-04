#include <stdio.h>

void inputA(int n, int *ara) {
  for (int i = 0; i < n; i++) {
    scanf("%d", &ara[i]);
  }
}

int main(void) {
  int A[100], n = 0, found = 0;
  printf("input element number of A (up to 100): ");
  scanf("%d", &n);
  printf("Enter elements of A (up to 100):");
  inputA(n, &A[0]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != i) {
        for (int k = 0; k < n;
             k++) { // from here, it is difficult to understand

          if (k != i && k != j) {
            if (A[i] == A[j] + A[k]) {
              printf("%d can be obtained by adding %d and %d\n", A[i], A[j],
                     A[k]);
              found = 1;
            }
          }
        }
      }
    }

    if (!found) {
      printf("No elements in the array can be obtained by adding two other "
             "elements.\n");
    }
  }
}

/*
int main() {
  int A[100];
  int n;

  // Input the number of elements in array A
  printf("Enter the number of elements in array A (up to 100): ");
  scanf("%d", &n);

  // Input elements for array A
  printf("Enter elements for array A (up to 100):\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  int found = 0; // Flag to track if any elements are found

  // Check if an element can be obtained by adding two other elements
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        for (int k = 0; k < n; k++) {
          if (k != i && k != j) {
            if (A[i] == A[j] + A[k]) {
                            printf("%d can be obtained by adding %d and %d\n",
                            A[i], A[j], A[k);
                            found = 1;
            }
          }
        }
      }
    }
  }

  if (!found) {
    printf("No elements in the array can be obtained by adding two other "
           "elements.\n");
  }

  return 0;
}*/