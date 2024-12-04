/*Problem 7:
Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci
numbers are 1, 1. Input:
6
Output:
8
*/
#include <stdio.h>
// int n_th_fibonacci(int first, int second, int n, int count) {
//   if (n == count) {
//     return first + second;
//   } else {
//     return n_th_fibonacci(first, second, n, count + 1);
//   }
// }
int n_th_fibonacci(int n) { // MINDBLOWING ALGORITHM !!!!!
  if (n < 3) {
    return 1;
  } else {
    return n_th_fibonacci(n - 1) + n_th_fibonacci(n - 2);
  }
}

int main(void) {
  int n = 0;
  scanf("%d", &n);
  printf("%d", n_th_fibonacci(n));
}

///
/*
This is another common problem studied in elementary recursion and tree
structures. We know, 1st and 2nd Fibonacci numbers are both 1. And the rest of
it is fib(n) = fib(n-1) + fib(n-2).
[.c]
#include <stdio.h>

int fib(int n) {
    if(n<3) return 1;
    return fib(n-2) + fib(n-1);
}
int main() {
    int n, v;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
[.c]
This problem has an excessive overlapping call which may turn it out to be slow,
but hey, we are not to practice efficiency here, so forget about that, just look
for how recursions work.
*/