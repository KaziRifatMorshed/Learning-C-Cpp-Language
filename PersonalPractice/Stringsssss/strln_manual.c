    //#include <stdio.h>
    //
    //    int main()
    
        char name[80];
        int i=0;
        printf("write your name (without space) and hit enter: ");
        scanf("%s", name);
    
        while (name[i] != '\0') {
            i++;
        }
        printf("there are total %d characters in %s",i,name);
        return 0;
    }