#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "strutils.h"

char *strnew() {
    char *s = malloc(sizeof(char));
    return s;
}

void strpush(char *dest, char* src) {
    dest=realloc(dest, sizeof(char)*strlen(dest) + sizeof(char)*strlen(src) + 1);
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

void strjoin(char *str1, char *str2, char *sep) {
    str1 = realloc(str1, (sizeof(char)*strlen(str1)) + (sizeof(char)*strlen(sep)) + (sizeof(char)*strlen(str2)+1));
    strcat(str1, sep);
    strcat(str1, str2);
}

void strepl(char *str, char *substr, char *del) {
    if (strstr(str, substr) != NULL) {
    char *s = strdup(str);
    strcutr(str, substr);
    strcut(s, substr);
    strjoin(str, s, del);
    free(s);
    }
}

void strclr(char *str) {
    str = realloc(str, sizeof(char));
    strcpy(str, "");
}

