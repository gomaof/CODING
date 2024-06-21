/*
> MATRIZES
> tipo nome[dim1][dim2][dim3]...[dimN]    // ou seja permite diversas dimensoes
EX01:
#define DIML 3
#define DIMC 5
    int i, j;

    int matriz [DIML][DIMC];
    for ( i = 0; i < DIML; i++){
        for (j = 0; j < DIMC; j++){
            
            printf("\nDigite a posicao da matriz:\n=>");
            scanf("%d", &matriz[i][j]);
            getchar();
        }
    } for (i = 0; i < DIML; i++){
        for ( j = 0; j < DIMC; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
*/

#include <stdio.h>
#include <stdlib.h>

#define DIML 5
#define DIMC 30

int main (){


    int i, j;
    int nomes[DIML][DIMC];

    for ( i = 0; i < DIML; i++){
       printf("Entre com a linha %d\n=>", i); 
       scanf("%s", nomes[i]);
    }
    for ( i = 0; i < DIML; i++){
        printf("\nO nome %d e igual = ", i);
        printf(nomes[i]);
    }printf("\n");
    
    
    system("PAUSE");
    return 0;
}