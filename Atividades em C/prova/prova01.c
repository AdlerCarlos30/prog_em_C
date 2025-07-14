//Adler Brito Carlos
#include <stdio.h>
#include <string.h>

int main() {
    char nome  [50];
    int idade;
    int estudante;
    const float valorBase = 100.0;

    printf("Escreva seu Nome Completo: ");
    fgets(nome,sizeof(nome), stdin);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Você é Estudante (0Não/1Sim): ");
    scanf("%d", &estudante);

    if(idade < 18 ||estudante == 1) {
        printf("Você Recebeu desconto de 50%.");
    } else {
        printf("Você não Recebe Desconto.");
    }
    return 0;
}
