#include <stdio.h>
#include <string.h>
struct player {
  char pname[20];
} pl;

// function returning a pointer
char *play(struct player *temp_pl) {
  strcat(temp_pl->pname, " John");
  return temp_pl->pname;
}

int main(void) {
  strcpy(pl.pname, "David");
  printf("%s\n%s", pl.pname, play(&pl)); // STRANGE BEHAVIOUR
  printf("%s\n", pl.pname);
  // char *ptr = play(&pl);
  // printf("%s\n", pl.pname);
  // printf("%s", ptr);
}