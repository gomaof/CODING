#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escolha(int opcao);
void codifica(char frase[]);
void descodifica(char frase[]);


int main() {
    int opcao;
    do{ 
        system("cls");
        printf("\n\n");
        printf("  /$$$$$$    /$$$$$$$$   /$$$$$$$$    /$$$$$$    /$$$$$$$       \n"
            " /$$__  $$  | $$_____/  | $$_____/   /$$__  $$  | $$__  $$   \n"
            "| $$  \\__/  | $$        | $$        | $$  \\ $$  | $$  \\ $$     \n" 
            "| $$        | $$$$$$    | $$$$$$$$  | $$$$$$$$  | $$$$$$$/            \n"
            "| $$        | $$___/     \\____  $$  | $$__  $$  | $$__  $$  \n"
            "| $$    $$  | $$         _____| $$  | $$  | $$  | $$  | $$  \n"
            "|  $$$$$$/  | $$$$$$$$  | $$$$$$$$  | $$  | $$  | $$  | $$ \n"
            " \\______/   |________/  |________/  |__/  |__/  |__/  |__/      \n"
            " \n"
            "      /$$$$$$     /$$$$$$$    /$$$$$$$$     /$$$$$$$$            \n"
            "     /$$__  $$   /$$  __ $$  | $$  __ $$   | $$_____/       \n"
            "    | $$  \\__/  | $$ |  |$$  | $$ |  \\ $$  | $$         \n"
            "    | $$        | $$ |  |$$  | $$ |   |$$  | $$$$$$        \n"
            "    | $$        | $$ |__|$$  | $$ |__/ $$  | $$___/       \n"
            "    | $$    $$  | $$     $$  | $$     $$/  | $$           \n"
            "    |  $$$$$$/  |  $$$$$$$/  | $$$$$$$$/   | $$$$$$$$              \n"
            "     \\______/    \\_______/   |________/    |________/                    \n");
            printf("\n");
            printf("=====================================================\n");
            printf("   =-=-=-=-=-=Escolha o que voce Deseja=-=-=-=-=-=\n");
            printf("[1] Codificar\n"
                   "[2] Descodificar \n"
                   "[3] Ajuda/Help \n"
                   "[4] Sair \n\n=> ");
            scanf("%d", &opcao);
            escolha(opcao);
        }
    while(opcao != 4);
    
    system("PAUSE");
    return 0;
}

void escolha(int opcao){
    char frase[4000];
    switch(opcao){
        case 1:
            printf("Escreva o que voce deseja CODIFICAR:\n=> ");
            getchar();
            fgets(frase, sizeof(frase), stdin);
            codifica(frase);
            break;
        case 2:
            printf("Escreva o que voce deseja DESCODIFICAR:\n=> ");
            getchar();
            fgets(frase, sizeof(frase), stdin);
            descodifica(frase);
            break;
        case 3:
            system("cls");
            printf("?+?+?+? MENU DE AJUDA ?+?+?+?\n"
            "A cifra de Cesar e um metodo simples de criptografia por substituicao, onde cada letra do texto original e substituida por outra letra do alfabeto deslocada um numero fixo de posicoes para a direita ou para a esquerda. Por exemplo, com um deslocamento de 3 posicoes para a direita, a letra A seria substituida por D, B por E, e assim por diante. E uma tecnica historica e basica, facil de implementar, mas bastante vulneravel a metodos modernos de criptoanalise devido a sua previsibilidade e padroes simples de substituicao. \n"
            "\nExemplo:\n Frase = 'Ola pessoal!'\nCodificada = 'Rod shvvrdo!'\n\n");
            system("PAUSE");
            break;
        case 4:
            printf("Encerrado o programa...");
            break;
            system("PAUSE");
        default:
            printf("!!! ERRO !!!\n TENTE NOVAMENTE");
            break;
            system("PAUSE");
    }
}

void codifica(char frase[]){
    int i = 0;

    while (frase[i] != '\0') {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = 'a' + (frase[i] - 'a' + 3) % 26;
        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = 'A' + (frase[i] - 'A' + 3) % 26;
        }
        i++;
    }
    printf("Frase codificada: %s\n", frase);
    system("PAUSE");
}

void descodifica(char frase[]) {
    int i = 0;

    while (frase[i] != '\0') {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = 'a' + (frase[i] - 'a' - 3 + 26) % 26;
        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = 'A' + (frase[i] - 'A' - 3 + 26) % 26;
        }
        i++;
    }
    printf("Frase descodificada: %s\n", frase);
    system("PAUSE");
}