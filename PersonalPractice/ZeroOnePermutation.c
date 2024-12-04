/*
The code you've provided is a C program that generates all possible permutations
of an array of 0s and 1s of a given size n. It uses a recursive approach to
generate these permutations.

Here's a breakdown of the code:

The permutations function is defined to generate permutations. It takes three
parameters:

arr[]: An array to store the current permutation.
n: The size of the array and the number of elements to generate permutations
for. index: The current index being considered during recursion. Inside the
permutations function, there's a base case: If index equals n, it means a
permutation has been completed, so it prints the current permutation and
returns.

The function then recursively generates permutations by setting arr[index] to 0
and calling itself with index + 1. This represents one branch of the recursion
tree where the current element is 0.

After returning from the recursion, it sets arr[index] to 1 and calls itself
again with index + 1. This represents the other branch of the recursion tree
where the current element is 1.

In the main function:

It reads the size of the array n from the user.
It creates an array arr of size n.
It calls the permutations function to generate and print all possible
permutations of the array arr starting from index 0. This program will generate
and print all possible permutations of an array of 0s and 1s of the specified
size n. Each line of output represents a different permutation, with 0s and 1s
in various combinations.

Keep in mind that for large values of n, the number of permutations grows
exponentially, and the program's execution time may increase significantly.
*/

#include <stdio.h>

void permutations(int arr[], int n, int index) {
  if (index == n) {
    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }

    printf("\n");
    return;
  }

  arr[index] = 0;
  permutations(arr, n, index + 1);

  arr[index] = 1;
  permutations(arr, n, index + 1);
}

int main() {
  int n;

  printf("Enter size: ");
  scanf("%d", &n);

  int arr[n];

  permutations(arr, n, 0);

  return 0;
}
/*
Imagine you have a bag, and in this bag, you can only put two things: either a
red ball (which we'll call 1) or a blue ball (which we'll call 0). Your job is
to find out all the different ways you can arrange these balls in the bag.

Here's how the code does it:

We start with an empty bag (an array), and we want to figure out how to arrange
the balls in it.

We have a special helper (a function) called "permutations" that will help us
with this. It takes three things as input:

The bag (array) where we're putting the balls.
The total number of balls we want to arrange (let's say someone tells us how
many balls we want). A number that tells us where we are in the process (like
counting how many balls we've put in the bag). Now, if we've put in as many
balls as we wanted (if our counter is equal to the total number of balls), we
stop and show everyone how the balls are arranged. For example, we might show
that the bag contains: "0 1 0" (blue, red, blue).

If we haven't filled the bag yet, we have two choices:

We can put a blue ball (0) in the bag and move on to the next spot in the bag.
Or, we can put a red ball (1) in the bag and move on to the next spot.
We try one of these choices (putting a blue or red ball) and use the helper
function again to fill the next spot in the bag. Then, we go back and try the
other choice.

We keep doing this until we've tried all the possibilities for filling the bag.
Each time we try, we write down what we put in the bag and keep going.

Finally, when we've tried all the possibilities, we'll have a list of all the
different ways we can arrange the balls in the bag, and we show this list.

In the main part of the program, we ask how many balls we want to put in the bag
(the size of the bag), create the bag, and use our helper function to figure out
all the possible arrangements.

So, this program is like a game of arranging red and blue balls in a bag and
showing all the different ways we can do it.*/