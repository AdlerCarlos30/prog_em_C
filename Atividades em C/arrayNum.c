#include <stdio.h>

int main() {
    
    int matriz [2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        
    };
    printf("Valores da matriz 2x3:\n");
    
    for(int lin = 0; lin < 2; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matriz[lin][col]);
            
        }
        printf("\n");
        
    }
    
    return 0;
    
}