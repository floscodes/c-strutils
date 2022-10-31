#ifndef DYNSTR_H
#define DYNSTR_H
typedef struct {
    char* chrs;
} string;
string strnew();
void strpush();
char* strget();
void strcut();
void strcutr();
void strclr();
void strfree();
#endif