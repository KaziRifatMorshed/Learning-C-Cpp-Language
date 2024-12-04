// KaziRifatMorshed 230220
/*
1335B. Construct the String

You are given three positive integers
,   and  . You have to construct a string   of length   consisting of lowercase
Latin letters such that each substring of length   has exactly

distinct letters. It is guaranteed that the answer exists.

You have to answer

independent test cases.

Recall that the substring
is the string         and its length is  . In this problem you are only
interested in substrings of length

.
Input

The first line of the input contains one integer
( ) — the number of test cases. Then

test cases follow.

The only line of a test case contains three space-separated integers
,   and   ( ), where   is the length of the required string,   is the length of
a substring and   is the required number of distinct letters in each substring
of length

.

It is guaranteed that the sum of
over all test cases does not exceed   (

).
Output

For each test case, print the answer — such a string
of length   consisting of lowercase Latin letters that each substring of length
has exactly   distinct letters. If there are multiple valid answers, print any
of them. It is guaranteed that the answer exists.
*/

// 97 to 122

#include <stdio.h>
int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    char str[2001] = {0};
    int n = 0, a = 0, b = 0;
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 0; i < n; i++) {
      int j = n % a;
      for (int k = 0; k < j; k++) {
      }
    }
  }
} // incomplete
