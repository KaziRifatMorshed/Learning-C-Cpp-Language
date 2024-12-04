#include <stdio.h>

void papa(void)
{
    static int a= 10;
    int b = 20;
    a++; b++;
    printf("\n a=%d, b=%d",a,b);

}

int main()
{
    papa();papa();papa();papa();papa();papa();papa();papa();
}