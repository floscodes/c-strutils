#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "strutils.h"

char *strnew() {
    char *s = malloc(sizeof(char));
    return s;
}

void strpush(char *dest, char* src) {
    dest=realloc(dest, sizeof(char)*strlen(dest) + sizeof(char)*strlen(src));
    strcat(dest, src);
}

void strcut(char *str, char* del) {
    char *ptr = strstr(str, del) + strlen(del);
    if (ptr) {
        str=realloc(str, sizeof(char)*strlen(ptr)+1);
        strcpy(str, ptr);
    }
}

void strcutr(char *str, char* del) {
    char* ptr_end = strstr(str, del);
    if (ptr_end) {
        *ptr_end='\0';
        str = realloc(str, sizeof(char)*strlen(str)+1);
    }
}

void strclr(char *str) {
    str = realloc(str, sizeof(char));
    strcpy(str, "");
}

