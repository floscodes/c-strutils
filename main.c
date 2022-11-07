#include <stdio.h>
#include <stdlib.h>
#include "strutils.h"


int main (void) {
    char *s = strnew();
    strpush(s, "Hello");
    char *s2 = strnew();
    strpush(s2, "World!");
    strjoin(s, s2, " ");
    printf("%s", s);
    free(s);
    return 0;
}