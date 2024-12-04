    //#include <stdio.h>
    //
    //    int main()
    //{
    //    char name[80];
    //    int i=0;
    //    printf("write your name (without space) and hit enter: ");
    //    scanf("%s", name);
    //
    //    while (name[i] != '\0') {
    //        i++;
    //    }
    //    printf("there are total %d characters in %s",i,name);
    //    return 0;
    //}
    //

    //Thanks to Seam Vaijan
   #include <stdio.h>
   #include <string.h>
   
   int main()
   {
    char name[100];
    int i = 0, count = 0;
    
    printf("Enter your name (spaces allowed):\n");
    scanf("%[^\n]", name);
    
    while (name[i] != '\0') { // Loop চালানোর জন্য একটা আর কাউন্ট করার জন্য আরেকটা বাকেট লাগবে 
        if (name[i] != ' ') 
        {count++;}
     i++;}
    
    printf("Number of characters in the name: %d\n", count);
    
    return 0;
   }   
