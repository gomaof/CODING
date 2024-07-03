#include <stdio.h>
#include <string.h>

#define tamanho 5

// Estrutura do Livro
struct tlivro {
    int codigo;
    char nome[50];
    char autor[50];
};

// Estrutura da Pilha
struct tpilha {
    struct tlivro dados[tamanho];
    int ini;
    int fim;
};

// Variável global para a pilha
struct tpilha pilha;

// Adicionar um elemento no final da Pilha
void pilha_entrar() {
    if (pilha.fim == tamanho - 1) {
        printf("\nA pilha está cheia, impossível empilhar!\n\n");
        system("PAUSE");
    } else {
        printf("\nDigite o código do livro: ");
        scanf("%d", &pilha.dados[pilha.fim].codigo);
        printf("\nDigite o nome do livro: ");
        scanf("%s", pilha.dados[pilha.fim].nome);
        printf("\nDigite o nome do autor: ");
        scanf("%s", pilha.dados[pilha.fim].autor);
        pilha.fim++;
    }
}

// Retirar o último elemento da Pilha
void pilha_sair() {
    if (pilha.ini == pilha.fim) {
        printf("\nA pilha está vazia, impossível desempilhar!\n\n");
        system("pause");
    } else {
        pilha.fim--;
        // Limpar os dados do livro desempilhado
        pilha.dados[pilha.fim].codigo = 0;
        memset(pilha.dados[pilha.fim].nome, 0, sizeof(pilha.dados[pilha.fim].nome));
        memset(pilha.dados[pilha.fim].autor, 0, sizeof(pilha.dados[pilha.fim].autor));
    }
}

// Mostrar o conteúdo da Pilha
void pilha_mostrar() {
    if (pilha.ini == pilha.fim) {
        printf("Pilha vazia.\n\n");
    } else {
        printf("Conteúdo da pilha:\n");
        for (int i = pilha.ini; i < pilha.fim; i++) {
            printf("Livro %d:\n", i + 1);
            printf("Código: %d\n", pilha.dados[i].codigo);
            printf("Nome: %s\n", pilha.dados[i].nome);
            printf("Autor: %s\n", pilha.dados[i].autor);
            printf("\n");
        }
    }
}

int main() {
    pilha.ini = 0;
    pilha.fim = 0;

    // Exemplo de utilização das funções
    pilha_entrar();
    pilha_entrar();
    pilha_entrar();

    pilha_mostrar();

    pilha_sair();
    pilha_mostrar();

    return 0;
}
