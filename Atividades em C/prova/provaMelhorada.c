// Adler Brito Carlos
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ARQUIVO "cadastros.txt"

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarPessoa() {
    char nome[50];
    int idade, inputEstudante;
    bool estudante;
    const float valorBase = 100.0;
    float valorFinal = valorBase;
    bool temDesconto;

    printf("\n--- Cadastro de Pessoa ---\n");

    printf("Escreva seu Nome Completo: ");
    limparBuffer(); // Limpa o buffer antes de usar fgets
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Você é Estudante (0 = Não / 1 = Sim): ");
    scanf("%d", &inputEstudante);
    estudante = inputEstudante == 1;

    temDesconto = (idade < 18 || estudante);
    if (temDesconto) {
        valorFinal *= 0.5;
        printf("Você recebeu um desconto de 50%%.\n");
    } else {
        printf("Você não recebeu desconto.\n");
    }

    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    // Gravar no arquivo
    FILE *file = fopen(ARQUIVO, "a");
    if (file != NULL) {
        fprintf(file, "%s;%d;%s;%.2f\n", nome, idade, estudante ? "Sim" : "Não", valorFinal);
        fclose(file);
        printf("Cadastro salvo com sucesso!\n");
    } else {
        printf("Erro ao salvar o cadastro.\n");
    }
}

void verCadastros() {
    FILE *file = fopen(ARQUIVO, "r");
    if (file == NULL) {
        printf("\nNenhum cadastro encontrado.\n");
        return;
    }

    char linha[100];
    printf("\n--- Lista de Cadastros ---\n");
    while (fgets(linha, sizeof(linha), file) != NULL) {
        char nome[50];
        int idade;
        char estudante[5];
        float valor;

        sscanf(linha, "%49[^;];%d;%4[^;];%f", nome, &idade, estudante, &valor);

        printf("Nome: %s\nIdade: %d\nEstudante: %s\nValor a pagar: R$ %.2f\n\n", nome, idade, estudante, valor);
    }

    fclose(file);
}

int main() {
    int opcao;

    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Cadastrar Pessoa\n");
        printf("2. Ver Cadastros Salvos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarPessoa();
                break;
            case 2:
                verCadastros();
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}