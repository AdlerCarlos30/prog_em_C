#include <stdio.h>
#include <stdbool.h>

int main() {
    bool maiorIdade = true;
    bool menorIdade = false;
    int idade;

    printf("Infome sua Idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Você é Maior de Idade\n");
    } 
    else {
        printf("Você é Menor de Idade\n");
    }
    return 0;
}