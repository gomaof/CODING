/*
> comeco: 
    comando;
    comando 2;
    comando3;
   
   goto comeco;

   (como se fosse um while)
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

    int i = 0, j=1, resposta;
    int erros = 0, acertos = 0;
    char opcao;

    inicio:
        for ( j = 1; j < 10; j++)
        {
            printf("Qual e a resposta %d + %d?\n", i, j);
            scanf("%d", &resposta);
            getchar();

            if (resposta != (i+j)){
                erros++;
                printf("Reposta errada!\n");
            }
            else{
                acertos++;
                printf("RESPOSTA CORRETA!\n");
            }
            printf("\nACERTOS: %d\nERROS: %d\n\n", acertos, erros);
        }
    meio:
        printf("Deseja continuar respondendo?: S/N\n");
        opcao = (toupper(getche()));
        getchar();
        printf("\n");

        switch (opcao){
        case 'S':
            i++;
            goto inicio;
            break;
        
        case 'N':
            goto fim;
            break;
        
        default:
            printf("Opcao invalida! TENTE NOVAMENTE.\n");
            goto meio;
        }
    
    fim:
        printf("Programa encerrado!\n");
    system("PAUSE");
    return 0;
}