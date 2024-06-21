/*
> ATRIBUIÇÕES E MATRIZES COM ESTRUTURAS


*/
/*struct componente{
    char tipo[20];
    char referencia[4];
    unsigned char num_ref;
    int valor;
    char unidade[10];
}comp/*, matriz[100];*/          
        // temos essas duas opções
//struct componente matriz[100];

// para acessar um campo especifico:

// printf ("%lu", matriz[2].valor);


#include <stdio.h>
#include <stdlib.h>

int main (){
    struct minha_estrutura{
        int inteiro;
        double flutuante;
    }exemplo1, exemplo2;
    // EX02:
    exemplo2.flutuante = 55.7;
    exemplo1 = exemplo2;

    printf("%lf \n", exemplo1.flutuante);
   

    system("PAUSE");
    return 0;
}   /* EX01:

    exemplo1.inteiro = 100;

    exemplo2 = exemplo1; // atribuindo o valor
    
    printf("%d\n", exemplo2.inteiro); // mostra a variavel 100 do tipo inteiro
*/
    