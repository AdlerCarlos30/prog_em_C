#include <stdio.h>

int main () {
    const int idadeMinima = 18; //constante

    printf("Infome sua idade: ");
    scanf("%d", &idadeMinima);

    if(idadeMinima >= 18) {

        printf("Maior Idade");

    if(idadeMinima >= 60) { //if dentro do if
        printf(" e Idoso"); //projeta os dois printf
    }
}
    else {
        printf("Menor Idade");
    }
    return 0;
}