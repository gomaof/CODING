/*Sistema de banco dedados simples
seleciona vendedores por região*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    char regiao, vendedor;
    printf("Regioes: Leste, Oeste, Norte e Sul\n");
    printf("Informe a primeira letra da regiao: ");

    regiao = getche(); /*Semelhante a scanf/ ela le um comando do teclado*/
    regiao = toupper(regiao); /*Aumenta qualquer carectere para maiusculo*/
    printf("\n");

    switch (regiao){
    case 'L':
        printf("Vendedores: Ricardo, José e Mariana\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor){
            case 'R':
                printf("Vendas Total: R$%d\n", 5000);
                break;
            case 'J':
                printf("Vendas Total: R$%d\n", 6900);
                break;
            case 'M':
                printf("Vendas Total: R$%d\n", 7800);
                break;
            
            default:
                printf("Letra incorreta!");
                break;
        }
        break;

    case 'O':
        printf("Vendedores: Amanda, Joao e Marina\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor){
            case 'A':
                printf("Vendas Total: R$%d\n", 800);
                break;
            case 'J':
                printf("Vendas Total: R$%d\n", 997);
                break;
            case 'M':
                printf("Vendas Total: R$%d\n", 1350);
                break;
            
            default:
                printf("Letra incorreta!");
                break;
        }
        break;
    case 'N':
        printf("Vendedores: Paola, Jennifer e Kaua\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor){
            case 'P':
                printf("Vendas Total: R$%d\n", 5000);
                break;
            case 'J':
                printf("Vendas Total: R$%d\n", 6900);
                break;
            case 'K':
                printf("Vendas Total: R$%d\n", 7800);
                break;
            
            default:
                printf("Letra incorreta!");
                break;
        }
        break;
    case 'S':
        printf("Vendedores: Maria, Carlos e Wesley\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor){
            case 'M':
                printf("Vendas Total: R$%d\n", 7655);
                break;
            case 'C':
                printf("Vendas Total: R$%d\n", 9000);
                break;
            case 'W':
                printf("Vendas Total: R$%d\n", 4350);
                break;
            
            default:
                printf("Letra incorreta!");
                break;
        }
        break;
    default:
        printf("Opcao Incorreta!");
        break;
    }

    system("PAUSE");
    return 0;
}