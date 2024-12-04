#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// credit: Durjay 230234
void reverse(int *arr, int n, int i) {
  if (i == n)
    return;

  reverse(arr, n, i + 1);
  printf("%d ", arr[i]);
}

void duo(int *arr, int n, int i) {
  if (n % 2 != 0 && i > n / 2)
    return;

  else if (n % 2 == 0 && i >= n / 2)
    return;

  printf("%d %d\n", arr[i], arr[n - 1 - i]);

  duo(arr, n, i + 1);
}

void oddout(int *arr, int i, int j, int *n) {

  if (i == *n) {
    *n = j;
    return;
  }

  if (arr[i] % 2 == 0) {
    arr[j] = arr[i];
    j++;
  }

  oddout(arr, i + 1, j, n);
}

void series(int n, int i) {
  if (i == n)
    return;

  if (i == 0)
    printf("1 ");

  else if (i == 1)
    printf("+ x ");
  else
    printf("+ x^%d ", i);

  series(n, i + 1);
}

int seriesvalue(int x, int n, int i) {
  if (n == 0)
    return 1;

  if (i < n)
    return (int)pow(x, i) + seriesvalue(x, n, i + 1);

  return 0;
}

int fact(int n) {
  if (n == 0)
    return 1;

  else
    return n * fact(n - 1);

  return 0;
}

int fib(int n) {
  if (n == 0)
    return 0;

  if (n == 1)
    return 1;

  return fib(n - 1) + fib(n - 2);
}

int isprime(int n, int r, int i) {

  if (n < 2)
    return 0;

  if (i > r)
    return 1;

  if (n % i == 0)
    return 0;

  return isprime(n, r, i + 1);
}

int gcdcount(int a, int b, int x) {
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;

  if (a % x == 0 && b % x == 0)
    return x;

  else
    return gcdcount(a, b, x - 1);
}

int lcdcount(int a, int b, int x) {
  if (a % b == 0)
    return a;
  if (b % a == 0)
    return b;

  if (x % a == 0 && x % b == 0)
    return x;

  else
    return lcdcount(a, b, x + 1);
}

int maxarr(int *arr, int n, int i, int max) {
  if (i == n)
    return max;

  if (arr[i] > max) {
    max = arr[i];
  }

  return maxarr(arr, n, i + 1, max);
}

int reverseint(int n, int c) {
  if (n == 0)
    return c;

  else {
    c = c * 10 + n % 10;
  }

  return reverseint(n / 10, c);
}

void revstr(int i, char *str, int n) {
  char temp;

  if (n % 2 == 0 && i >= n / 2)
    return;

  if (n % 2 != 0 && i > n / 2)
    return;

  else {
    temp = str[i];
    str[i] = str[n - 1 - i];
    str[n - 1 - i] = temp;
  }

  revstr(i + 1, str, n);
}

int palindrome(int i, char *str, int n, int c) {

  if (n % 2 == 0 && i >= n / 2) {
    if (i == c)
      return 1;
    else
      return 0;
  }

  if (n % 2 != 0 && i > n / 2) {
    if (i == c)
      return 1;
    else
      return 0;
  }

  else {
    if (str[i] == str[n - i - 1])
      c++;

    return palindrome(i + 1, str, n, c);
  }
}

int main() {
  int i, n, x;

  scanf("%d", &n);
  // scanf("%d%d", &x, &n);
  // int arr[n];
  //  for(i=0; i<n; i++)
  //  {
  //      scanf("%d", &arr[i]);
  //  }

  // 1
  // reverse(arr,n,0);
  // 2
  // duo(arr,n,0);
  // 3
  //  oddout(arr,0,0,&n);
  //  for(i=0; i<n; i++)
  //  {
  //      printf("%d ", arr[i]);
  //  }
  // 4
  // series(n,0);
  // 5
  // printf("%d\n",seriesvalue(x,n,0));
  // 6
  // printf("%d\n",fact(n));
  // 7
  // printf("%d\n",fib(n));
  // 8
  // int r = (int)sqrt(n);
  // if (isprime(n, r, 2))
  //     printf("Prime\n");
  // else
  //     printf("Not Prime\n");

  // 9
  // printf("GCD : %d\n", gcdcount(n,x,n));
  // 10
  // printf("LCM : %d\n",lcdcount(n,x,n));
  // 11
  //  int max=arr[0];
  //  printf("Max : %d\n", maxarr(arr,n,0,max));
  // 15
  // printf("%d\n",reverseint(n,x));
  // 16
  //  getchar();
  //  char str[n];
  //  gets(str);
  //  revstr(0, str, n);
  //  puts(str);
  // 17
  // getchar();
  // char str[n];
  // gets(str);
  // if (palindrome(0, str, n, 0))
  //     printf("Palindrome\n");
  // else
  //     printf("Not Palindrome");

  return 0;
}