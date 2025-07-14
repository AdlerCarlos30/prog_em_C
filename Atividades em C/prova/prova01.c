// Adler Brito Carlos
#include <stdio.h>
#include <string.h>
#include <stdbool.h> // Para usar booleanos

int main() {
    char nome[50];
    int idade;
    bool estudante;
    const float valorBase = 100.0;
    float valorFinal = valorBase;
    bool temDesconto;

    printf("Escreva seu Nome Completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Você é Estudante (0 = Não / 1 = Sim): ");
    int inputEstudante;
    scanf("%d", &inputEstudante);
    estudante = inputEstudante == 1;

    temDesconto = (idade < 18 || estudante);

    printf("\nOlá, %s!\n", nome);

    if (temDesconto) {
        valorFinal *= 0.5;
        printf("Você recebeu um desconto de 50%%.\n");
    } else {
        printf("Você não recebeu desconto.\n");
    }

    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    return 0;
}