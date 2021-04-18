/*
Este programa muestra el uso más simple de un apuntador


@author Diego Galnares
*/
#include<stdio.h>

int main(){
    //Variable
    int variable = 10;
    //Apuntador
    int *apuntador;

    printf("+------------------------------------------------------+\n");
    printf("|             Uso simple de Apuntadores                |\n");
    printf("+------------------------------------------------------+\n");

    //Uso
    apuntador=&variable;
    printf("\n - La variable tiene el valor original de: %d",variable);
    //Se modifica el valor a partir del apuntador
    *apuntador=100;
    
    printf("\n - El valor modificado a partir del apuntador es: %d",variable);
    return 0;
}