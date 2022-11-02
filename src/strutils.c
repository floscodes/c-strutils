#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "strutils.h"

string strnew() {
    string s;
    s.str = malloc(sizeof(char));
    return s;
}

void strpush(string dest, char* src) {
    dest.str=realloc(dest.str, sizeof(char)*strlen(dest.str) + sizeof(char)*strlen(src));
    strcat(dest.str, src);
}

void strcut(string str, char* del) {
    char *ptr = strstr(str.str, del) + strlen(del);
    if (ptr) {
        str.str=realloc(str.str, sizeof(char)*strlen(ptr)+1);
        strcpy(str.str, ptr);
    }
}

void strcutr(string str, char* del) {
    char* ptr_end = strstr(str.str, del);
    if (ptr_end) {
        *ptr_end='\0';
        str.str = realloc(str.str, sizeof(char)*strlen(str.str)+1);
    }
}

string strclone(string str) {
    char *strnew = strdup(str.str);
    string snew = {strnew};
    return snew;
}

void strclr(string str) {
    str.str = realloc(str.str, sizeof(char));
    strcpy(str.str, "");
}

void strfree(string str) {
    free(str.str);
    str.str = NULL;
}
