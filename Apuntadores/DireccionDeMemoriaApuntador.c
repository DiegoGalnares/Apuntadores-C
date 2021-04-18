/*
Este programa imprime muestra la direccion de memoria de
las variables y los apuntadores.

@author Diego Galnares
*/
#include<stdio.h>

int main(){
    //Variables normales
    int var1 = 5;
    float var2 = 2.33;
    char var3 = 'd';
    //Apuntadores
    int *ptr1;
    float *ptr2;
    char *ptr3;

    printf("+------------------------------------------------------+\n");
    printf("|           Aplicacion de los Apuntadores              |\n");
    printf("+------------------------------------------------------+\n");
    //Se utiliza '%p' para imprimir la direccion de memoria de las variables
    printf("\n - Direccion Int : %p",&var1);
    printf("\n - Direccion Float: %p",&var2);
    printf("\n - Direccion Char: %p\n",&var3);

    //Se asigna cada apuntador a su respectiva variable
    ptr1 = &var1;
    ptr2 = &var2;
    ptr3 = &var3;
    
    //Se imprimen los apuntadores
    printf("\n - Apuntador Int : %p",ptr1);
    printf("\n - Apuntador Float: %p",ptr2);
    printf("\n - Apuntador Char: %p\n",ptr3);

    return 0;
}  