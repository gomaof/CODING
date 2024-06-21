/*
> FUNÇÕES

*/

#include <stdio.h>
#include <stdlib.h>

void soma(int n1, int n2);

int main(){
    int a;
    int b;
    printf("Digite o valor a: \n");
    scanf("%d", &a);
    getchar();

    printf("Digite o valor b: \n");
    scanf("%d", &b);
    getchar();

    soma(a,b);

    system("PAUSE");
    return 0;
}

void soma(int n1, int n2){
    int resultado = n1 + n2;
    printf("A soma de A + B = %d\n", resultado);
}