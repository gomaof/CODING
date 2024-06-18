#include <stdio.h>

// Função para listar o vetor com as posições de armazenamento dos valores
void listarVetor(int vetor[], int tamanho) {
    printf("Valores no vetor e suas posições:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }
    printf("\n");
}

// Função para pesquisar um valor no vetor
int pesquisarValor(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;  // Retorna a posição do valor no vetor
        }
    }
    return -1;  // Retorna -1 se o valor não estiver presente no vetor
}

// Função para trocar os valores do vetor pela política especificada
void trocarValores(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int soma = 0;
        for (int j = 0; j < i; j++) {
            soma += vetor[j];  // Calcula a soma dos elementos anteriores a i
        }
        vetor[i] = soma;  // Substitui o valor de i pela soma calculada
    }
}

int main() {
    int vetor[7];  // Vetor para armazenar os valores inteiros
    int i;

    // Leitura dos valores inteiros e armazenamento no vetor
    printf("Digite 7 valores inteiros:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamada da função para listar o vetor com suas posições
    listarVetor(vetor, 7);

    // Exemplo de utilização da função pesquisarValor
    int valorBuscado = 10;  // Exemplo: procurar pelo valor 10 no vetor
    int posicao = pesquisarValor(vetor, 7, valorBuscado);
    if (posicao != -1) {
        printf("O valor %d está na posição %d do vetor.\n", valorBuscado, posicao);
    } else {
        printf("O valor %d não está presente no vetor.\n", valorBuscado);
    }

    // Chamada da função para trocar os valores do vetor pela política especificada
    trocarValores(vetor, 7);

    // Exibindo o vetor após a troca dos valores
    printf("Vetor após troca dos valores:\n");
    listarVetor(vetor, 7);

    return 0;
}