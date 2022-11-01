#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "strutils.h"

string strnew() {
    string s;
    s.chrs = malloc(sizeof(char));
    return s;
}

void strpush(string dest, char* src) {
    dest.chrs=realloc(dest.chrs, sizeof(char)*strlen(dest.chrs) + sizeof(char)*strlen(src));
    strcat(dest.chrs, src);
}

char* strget(string str) {
    return str.chrs;
}

void strcut(string str, char* del) {
    char *ptr = strstr(str.chrs, del) + strlen(del);
    if (ptr) {
        str.chrs=realloc(str.chrs, sizeof(char)*strlen(ptr));
        strcpy(str.chrs, ptr);
    }
}

void strcutr(string str, char* del) {
    char* ptr_end = strstr(str.chrs, del);
    if (ptr_end) {
        *ptr_end='\0';
        str.chrs = realloc(str.chrs, sizeof(char)*strlen(str.chrs)+1);
    }
}

void strclr(string str) {
    str.chrs = realloc(str.chrs, sizeof(char));
    strcpy(str.chrs, "");
}

void strfree(string str) {
    free(str.chrs);
}
