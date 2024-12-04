#include <stdio.h>
typedef long long int LLI;
int main(void) {
  long long int t = 0;
  scanf("%lld", &t);
  getchar();
  while (t--) {
    long long int start = 0, last = 0;
    scanf("%lld %lld", &start, &last);

    // even start
    LLI even_start = (start % 2 == 0) ? start : start + 1;
    LLI even_end = (last % 2 == 0) ? last : last - 1;
    LLI even_n = (even_end - even_start) / 2;
    // odd start
    LLI odd_start = (start % 2 != 0) ? start : start + 1;
    LLI odd_end = (last % 2 != 0) ? last : last - 1;
    LLI odd_n = (odd_end - odd_end) / 2;

    LLI even_sum = even_n * (even_start + even_n - 1);
    LLI odd_sum = odd_n * (odd_start + odd_n - 1);
    LLI result = even_sum - odd_sum;
    printf("%lld\n", result);
  }

  // EOF
}
