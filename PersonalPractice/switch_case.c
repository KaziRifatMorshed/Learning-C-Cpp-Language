#include "stdio.h"

void main()
{ //insult ultra pro max
    char inp[80];
    int p=0;
    printf("Enter your SSC result, we will inform you what Bangali Socity or Pasher Bashar Aunty will say:...");
    scanf("%s",inp);

    //p = ((int)inp[0] * 100) + ((int) inp[1]);


    switch (p) { //it will input integer , so it will convert the character to ASCII value
    //case 6543:
    case 'A':
    {
        printf("Shune Khub Khushi holam :) [note: just etotuku]");
        break;
    }
    case 'B':
    {
        printf("Amar gramaer barir pasher gram er chachato vai er fufato vai er khalato bon er meye A+ pelo ! tumi keno pelena ! :| ");
        break;
    }
    case 'C':
    {
        printf("Vabi janen, Amar Vayer meye din e 10 minute pore SSC te somaj e 100 marks peyeche! vaba jai egula ");
        break;
    }
    case 'D':
    {
        printf("Vabi, apnar chele na saradin boi niye thake ? Or result emon ken ??");
        break;
    }
    case 'E':
    {
        printf("Tumi to kono valo College e chance e paba na :( ");
        break;
    }
    case 'F':
    {
        printf("Oooo, Tumi Pass Koro nai ?!?! ");
        break;
    }
    default:
    {
        printf("Tor jibon dai loss ");
    }
    }
}