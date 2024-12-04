#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *p;
  char *buf1;
  char *buf2;
  size_t len, maxsize;

  maxsize = strlen("Hello ") + strlen("world") + strlen("!") + 1;
  buf1 = malloc(sizeof(*buf1) * maxsize);
  if (buf1 == NULL)
    err(EXIT_FAILURE, "malloc()");
  buf2 = malloc(sizeof(*buf2) * maxsize);
  if (buf2 == NULL)
    err(EXIT_FAILURE, "malloc()");

  p = buf1;
  p = stpcpy(p, "Hello ");
  p = stpcpy(p, "world");
  p = stpcpy(p, "!");
  len = p - buf1;

  printf("[len = %zu]: ", len);
  puts(buf1); // "Hello world!"
  free(buf1);

  strcpy(buf2, "Hello ");
  strcat(buf2, "world");
  strcat(buf2, "!");
  len = strlen(buf2);

  printf("[len = %zu]: ", len);
  puts(buf2); // "Hello world!"
  free(buf2);

  exit(EXIT_SUCCESS);
}
/*
The code you provided is a C program that demonstrates the difference between
the `stpcpy()` and `strcpy()` functions.

**Line-by-line explanation:**

```c
#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```

These lines include the header files needed for the program to compile and run.

```c
int main(void) {
```

This line marks the beginning of the main function, which is the entry point for
all C programs.

```c
  char *p;
  char *buf1;
  char *buf2;
  size_t len, maxsize;
```

These lines declare four variables:

* `p`: A pointer to a character.
* `buf1`: A pointer to a character array.
* `buf2`: Another pointer to a character array.
* `len`: An unsigned integer variable.
* `maxsize`: Another unsigned integer variable.

```c
  maxsize = strlen("Hello ") + strlen("world") + strlen("!") + 1;
```

This line calculates the maximum size needed for the `buf1` and `buf2` character
arrays. It does this by adding the lengths of the three strings that will be
copied into the arrays, plus 1 for the terminating null character.

```c
  buf1 = malloc(sizeof(*buf1) * maxsize);
  if (buf1 == NULL)
    err(EXIT_FAILURE, "malloc()");
  buf2 = malloc(sizeof(*buf2) * maxsize);
  if (buf2 == NULL)
    err(EXIT_FAILURE, "malloc()");
```

These lines allocate memory for the `buf1` and `buf2` character arrays. The
`malloc()` function returns a pointer to the allocated memory, or `NULL` if the
allocation failed. The program uses the `err()` function to exit with an error
message if the allocation fails.

```c
  p = buf1;
```

This line assigns the `buf1` pointer to the `p` pointer.

```c
  p = stpcpy(p, "Hello ");
```

This line copies the string "Hello " to the `buf1` character array, starting at
the position pointed to by `p`. The `stpcpy()` function returns a pointer to the
terminating null character of the copied string.

```c
  p = stpcpy(p, "world");
```

This line copies the string "world" to the `buf1` character array, starting at
the position pointed to by `p`. The `stpcpy()` function returns a pointer to the
terminating null character of the copied string.

```c
  p = stpcpy(p, "!");
```

This line copies the string "!" to the `buf1` character array, starting at the
position pointed to by `p`. The `stpcpy()` function returns a pointer to the
terminating null character of the copied string.

```c
  len = p - buf1;
```

This line calculates the length of the string in the `buf1` character array. It
does this by subtracting the address of the first character of the array from
the address of the terminating null character.

```c
  printf("[len = %zu]: ", len);
  puts(buf1); // "Hello world!"
```

These lines print the length of the string in the `buf1` character array,
followed by the string itself.

```c
  free(buf1);
```

This line frees the memory allocated for the `buf1` character array.

```c
  strcpy(buf2, "Hello ");
```

This line copies the string "Hello " to the `buf2` character array. The
`strcpy()` function returns a pointer to the destination string.

```c
  strcat(buf2, "world");
```

This line appends the string "world" to the `buf2` character array. The
`strcat()` function returns a pointer to the destination string.

```c
  strcat(buf2, "!");
```

This line appends the string "!" to the `buf2` character array. The `strcat()`
function returns a pointer to the destination string.

```c
  len = strlen(buf2);
```

This line calculates the length of the string in the `buf2` character array. It
does this by calling the*/