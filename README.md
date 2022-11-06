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
strcut(s, "llo"); // s is now " World!"

// cut a string from right
char *snew = strnew();
strpush(snew, "Hello World!");
strcutr(snew, " Wor"); // snew is now "Hello"


// clear a string
strclr(s); // s is now ""

```

# Have fun! :-)


