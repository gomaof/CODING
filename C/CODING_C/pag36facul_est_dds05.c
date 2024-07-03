#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int tam;
    int *vetor1;
    int *vetor2;

    printf ("Escolha o tamanho do vetor: ");
    scanf("%d", &tam);

    printf("Elevado ao quadrado:\n");
    vetor1 = (int *) malloc(sizeof (int)*tam);
    for (int i = 0; i < tam; i++) {
        vetor1[i] = pow(2,i);
        printf ("Posicao %d: %d\n", i, vetor1[i]);
    }

    printf("\nElevado ao Cubo:\n");
    vetor2 = (int *) malloc(sizeof (int)*tam);
    for (int i = 0; i < tam; i++) {
        vetor2[i] = pow(3,i);
        printf ("Posicao %d: %d\n", i, vetor2[i]);
    }

    system("Pause");
    return(0);
}