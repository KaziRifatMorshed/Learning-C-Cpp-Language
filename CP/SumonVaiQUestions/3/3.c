#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",a[i][0],a[i][1],a[i][2]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i][0]*a[i][1]*a[i][2]);
    }
    return 0;
}
