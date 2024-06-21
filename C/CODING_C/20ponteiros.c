/*
> ponteiros são apontadores para endereços de memorias da variavel que queremos apontar
> podemos utilizar no lugar de matrizes para tornar nosso codigo mais eficiente
> podemos criar rotinas que suportam alocação de memoria
> e podemos fazer com que funções possam modificar seus parametros de chamada

> tipo *nome;
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    // lembrando se uma das variaveis do ponteiro for do tipo float ou outra, todas deverao seguir o mesmo tipo para evitar erros no sistema
    int variavel = 250; //variavel inteira com valor de 250
    int *ponteiro; // ponteiro para a variavel
    int exibe; // variavel que vai exibir o valor 250

    ponteiro = &variavel; // ponteiro esta apontando para o endereço da variavel

    exibe = *ponteiro; // 250

    printf("\n%d\n", exibe);
    
    system("PAUSE");
    return 0;
}