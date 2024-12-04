// https://codeforces.com/problemset/problem/1607/A
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int t = 0;
  // enum CHARS { null, a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
  scanf("%d", &t);
  getchar(); // DUMMY but NECESSARY
  while (t--) {
    char s1[100] = {0};
    char s2[100] = {0};
    gets(s1);
    gets(s2);
    // scanf("%[^\n]s", s1);
    // getchar();
    // scanf("%[^\n]s", s2);
    // getchar();
    int len = strlen(s2), sum = 0;
    for (int i = 0; i < len - 1; i++) { // not i < len , see below explanation
      sum += abs(((int)s2[i]) - ((int)s2[i + 1]));
    }
    printf("%d\n", sum);
  }
} // incomplete
// if s2 = "hello" and i < len (if not i < len - 1)
// then at last loop, o = 111 and \0 = 0 , as a result 'o'-'\0'= 111 but we want
// zero

/*
SEAM's submission

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t, i, j, pre_i, post_i, sum;
    char str[27], str1[52];

    scanf("%d", &t);
    getchar();

    while (t--) {
        gets(str);
        gets(str1);

        sum = 0;

        for (i = 0; i < 26; i++) {
            if (str[i] == str1[0]) {
                pre_i = i;
                break;
            }
        }

        for (i = 0; i < strlen(str1); i++) {
            for (j = 0; j < 26; j++) {
                if (str1[i] == str[j]) {
                    post_i = j;
                    break;
                }
            }

            sum += abs(post_i - pre_i);
            pre_i = post_i;
        }

        printf("%d\n", sum);
    }

    return 0;
}
*/
