/*
Este programa muestra como funciona el paso por referencia y
por valor

@author Diego Galnares
*/
#include<stdio.h>
//Declarar funciones
void porValor(int var1);
void porReferenca(int *var1);

int main(){
    int var1 = 5;
    


    printf("+------------------------------------------------------+\n");
    printf("|           Paso por Valor & por Referencia            |\n");
    printf("+------------------------------------------------------+\n");
    
    //Por Valor
    printf("\n - Valor de la variable antes de paso por valor: %d\n",var1);
    porValor(var1);
    printf(" - Valor de la variable despues de paso por valor: %d\n",var1);
    printf("\n--------------------------------------------------------\n\n");
    
    //Por Referencia
    printf(" - Valor de la variable antes de paso por Referencia: %d\n",var1);
    porReferenca(&var1);
    printf(" - Valor de la variable despues de paso por Referencias: %d\n",var1);
    return 0;
}

void porValor(int var1){
    var1 = 10;
    printf(" - El nuevo valor es: %d (dentro de la funcion)\n",var1);
}
void porReferenca(int *var1){
    *var1 = 10;
    printf(" - El nuevo valor es: %d (dentro de la funcion)\n",*var1);
}