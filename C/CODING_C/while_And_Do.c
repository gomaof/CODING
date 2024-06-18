/*
> se utilizarmos for (;;)    ele vai se tornar infinito
> while bem parecido com for mas se usarmos while(1)  ele se tornara infinito
> do while, o "do" o compilador entrara nesse laço ao menos uma vez, e caso o "while" seja true ele volta ao do até terminar o looping

*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int opcao = 1;
    do
    {
        printf("Digite a opcao 1 - sim, 2 - nao: \n");
        scanf("%d", &opcao);
        getchar();
    }
    while (opcao < 1 || opcao > 2 );

    printf("\nCodigo encerrado! ate a proxima\n\n");
    
    
    system("PAUSE");
    return 0;
}