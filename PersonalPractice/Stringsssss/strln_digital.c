#include <stdio.h>
#include <string.h>

void main()
{
    char name[80];
    printf("input ur name and hit enter:");
    scanf("%s",&name);
    printf("your name has %d characters !!!", strlen(name));
}