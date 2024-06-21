/*
> Ponteiros e Matrizes

> EX01:
    char matriz[80] = "Teste de string"; 
    char *point;

    // point = &matriz[6];    // aqui ele está apontando para a letra "d" da matriz
    point = matriz; // aqui ele vai puxar o inicio da matriz que seria a letra "T"
    
    point = point +2; // aqui ele está incrementando 2 letras a seguir, nesse caso a letra "s" vai aparecer na tela


    printf("\n%c\n", *point);

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // para alterar os caracteres ex: letras mais e min.

int main (){
// nesse caso o uso de ponteiros é para encontrar os elementos desejados dentro de uma matriz, se fosse apenas matriz ele iria percorrer ela toda para encontrar.
    char mat[30], *point;

    printf("Entre com uma frase MAIUSCULA: ");
    scanf("%s", &mat);
     // %s significa que ele quer a string completa (OU SEJA FRASE) 
     // se deixar em %c ele vai pegar o caractere
    getchar();

    point = mat; // iniciando com a primeira letra da string

    while(*point) printf("%c", tolower(*point++)); 
    // enquanto "*point" for verdadeiro ele vai imprimir "%c" caractere por caractere até finalizar a primeira frase da string que pediu no scanf

    printf("\n\n");
    

    system("PAUSE");
    return 0;
}

    /*
//ESSE É UM EXEMPLO COM MATRIZES APENAS, acima está com ponteiro

    char mat[30];
    int i;

    printf("Entre com uma frase em letra MAIUSCULA:\n=>");
    scanf("%s", &mat);
    getchar();
    
    printf("Frase minuscula: \n");
    for ( i = 0; i < mat[i]; i++) printf("%c", tolower(mat[i]));
    printf("\n\n");
    */