/*
> Estrutura de dados
> STRUCT
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct componente{
    char tipo[20];
    char referencia[4];
    unsigned char num_ref;
    int valor;
    char unidade[10];
}comp;
// ou podemos criar assim:
// struct componente comp;
int main (){
    printf("Tipo do componente _________________: ");

    fflush(stdin); //entradas padrao para pegar os dados do teclado

    fgets(comp.tipo,20,stdin); //é aqui que pegamos o dados inserido pelo usuarios e armazenamos no variavel "comp" dentro do "tipo"

    printf("Referencia do componente ___________________: ");
    fflush(stdin);
    fgets(comp.referencia,4,stdin);

    printf("Numero da referencia ___________: ");
    scanf("%c", &comp.num_ref);
    getchar();

    printf("Valor do componente ________: ");
    scanf("%d", &comp.valor);
    getchar();

    printf("Unidade __________________: ");
    fflush(stdin);
    fgets(comp.unidade,10,stdin);

    // agora vamos imprimir na tela os resultados do usuario
    printf("\n\nCOMPONENTE CRIADO!\n\n");

    printf("%s\n", comp.tipo);
    printf("%s", comp.referencia);
    printf("%c", comp.num_ref);
    printf("\nVALOR: %d ", comp.valor);
    printf("%s",comp.unidade);


    system("PAUSE");
    return 0;
}