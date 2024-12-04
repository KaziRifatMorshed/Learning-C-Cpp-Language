# include <stdio.h>
//worins as i thought
int main()
{
    int a = 10, b = 11, c = 0;

    c = ++b + a++ + ++b + b++ + ++b;
    printf("%d",c);
    return 0;
}