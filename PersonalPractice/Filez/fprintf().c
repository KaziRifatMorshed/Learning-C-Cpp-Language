#include <stdio.h>
int main(void) {
  FILE *f = fopen("file1.txt", "r+");

  fprintf(f, ".H.e.l.l.o. .W.o.r.l.d.,.m.e.a.w.!.");
  fclose(f);
}

/*
first e jehetu ei nam er kono file silo na tai r+ kaj korsilo na
w+ deoar por kaj kortese
lekha change korar por output text er ei obostha hoise
ya Hell World!eaw !

r+ thakay   ya Hell World!eaw !
w+ thakay   ya Hell World!
W+ dile full file override hoy, r+ thakle shudhu oi position er char gulo
override hoy

*/