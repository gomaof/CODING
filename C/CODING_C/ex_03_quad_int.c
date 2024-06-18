/*
> Utilziar funções
> Programa que calcule o quadrado de numeros inteiros
> Solicita ao usuario numeros inteiros e vai retornando  o quadrado dos mesmos
> condição para encerrar o programa: Digitar o numero 0
> Utilizando o laço for
*/

#include <stdio.h>
#include <stdlib.h>

/*Funções auxiliares*/
void display();
int leitura();
void square();

int main (){

    int valor;

    for (display(); valor = leitura(); display())
    {
        square(valor);
    }
    

    system("PAUSE");
    return 0;
}

void display(){
    printf("Digite zero para sair\n");
    printf("Ou informe o inteiro para calcular o seu quadrado: ");
}
int leitura(){
    int t;
    scanf("%d", &t); /*Armazena o numeor digitado pelo usuario para calcular o seu quadrado*/
    return t;
}
void square(int numero){
    printf("%d\n", numero * numero); /*Eleva os numeros ao quadrado*/
}