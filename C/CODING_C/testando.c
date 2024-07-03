#include <stdio.h> //interação com usuario
#include <string.h> //biblioteca de frases

#define MAX_ALUNOS 100

// Vetores para armazenar os dados dos alunos
char nomes[MAX_ALUNOS][50];
char sexos[MAX_ALUNOS];
char datasNascimento[MAX_ALUNOS][11];
float notas1[MAX_ALUNOS], notas2[MAX_ALUNOS], notas3[MAX_ALUNOS];
float medias[MAX_ALUNOS];


int numAlunos = 0; // Contador de alunos cadastrados

// Função para apresentar o menu e retornar a opção escolhida
int menu() {
    int opcao;
    printf("\n===== Sistema Acadêmico =====\n");
    printf("1) Entrada dos dados de um aluno\n");
    printf("2) Mostrar a média individual de todos os alunos e a média geral\n");
    printf("3) Mostrar a relação de alunos aprovados\n");
    printf("4) Mostrar as relações de alunos por faixa de média\n");
    printf("5) Mostrar a média das notas das mulheres e dos homens\n");
    printf("6) Corrigir nota a partir de um nome do aluno\n");
    printf("7) Sair do Programa\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar(); // Captura o '\n' após a leitura do número
    return opcao;
}

// Função para ler os dados de um novo aluno
void entradaDadosAluno() {
    if (numAlunos < MAX_ALUNOS) {
        printf("\n=== Entrada de dados de um novo aluno ===\n");
        printf("Nome: ");
        fgets(nomes[numAlunos], 50, stdin);
        nomes[numAlunos][strlen(nomes[numAlunos]) - 1] = '\0'; // Remover o '\n' do fgets
        printf("Sexo (M/F): ");
        scanf(" %c", &sexos[numAlunos]);
        getchar(); // Captura o '\n' após a leitura do char
        printf("Data de nascimento (dd/mm/aaaa): ");
        fgets(datasNascimento[numAlunos], 11, stdin);
        datasNascimento[numAlunos][strlen(datasNascimento[numAlunos]) - 1] = '\0'; // Remover o '\n' do fgets
        printf("Nota 1: ");
        scanf("%f", &notas1[numAlunos]);
        printf("Nota 2: ");
        scanf("%f", &notas2[numAlunos]);
        printf("Nota 3: ");
        scanf("%f", &notas3[numAlunos]);
        
        // Calcular média do aluno
        medias[numAlunos] = (notas1[numAlunos] + notas2[numAlunos] + notas3[numAlunos]) / 3.0;
        
        printf("Dados do aluno cadastrados com sucesso!\n");
        numAlunos++;
    } else {
        printf("Numero maximo de alunos atingido. Impossivel cadastrar mais alunos.\n");
    }
}

// Função para mostrar a média individual de todos os alunos e a média geral
void mostrarMedias() {
    if (numAlunos > 0) {
        float mediaGeral = 0.0;
        printf("\n=== Media individual de todos os alunos ===\n");
        for (int i = 0; i < numAlunos; i++) {
            printf("Aluno: %s\n", nomes[i]);
            printf("Media: %.2f\n", medias[i]);
            printf("\n");
            mediaGeral += medias[i];
        }
        mediaGeral /= numAlunos;
        printf("Media geral da turma: %.2f\n", mediaGeral);
    } else {
        printf("Nao ha alunos cadastrados.\n");
    }
}

// Função para mostrar a relação de alunos aprovados (média >= 7)
void alunosAprovados() {
    if (numAlunos > 0) {
        printf("\n=== Alunos Aprovados ===\n");
        for (int i = 0; i < numAlunos; i++) {
            if (medias[i] >= 7.0) {
                printf("Nome: %s\n", nomes[i]);
                printf("Sexo: %c\n", sexos[i]);
                printf("Data de nascimento: %s\n", datasNascimento[i]);
                printf("Media: %.2f\n", medias[i]);
                printf("\n");
            }
        }
    } else {
        printf("Nao ha alunos cadastrados.\n");
    }
}

// Função para mostrar a relação de alunos por faixa de média
void relacaoPorFaixaDeMedia() {
    if (numAlunos > 0) {
        int abaixo5 = 0, entre5e7 = 0, acima7 = 0;
        printf("\n=== Relacao de alunos por faixa de media ===\n");
        for (int i = 0; i < numAlunos; i++) {
            if (medias[i] < 5.0) {
                abaixo5++;
            } else if (medias[i] >= 5.0 && medias[i] < 7.0) {
                entre5e7++;
            } else {
                acima7++;
            }
        }
        printf("Alunos com média abaixo de 5: %d\n", abaixo5);
        printf("Alunos com média entre 5 e 7: %d\n", entre5e7);
        printf("Alunos com média acima de 7: %d\n", acima7);
    } else {
        printf("Não ha alunos cadastrados.\n");
    }
}

// Função para mostrar a média das notas das mulheres e dos homens
void mediaNotasPorSexo() {
    if (numAlunos > 0) {
        int numMulheres = 0, numHomens = 0;
        float somaNotasMulheres = 0.0, somaNotasHomens = 0.0;
        printf("\n=== Média das notas das mulheres e dos homens ===\n");
        for (int i = 0; i < numAlunos; i++) {
            if (sexos[i] == 'F') {
                somaNotasMulheres += medias[i];
                numMulheres++;
            } else if (sexos[i] == 'M') {
                somaNotasHomens += medias[i];
                numHomens++;
            }
        }
        if (numMulheres > 0) {
            printf("Media das notas das mulheres: %.2f\n", somaNotasMulheres / numMulheres);
        } else {
            printf("Nao ha mulheres cadastradas.\n");
        }
        if (numHomens > 0) {
            printf("Media das notas dos homens: %.2f\n", somaNotasHomens / numHomens);
        } else {
            printf("Nao ha homens cadastrados.\n");
        }
    } else {
        printf("Nao ha alunos cadastrados.\n");
    }
}

// Função para corrigir nota a partir do nome do aluno
void corrigirNota() {
    if (numAlunos > 0) {
        char nomeCorrigir[50];
        int encontrado = 0;
        printf("\n=== Correcao de nota ===\n");
        printf("Digite o nome do aluno para corrigir a nota: ");
        fgets(nomeCorrigir, 50, stdin);
        nomeCorrigir[strlen(nomeCorrigir) - 1] = '\0'; // Remover o '\n' do fgets
        for (int i = 0; i < numAlunos; i++) {
            if (strcmp(nomeCorrigir, nomes[i]) == 0) {
                printf("Nota 1 atual: %.2f\n", notas1[i]);
                printf("Nova nota 1: ");
                scanf("%f", &notas1[i]);
                printf("Nota 2 atual: %.2f\n", notas2[i]);
                printf("Nova nota 2: ");
                scanf("%f", &notas2[i]);
                printf("Nota 3 atual: %.2f\n", notas3[i]);
                printf("Nova nota 3: ");
                scanf("%f", &notas3[i]);
                
                // Recalcular média
                medias[i] = (notas1[i] + notas2[i] + notas3[i]) / 3.0;
                
                printf("Notas corrigidas com sucesso!\n");
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf("Aluno nao encontrado.\n");
        }
    } else {
        printf("Nao ha alunos cadastrados.\n");
    }
}

// Função principal
int main() {
    int opcao;
    
    do {
        opcao = menu();
        
        switch (opcao) {
            case 1:
                entradaDadosAluno();
                break;
            case 2:
                mostrarMedias();
                break;
            case 3:
                alunosAprovados();
                break;
            case 4:
                relacaoPorFaixaDeMedia();
                break;
            case 5:
                mediaNotasPorSexo();
                break;
            case 6:
                corrigirNota();
                break;
            case 7:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
        
    } while (opcao != 7);
    
    return 0;
}
