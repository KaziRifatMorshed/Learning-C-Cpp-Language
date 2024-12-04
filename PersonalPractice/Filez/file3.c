// WRITE and READ file

// The fprintf() function is used to write set of characters into file. It sends
// formatted output to a stream.

#include <stdio.h>
int main(void) {
  char ch;
  FILE *f = fopen("halum.txt", "w+");
  fprintf(f,
          "[writing data into file] Hello World\n by fprintf\tat line 10\n...");
  // will overwrite
  fprintf(f,
          "abba dabba will be concateneted as it is after the function before");

  rewind(f);
  while (fscanf(f, "%c", &ch) != EOF) {
    printf("%c.", ch);
  }
  puts("\n\n");
  rewind(f);
  char str[100];
  while (fscanf(f, "%s", str) != EOF) {
    printf("_%s", str); // SKIPPED ALL WHITESPACE CHARACTERS
  }

  fclose(f);
  // end
}
/*
noobcodermsi@noobcodermsi-ms7c52 ~/D/G/L/P/F/output (master)> ./"file3"
[.w.r.i.t.i.n.g. .d.a.t.a. .i.n.t.o. .f.i.l.e.]. .H.e.l.l.o. .W.o.r.l.d.
. .b.y. .f.p.r.i.n.t.f. .a.t. .l.i.n.e. .1.0.
.......a.b.b.a. .d.a.b.b.a. .w.i.l.l. .b.e. .c.o.n.c.a.t.e.n.e.t.e.d. .a.s.
.i.t. .i.s. .a.f.t.e.r. .t.h.e. .f.u.n.c.t.i.o.n. .b.e.f.o.r.e.


_[writing_data_into_file]_Hello_World_by_fprintf_at_line_10_...abba_dabba_will_be_concateneted_as_it_is_after_the_function_before⏎
*/