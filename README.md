# Easily work with dynamic strings in C

## First of all:

```c
#include "strutils.h" // change the path if you place the files somewhere else
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
strcutr(snew, " Wor"); // snew is now "Hello"

// print the string this way:
printf("%s", snew.str); 
printf("%s", s.str);

// output: Hello World!


// clear a string
strclr(s); // s is now ""

// at the end, free the memory in the heap
strfree(s);
strfree(snew);
```

# Have fun! :-)


