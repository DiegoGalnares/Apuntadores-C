/*
Este programa imprime el tamaño de las variables en bytes

@author Diego Galnares
*/
#include<stdio.h>

int main(){
    printf("+------------------------------------------------------+\n");
    printf("| Tamaño en bytes de los diferentes tipos de variables |\n");
    printf("+------------------------------------------------------+\n");
    //La funcion 'sizeof' se encarga de obtener el tamaño de las variables 
    //Enteros
    printf("\n - El tamaño de un INT es : %d bytes", sizeof(int));
    printf("\n - El tamaño de un LONG INT  es : %d bytes", sizeof(long int));
    //Decimales
    printf("\n - El tamaño de un FLOAT es : %d bytes", sizeof(float));
    printf("\n - El tamaño de UN DOUBLE es : %d bytes", sizeof(double));
    //Caracter
    printf("\n - El tamaño de un CHAR es : %d bytes", sizeof(char));
    

    return 0;
}