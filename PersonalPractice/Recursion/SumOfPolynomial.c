/*Write a recursive solution to evaluate the previous polynomial for any given x
and n. Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 =
31
Input: 2 5
Output: 31
*/
#include <math.h>
#include <stdio.h>
int sum_of_poly(int x, int n, int count) {
  if (count < n) {
    return (int)pow(x, count) + sum_of_poly(x, n, count + 1);
  }
  return 0; // THIS LINE !!!!!!!
  // what the last function will return when if will not work !
}

int main(void) {
  int x = 0, n = 0;
  scanf("%d %d", &x, &n);
  printf("%d", sum_of_poly(x, n, 0));
} // done

/*
Well, this is same as the previous one, instead of printing it, you need to
evaluate it for given n and x. So the recursive formula for this may be:
f(x, n) = x^n + f(x, n-1).
In programming, we can easily do this recursively in forward order.

int sum_poly(int i, int n, int x) {
    if(n==0)
        return 1;
    if(i<n)
        return (int)pow(x,i) + sum_poly(i+1, n, x);
    return 0;
}
int main(){
    int n, v, x;
    scanf("%d %d", &x, &n);
    v = sum_poly(0, n, x);
    printf("%d\n", v);
    return 0;
}*/