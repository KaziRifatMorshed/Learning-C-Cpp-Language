#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
            if(j>=i||11-i>j)
            {
                printf("c");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}
