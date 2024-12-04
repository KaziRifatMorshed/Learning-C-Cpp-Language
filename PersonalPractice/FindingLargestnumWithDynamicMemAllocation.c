/// GPT
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr;
  int n;

  // Prompt the user to enter the number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Allocate memory for the array dynamically
  arr = (int *)malloc(n * sizeof(int));

  if (arr == NULL) {
    printf("Memory allocation failed. Exiting...\n");
    // return 1;
    exit(0);
  }

  // Read the elements into the array
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Find the largest element
  int largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  // Print the largest element
  printf("The largest element is: %d\n", largest);

  // Deallocate the dynamically allocated memory
  free(arr);

  return 0;
}

///

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    float *element;
        printf("\n\n Pointer : Find the largest element using Dynamic Memory
Allocation :\n");
        printf("-------------------------------------------------------------------------\n");
    printf(" Input total number of elements(1 to 100): ");
    scanf("%d",&n);
    element=(float*)calloc(n,sizeof(float));  // Memory is allocated for 'n'
elements if(element==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)
    {
       printf(" Number %d: ",i+1);
       scanf("%f",element+i);
    }
    for(i=1;i<n;++i)
    {
       if(*element<*(element+i))
           *element=*(element+i);
    }
    printf(" The Largest element is :  %.2f \n\n",*element);
    return 0;
}
*/