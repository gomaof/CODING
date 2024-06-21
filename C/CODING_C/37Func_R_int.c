/*
> FUNÇÕES QUE RETORNAM VALORES INTEIROS
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2);
int subt(int num1, int num2);
int mult(int num1, int num2);
int divisao(int num1, int num2);

int main(){
    
    int a = 5;
    int b = 10;

    printf("O resultado de A + B = %d\n", soma(a, b));
    printf("O resultado de A - B = %d\n", subt(a, b));
    printf("O resultado de A * B = %d\n", mult(a, b));
    printf("O resultado de A / B = %d\n", divisao(a, b));

    system("PAUSE");
    return 0;
}

int soma(int num1, int num2){
    return (num1 + num2);
//  resultado = num1 + num2;
//  return resultado;

//  seria o mesmo resultado
}
int subt(int num1, int num2){
    return (num1 - num2);
}
int mult(int num1, int num2){
    return (num1 * num2);
}
int divisao(int num1, int num2){
    return (num1 / num2);
}