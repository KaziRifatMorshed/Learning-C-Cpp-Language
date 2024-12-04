#include <stdio.h>
int main(void) {
  FILE *f = fopen("file2.txt", "a");
  char str[] =
      "aksdjfgakshfgliaesgflkguilawegpfuieaipufgewa;lfgeawruit\nfg;iowerua;fgl;"
      "uioasr fglawuilrelf\tugtwaiotgfoatfguioaysgfukyawrfgukarfgkiu";

  fputs(str, f);
  fclose(f);
} // done