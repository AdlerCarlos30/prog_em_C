#include <stdio.h>

int main() { 
    // Declaração da matriz 2x2
    int matriz[2][2];

    // Variáveis para armazenar os resultados
    int soma = 0;
    int mult = 1;

    // ===== Entrada dos valores =====
    printf("=== Digite os valores para a matriz 2x2 ===\n"); 
    for (int linha = 0; linha < 2; linha++) { 
        for (int coluna = 0; coluna < 2; coluna++) { 
            printf("Elemento [%d][%d]: ", linha, coluna); 
            scanf("%d", &matriz[linha][coluna]);

            // Acumula a soma e o produto dos elementos
            soma += matriz[linha][coluna];
            mult *= matriz[linha][coluna]; 
            
        } 
        
    }

    // ===== Exibição da matriz =====
    printf("\n=== Matriz Digitada ===\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) { 
            printf("%d\t", matriz[linha][coluna]); //'\t' para espaçamento 
            } 
            
            printf("\n"); 
        
    }

    // ===== Exibição dos resultados =====
    printf("\nSoma de todos os elementos: %d\n", soma);
    printf("Multiplicação de todos os elementos: %d\n", mult);

    return 0; 
    
}