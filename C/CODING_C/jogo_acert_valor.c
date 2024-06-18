/*
> Aplicação: Jogo"Acerte o valor"
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    printf("\nVoce deve digitar um numero de 1 a 12 nesse jogo.\n");
    for (i = 0; i != 12; )
    {
        printf("Digite um numero correto: \n");
        scanf("%d", &i);
    }
    printf("Voce ACERTOU!\n\n");
    
    system("PAUSE");
    return 0;
}