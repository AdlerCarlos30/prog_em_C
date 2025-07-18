#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        
    };
    
    int linha, coluna, novoValor;
    
    printf("Valores atuais da matriz 2x3:\n");
    
    for(int lin = 0; lin < 2; lin++) { 
        for(int col = 0; col < 3; col++) { 
            printf("%d ", matriz[lin][col]);
            
        } 
        
        printf("\n");
        
    } 
    
    printf("\nInforme o número da linha (0 a 1): ");
    scanf("%d", &linha);
    printf("Informe o número da coluna (0 a 2): ");
    scanf("%d", &coluna);
    printf("Informe o novo valor para a posição [%d][%d]: ", linha, coluna);
    scanf("%d", &novoValor);
    
    matriz[linha][coluna] = novoValor;
    printf("\nMatriz atualizada:\n");
    
    for(int lin = 0; lin < 2; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matriz[lin][col]); 
            
        } 
        
        printf("\n");
        
    } 
    
    return 0; 
    
}