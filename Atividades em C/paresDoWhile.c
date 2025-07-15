#include <stdio.h>

int main() {
    int num, pares = 0, x =0;

   do {
        printf("Digite o %dº número: ", x + 1);
        scanf("%d", &num);
        getchar();

        if (num % 2 == 0) {
            pares++;
        }
        x++;

    }   while (x < 10); 
    printf("Quantidade de números pares: %d\n", pares);
    
    return 0;
}