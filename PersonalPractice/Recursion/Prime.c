/*Problem 8:
Write a recursive program to determine whether a given integer is prime or not.
Input:
49
999983
1
Output:
not prime
prime
not prime
*/
#include <math.h>
#include <stdio.h>
#define true 1
#define false 0

// #include <stdbool>
// bool temp = false;
int prime_cq(int n, int rt, int ct) {
  if (ct == rt) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }
  if (n % ct == 0) {
    return false;
  }
  return prime_cq(n, rt, ct + 1);
}

int main(void) {
  while (1) {
    int n = 0;
    scanf("%d", &n);
    int rt = (int)sqrt(n);
    printf("%d\n", prime_cq(n, rt, 3));
  }
} // incomplete

/*
int isprime(int i, int rt, int n)
{
    if(n < 2) return 0;
    if(i > rt) return 1;
    if(n%i==0) return 0;
    return isprime(i+1, rt, n);
}

int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        if(isprime(2, (int)sqrt(n), n)==1) printf("prime\n");
        else printf("not prime\n");
    }
    return 0;
}
*/