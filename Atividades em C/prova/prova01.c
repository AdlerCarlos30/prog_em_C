//Adler Brito Carlos
#include <stdio.h>
#include <string.h>

int main() {
    char nome = [50];
    int idade;
    char estudante;
    const float valorBase = 100.0;

    printf("Escreva seu Nome Completo: ");
    fgets(nome,sizeof(nome), stdin);

    printf("Digite sua Idade: ");
    sacanf("%d", &idade);

    printf("Você é Estudante (0Não/1Sim): ");
    scanf("%c", &estudante);

    if(idade < 18 && estudante == 1) {
        printf("Você Recebeu 50% de desconto.");
    } else {
        printf("Você não Recebe Desconto.");
    }
    return 0;
}