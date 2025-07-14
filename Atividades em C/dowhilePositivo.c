#include <stdio.h>

int main() {
    int num, soma = 0;
    
    do {
        printf("Digite um número posítivo para somar (negativo encerra) : ");
        scanf("%d", &num);
        
        if (num >= 0) {
            soma += num;
        }
        
    } while (num >= 0);
    
    printf("A soma total é: %d\n", soma);
    
    return 0;
}