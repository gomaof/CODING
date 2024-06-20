/*
> PONTEIROS E STRINGS

> Sintaxe e da semantica do codigo

> Quando uma constante de string é usada em qualquer tipo de expressão, ela é tratada como PONTEIRO para o primeiro caractere da STRING

EX01:
    char *point;
    point = "Teste de string qualquer";

    printf(point);
    printf("\n");
*/
#include <stdio.h>
#include <stdlib.h>

int main (){

    char str[50];
    char *point;

    int i;

    printf("Entre com uma string: ");
    gets(str);

    // encontrar o primeiro espaço ou fim da string
    for ( i = 0; str[i] && str[i] !=' '; i++); 
    // encontramos o primeiro espaço na string

    point = &str[i];
    printf("\n");
    printf(point);
    printf("\n");


    system("PAUSE");
    return 0;
}