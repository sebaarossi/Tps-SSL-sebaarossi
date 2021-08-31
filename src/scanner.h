#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


enum Tokens {
    FDT = 1,
    SEP = 2,
    CAD = 3,
};

int getToken ();
char cadena [100];

#endif