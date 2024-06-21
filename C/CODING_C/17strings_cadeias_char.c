/*
> STRINGS
> para mais strings temos exemplos em imagem na pasta /img/c/strings.png

*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[51], sobrenome[51]; 

    int comp1, comp2;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    comp1 = strlen(nome); //strlen     calcula o Nº caracteres
    getchar();


    printf("Digite seu sobrenome: \n");
    scanf("%s", &sobrenome);
    comp2 = strlen(sobrenome);
    getchar();

    strcat(nome, " ");
    strcat(nome, sobrenome); // strcat     concatena origem no final do destino

    printf("Ola %s!\n", nome);
    printf("Seu nome tem %d caracteres e seu sobrenome tem %d caracteres\n", comp1,comp2);

    printf("\n");
    printf(strlwr(nome)); // strlwr converte cadeia para minusculas
    printf("\n");

    strcpy(nome, "gomao"); // strcpy copia o nome e substitue por outro
    printf(nome);
    printf("\n");
    
    system("PAUSE");
    return 0;
}