/*
> Vetores e o metodo bolha
> int vetor [tamanho]    é o numero de dados q ele conterá
EX01:
    int vetor[tam];
    unsigned i, numero;

    printf("Entrar com um numero inicial do vetor.");
    scanf("%d", &numero);
    getchar();

    for ( i = 0; i < tam; i++) vetor[i] = numero++;

    for ( i = 0; i < tam; i++) printf("Elemento %d = %d\n", i, vetor[i]);


EX02:
    // criar dois vetores e imprimir o produto escalar de ambos
    // vetor1 = 2, 3
    // vetor = 4, 8
    //produto = 2x4 + 3x8 = 32    

    int vetor1[tam], vetor2[tam], i, produto = 0;

    printf("Entrar com um valor do vetor 1: \n");
    for ( i = 0; i < tam; i++)
    {
        printf("Elemento %d\t", i);
        scanf("%d", &vetor1[i]);
        getchar();
    }

    printf("Entrar com um valor do vetor 2: \n");
    for ( i = 0; i < tam; i++)
    {
        printf("Elemento %d\t", i);
        scanf("%d", &vetor2[i]);
        getchar();
    }
    
    for ( i = 0; i < tam; i++) produto += vetor1[i] * vetor2[i];

    printf("O produto escalar e igual a %d\n", produto);
*/

#include <stdio.h>
#include <stdlib.h>
#define tam 5

#define falso 0
#define verdadeiro 1

int main (){

    // criar vetor e organizar os dados
    // os dados do vetor devem ser exibidos em forma crescente
    // nome bolha em C
    // criamos o define falso = 0 e verdadeiro = 1

    int vetor[tam], i, change = falso, final = tam, store;

    printf("Entre com valor de %d elementos\n", tam);
    for ( i = 0; i < tam; i++)
    {
        printf("Elemento %d ", i);
        scanf("%d", &vetor[i]);
        getchar();
    } do{
        change = falso;
        for ( i = 0; i < final; i++)
        {
            if (vetor[i] > vetor[i+1]) // ele este se o vetor inicial é maior que i+1
            // vamos supor que vetor[0] = 5, vetor[1] = 2
            {
                store = vetor[i]; // store = 5
                vetor[i] = vetor[i+1]; //vetor [0] = 2
                vetor[i+1] = store; // vetor [1] = 5
                change = verdadeiro; //enquanto for verd ele continua
            }   
        }
    } while (change);
    for ( i = 0; i < tam; i++) printf("%d\n", vetor[i]);
    
    system("PAUSE");
    return 0;
}