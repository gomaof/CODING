/*
> MATRIZES COMO PARAMETROS PARA FUNÇÕES

> Uma matriz nunca pode ser passada inteira, e sim, o endereço dela, que no caso seria o incio aonde ela começa
*/

#include <stdio.h>
#include <stdlib.h>

void ex1(int mat1[10]);
void ex2(int mat2[]);
void ex3(int *point);

int main(){
    
    int t[10];
    int i;
    for ( i = 0; i < 10; i++) t[i] = i;

    ex1(t);

    printf("\n");

    ex2(t);

    printf("\n");

    ex3(t);

    printf("\n");

    system("PAUSE");
    return 0;
}

void ex1(int mat1[10]){
    int i;
    for ( i = 0; i < 10; i++) printf("%d ", mat1[i]);
}

void ex2(int mat2[]){
    int i;
    for ( i = 0; i < 10; i++) printf("%d ", mat2[i]);
}

void ex3(int *point){
    int i;
    for ( i = 0; i < 10; i++) printf("%d ", point[i]);
}
