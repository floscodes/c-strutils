# Easily work with dynamic strings in C

## First of all:

```
git clone https://github.com/floscodes/c-strutils
cd c-strutils
make
```

In your code:

```c
#include "./c-strutils/strutils.h" // change the path if you place the files somewhere else
```

## Further usage:

```c
// create a new string
char *s = strnew();

// add chars to a string
strpush(s, "Hello World!");

// cut a string
strcut(s, "llo "); // s is now "World!"

// cut a string from right
char *snew = strnew();
strpush(snew, "Hello World!");
strcutr(snew, " Wor"); // snew is now "Hello"

// join two strings
strjoin(s, snew, " "); // s is now "Hello World!"

// pop a substring from a string
char *s1 = strpop(s, " "); // s1 is "Hello", s is now " World!"

//join them again
strjoin(s, s1) // s is now "Hello World!" again

// pop substring from right
char *s2 = strpopr(s, " "); // s2 is "World!", s is now "Hello "

// clear a string
strclr(s); // s is now ""

```

# Have fun! :-)


