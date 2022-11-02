# Easily work with dynamic strings in C

## First of all:

```c
#include "strutils.h"
```

## Further usage:

```c
// create a new string
string s = strnew();

// add chars to a string
strpush(s, "Hello World!");

// clone a string
string snew = strclone(s);

// cut a string
strcut(s, "llo"); // s is now " World!"

// cut a string from right
strcutr(s, "llo"); // s is now "He"

// clear a string
strclr(s); // s is now ""

// print the string this way:
printf("%s", s.str);
printf("%s", s2.str);

// at the end, free the memory in the heap
strfree(s);
strfree(s2);
```

# Have fun! :-)


