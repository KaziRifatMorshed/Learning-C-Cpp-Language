#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=20;j++)
        {
            if((i<j)&&(i<(21-j)))
            {
                printf("`");
            }
            else
            {
                printf("C");
            }
        }
    printf("\n");
    }
    return 0;
    getch();
}
