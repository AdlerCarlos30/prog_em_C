//Adler Brito Carlos
#include <stdio.h>
#include <string.h>

int main() {
    char nome [50];
    int idade;
    int estudante;
    const float valorBase = 100.0;

    printf("Escreva seu Nome Completo: ");
    fgets(nome,sizeof(nome), stdin);

    printf("Você é Estudante (0Não/1Sim): ");
    scanf("%d", &estudante);
    
     printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("\nNome: %sIdade: %d\nEstudante (0Não/1Sim): %d\n", nome, idade, estudante);
    
    if(idade < 18 || estudante == 1) {
        printf("\nOla %s, você recebeu um desconto de R$ 50.00 no Valor Base de R$ %.2f.", nome, valorBase);
        printf("\nValor Final: R$ 50.00");
    
    }
    else {
        printf("\nOla %s, você não recebe desconto. Pague o valor de R$ %.2f\n.", valorBase);
    }
    return 0;
}