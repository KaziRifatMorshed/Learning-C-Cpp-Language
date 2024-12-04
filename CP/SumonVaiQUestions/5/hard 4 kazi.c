#include<stdio.h>
int main()
{
    int i,j; // i = line = row      j = column

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=11;j++)
        {
            if((i<=j)&&(i<=(12-j)))
            {
                printf("C");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
    }

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=11;j++)
        {
            if((i<=j)&&(i<=(12-j)))
            {
                printf("C");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
    getch();
}
