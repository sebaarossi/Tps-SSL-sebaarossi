#include "scanner.h"


int getToken (){

    char c;
    int salida;

    c = getchar();

    while(isspace(c)){
        c = getchar();
    };
    
    if(c == EOF){

        salida = FDT;

    }else if(c == ','){

        salida = SEP;

    }else{

        int i = 0;
    

        while((c != EOF) && (c != ',') && !(isspace(c))){
            
            cadena[i] = c;
            i++;
            c = getchar();

        };
        ungetc(c, stdin);
        cadena[i] = '\0';
        salida = CAD; 
    }

    return salida;
}