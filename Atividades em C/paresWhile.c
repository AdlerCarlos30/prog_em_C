#include <stdio.h>

int main() {
    int num, pares = 0, x =0;

    while (x < 10) {
        printf("Digite o %dº número: ", x + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        }
        x++;
    }

    printf("Quantidade de números pares: %d\n", pares);
    
    return 0;
}