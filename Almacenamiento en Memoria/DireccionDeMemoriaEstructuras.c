/*
Este programa imprime muestra la direccion de memoria de
estructuras y arreglos utilizados en el programa

@author Diego Galnares
*/
#include<stdio.h>

typedef struct{
    int NumLlantas;
    char color[20];
    float kilometraje;
}Carro;

int main(){
    //Se inicializa la estructura en una variable llamada "kia"
    // esta recibe 3 parametros con los cuales llena su informacion
    Carro kia = {4,"rojo",123000.54};

    printf("+------------------------------------------------------+\n");
    printf("|      Direccion de memoria de las estructuras         |\n");
    printf("+------------------------------------------------------+\n");
    //Se utiliza '%p' para imprimir la direccion de memoria
    printf("\n - El tamaño de la estructura es de %d bytes y su direccion en memoria es: %p\n",sizeof(kia), &kia);
    printf("\n - Color: %s",kia.color);
    printf("\n - Numero de llantas: %d",kia.NumLlantas);
    printf("\n - Kilometraje: %f",kia.kilometraje);



    return 0;
}