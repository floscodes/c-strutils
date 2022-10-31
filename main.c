#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strutils.h"

int main() {
    string s = strnew();
    strpush(s, "Test1");
    strpush(s, " Test2");
    strcut(s, "1");
    printf("%s", s);
    return 0;
}

/*
    char s[]="Testlauf";
    char* ptr1 = s;
    char* ptr2 = &s[4];
    while (ptr1 != ptr2+1) {
        printf("\n%s", ptr1);
        ptr1++;
    }
*/