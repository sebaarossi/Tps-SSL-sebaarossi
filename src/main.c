#include "scanner.h"


int main (void){
    
    int token,i;
    token = getToken();

    while(token != FDT){
    
        switch (token)
        {
        case SEP:
            printf("Separador: , \n");
            break;
        case CAD:
            printf("Cadena: "); 
            while(cadena[i] != '\0'){

               printf("%c", cadena[i]); 
               i++;

            }
            printf("\n");
            break;
        }

        token = getToken();
    }

    printf("Fin De Texto: \n");

    return 0;
}
