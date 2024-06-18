/*
> Aplicações não convencionais
> Utilizar mais de uma variavel no laço for
> Imprimir os numeros pares de 0 a 100
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j;

    for (i = 0, j = 0; i+j <= 100; i++, j++){
        printf("\n%d\n", i+j);
    }

    system("PAUSE");
    return 0;
    
}