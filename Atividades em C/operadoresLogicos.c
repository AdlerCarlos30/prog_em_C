#include <stdio.h>

int main () {
    int idade, temIngresso;

    printf("Infome sua Idade: ");
    scanf("%d", &idade);

    printf("Você tem Ingresso (0Não/1Sim): ");
    scanf("%d", &temIngresso);

    if(idade >= 14 && temIngresso == 1) {
        printf("Entrada Permitida");
    }
    else {
        printf("Entrada não permitida");
    }

    return 0;
}