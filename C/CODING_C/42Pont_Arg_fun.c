/*
> PONTEIROS COMO ARGUMENTOS PARA FUNÇÕES
*/

#include <stdio.h>
#include <stdlib.h>

void change(int *x, int *y);

int main(){
    
    int num1, num2;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    getchar();
    printf("Digite outro numero: \n");
    scanf("%d", &num2);
    getchar();

    printf("O valor digitado inicialmente foi: %d e %d \n", num1, num2);
    
    change(&num1, &num2);

    printf("\nO valor alterado com ponteiro foi: %d e %d\n", num1, num2);
    

    system("PAUSE");
    return 0;
}
void change(int *x, int *y){
    int temp;

    temp = *x; // salvando o conteudo armazenado no endereço apontado por x
    *x = *y; // armazena o conteudo de y em x;
    *y = temp; // armazena o conteudo de temp em y.
}