#include <stdio.h>

int main () {
    int contador, contadorInterno;
    
    //faz a contagem de 2 em 2
    for(contador = 1; contador <= 5; contador++) {

        for (contadorInterno = 1; contadorInterno <= 5; contadorInterno++) {
                printf("%d x %d = %d\n", contador, contadorInterno, contador * contadorInterno);
        }
        printf("\n");
}
    return 0;
}