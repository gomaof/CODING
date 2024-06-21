/*
> Expressões Aritiméticas com ponteiros

> aritimetica com ponteiros permitem adição ou subtração

EX01:
    int teste;
    int *point1, *point2;

    teste = 500;
    point1 =&teste;
    point2 = point1;

    printf("\n No local %p ",point2); // endereço teste    // &p siginifica o endereço armazenado no sistema

    printf(" Encontra-se o valor %d \n", *point2); // o valor do teste

*/

#include <stdio.h>
#include <stdlib.h>

int main (){
   int *itpoint;
   char *chpoint; // podemos aplicar nos outros essa formula também abaixo
                // se aplicarmos chpoint = chpoint + 9;
                // seria a mesma coisa que (1byte x 9 = 9bytes)
   float *flpoint;
   short *shpoint;

   printf("\n %d \n", itpoint); // endereço do ponteiro inteiro
   itpoint++; // se usarmos -- ele volta 4 bytes e assim sucessivamente
   printf("\n %d \n", itpoint); // endereço do ponteiro deslocado em 4 bytes

   printf("\n %d \n", chpoint); // endereço do ponteiro inteiro
   chpoint++;
   printf("\n %d \n", chpoint); // endereço do ponteiro deslocado em 1 bytes

   printf("\n %d \n", flpoint); // endereço do ponteiro inteiro
   flpoint++;
   printf("\n %d \n", flpoint); // endereço do ponteiro deslocado em 4 bytes

   printf("\n %d \n", shpoint); // endereço do ponteiro inteiro
   shpoint++;
   printf("\n %d \n", shpoint); // endereço do ponteiro deslocado em 2 bytes

    system("PAUSE");
    return 0;
}