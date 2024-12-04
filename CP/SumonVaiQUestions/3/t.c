#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
char a[4];
scanf("%s",a);
int s=0;
for(int j=0;j<3;j++)
{
    s=s+a[j];
}
printf("%d\n",s);
}
return 0;

}
