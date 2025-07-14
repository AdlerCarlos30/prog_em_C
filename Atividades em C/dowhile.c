#include <stdio.h>

int main() {
    int numero, soma = 0;
    int resposta;
    
    do {
        printf("Digite um número para somar: ");
        scanf("%d", &numero);
        soma += numero;
        
        printf("Digite 1 para continuar somando ou 0 para parar: ");
        scanf("%d", &resposta);
        getchar( );
        
    } while (resposta == 1);
    printf("A soma total é: %d\n", soma);
    
    return 0;
}