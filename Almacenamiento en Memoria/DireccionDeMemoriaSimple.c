/*
Este programa imprime muestra la direccion de memoria de
las variables declaradas durante el programa

@author Diego Galnares
*/
#include<stdio.h>

int main(){
    //Se declaran variables, en este caso se inicializan con un valor
    // pero pueden no inicializarse y el resultado seria el mismo
    int variable1 = 1;
    float variable2 = 2.5;
    char variable3 = 'a';

    printf("+------------------------------------------------------+\n");
    printf("|      Direccion de memoria de las variables           |\n");
    printf("+------------------------------------------------------+\n");
    //Se utiliza '%p' para imprimir la direccion de memoria
    printf("\n - La direccion de memoria de la primer variable %d es: %p\n",variable1, &variable1);
    printf(" - La direccion de memoria de la segunda variable %f es: %p\n",variable2, &variable2);
    printf(" - La direccion de memoria de la tercer variable '%c' es: %p\n",variable3, &variable3);


    return 0;
}