#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strutils.h"

int main() {
    string s = strnew();
    strpush(s, "Test1");
    strpush(s, " Test2");
    string s2 = strclone(s);
    strcut(s, "1");
    printf("%s\n\n%s", s.str, s2.str);
    return 0;
}