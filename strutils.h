#ifndef DYNSTR_H
#define DYNSTR_H
typedef struct {
    char *str;
} string;
string strnew();
void strpush();
void strcut();
void strcutr();
void strclr();
string strclone();
void strfree();
#endif