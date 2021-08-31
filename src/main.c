#include "scanner.h"


int main (void){
    
    enum Tokens token;
    int i = 0;
    token = getToken();

    while(token != FDT){
    
        switch (token)
        {
        case SEP:
            printf("Separador: , \n");
            break;
        case CAD:
            printf("Cadena: %s \n",cadena); 
            break;
        }

        token = getToken();
    }

    printf("Fin De Texto: \n");

    return 0;
}

/*
while(cadena[i] != '\0'){

               printf("%c", cadena[i]); 
               i++;

            }

        printf("\n");
*/