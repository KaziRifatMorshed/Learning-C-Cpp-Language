#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1001];
    scanf(" %d[^\n]", ch);
    int n=strcmp(ch,strrev(ch));
    if(n==0)
    {
        printf("Palindrome\n");
    }
    else 
    {
        printf("not Palindrome\n");
    }

    return 0;

}