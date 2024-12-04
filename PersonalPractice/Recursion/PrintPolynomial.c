/* https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
4. Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ...  + xn-1
Input:
5
Output:
1 + x + x^2 + x^3 + x^4
*/
#include <stdio.h>
// ANALYZE THE QUES VERY CAREFULLY
void function(int count, int n) {
  if (count < n) {
    if (count == 0) {
      printf("1");
    } else {
      printf(" + x");
      if (count > 1) {
        printf("^%d", count);
      }
    }
    function(count + 1, n); // place it where it should be placed
  }
}
int main(void) {
  int n = 0;
  scanf("%d", &n);

  function(0, n);
} // done

/*

void print_poly(int i, int n)
{
    if(i<n) // wonderfully set base case
    {
        if(i==0) {
          printf("1");}
        else
        {
            printf(" + x");
            if(i>1) printf("^%d", i);
        }
        print_poly(i+1, n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_poly(0, n);
    printf("\n");
    return 0;
}*/