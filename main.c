#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strutils.h"

int main() {
    string s = strnew();
    strpush(s, "Test1");
    strpush(s, " Test2");
    strcut(s, "1");
    printf("%s", s.chrs);
    return 0;
}