#include <stdio.h>
#include <string.h>

int main(void) {
  // ফানংশনের সেকেন্ড আর্গুমেন্ট নিজে বাদ চলে যায়
  // সেকেন্ড আর্গুমেন্ট হিসেহে স্পেস আসলে সেটা বাদ পরে গেলে ক্ষতি নেই
  // সেকেন্ড আর্গুমেন্ট সোর্সে খুজে পাওয়ার পর সেটার পরের পয়েন্টার পাঠিয়ে দেবে

  // char str[] = "___I_am_an_Dis co_Dancer,_Biri_Kha
  // lei_hoy_cancer\nreal_cancer";
  char str[] = "I am an Disco Dancer, Biri Khalei hoy cancer\nreal cancer";

  char *token = strtok(str, " ");
  while (token != NULL) {
    printf("%s(%lu)+", token, strlen(token));
    // token = strtok(((void *)0), " ");
    token = strtok(NULL, " ,\n");
    // token = strtok(NULL, " "); // Now, think !
    //
  }
} // COMPLETED
/*
Sure, I can teach you about `strtok()`.

The `strtok()` function is a string manipulation function in C programming that
breaks a string into a series of tokens using the specified delimiters. It
returns a pointer to the first token found in the string, and it updates a
static pointer to the next token.

**Syntax**

The syntax for the `strtok()` function is as follows:

```c
char *strtok(char *str, const char *delim);
```

Where:

* `str` is a pointer to the string to be parsed.
* `delim` is a pointer to a string of delimiters.

**Return Value**

The `strtok()` function returns a pointer to the first token found in the
string, or `NULL` if there are no more tokens to be found.

**Example**

The following code shows how to use the `strtok()` function to parse a string
into tokens:

```c
#include <stdio.h>

int main() {
    char input[] = "This is a string with spaces";
    char *token;

    token = strtok(input, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
```

This code will print the following output:

```
This
is
a
string
with
spaces
```

**Safety**

The `strtok()` function is not thread-safe, so it should not be used in
multithreaded applications. The `strtok()` function also modifies the string
that is being parsed, so it should not be used on a string that is being shared
between multiple threads.

**Alternatives**

The `strtok_r()` function is a reentrant version of the `strtok()` function that
can be used safely in multithreaded applications. The `strtok_r()` function also
does not modify the string that is being parsed, so it can be used on a string
that is being shared between multiple threads.

**Conclusion**

The `strtok()` function is a powerful tool for parsing strings into tokens.
However, it is important to be aware of its limitations and to use it safely. If
you are writing a multithreaded application, you should use the `strtok_r()`
function instead.

I hope this helps!*/