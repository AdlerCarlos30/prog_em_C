#include <stdio.h>

int main() {
    int num, pares = 0;

    for (int x = 0; x < 10; x++) {
        printf("Digite o %dº número: ", x + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    return 0;
}