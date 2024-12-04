#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *x = malloc(3 * sizeof(int));
  x[0] = 77, x[1] = 25, x[2] = 65;
  printf("%p %p %p", &x[0], &x[1], &x[2]);
  // free(x);
  int *y = malloc(3 * sizeof(int));
  y[0] = 77, y[1] = 25, y[2] = 65;
  printf("\n%p %p %p", &y[0], &y[1], &y[2]);
  free(y);
}

/*
noobcodermsi@noobcodermsi-ms7c52 ~/D/G/L/P/output (master)> valgrind
./"ValgrindTest"
==228364== Memcheck, a memory error detector
==228364== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==228364== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==228364== Command: ./ValgrindTest
==228364==
0x4a71040 0x4a71044 0x4a71048
0x4a714d0 0x4a714d4 0x4a714d8==228364==
==228364== HEAP SUMMARY:
==228364==     in use at exit: 12 bytes in 1 blocks
==228364==   total heap usage: 3 allocs, 2 frees, 1,048 bytes allocated
==228364==
==228364== LEAK SUMMARY:
==228364==    definitely lost: 12 bytes in 1 blocks
==228364==    indirectly lost: 0 bytes in 0 blocks
==228364==      possibly lost: 0 bytes in 0 blocks
==228364==    still reachable: 0 bytes in 0 blocks
==228364==         suppressed: 0 bytes in 0 blocks
==228364== Rerun with --leak-check=full to see details of leaked memory
==228364==
==228364== For lists of detected and suppressed errors, rerun with: -s
==228364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/

/*
noobcodermsi@noobcodermsi-ms7c52 ~/D/G/L/P/output (master)> valgrind
./"ValgrindTest"
==162158== Memcheck, a memory error detector
==162158== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==162158== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==162158== Command: ./ValgrindTest
==162158==
0x4a71040 0x4a71044 0x4a71048
0x4a714d0 0x4a714d4 0x4a714d8==162158==
==162158== HEAP SUMMARY:
==162158==     in use at exit: 0 bytes in 0 blocks
==162158==   total heap usage: 3 allocs, 3 frees, 1,048 bytes allocated
==162158==
==162158== All heap blocks were freed -- no leaks are possible
==162158==
==162158== For lists of detected and suppressed errors, rerun with: -s
==162158== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/