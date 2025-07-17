#include <stdio.h>

int main() {
    
    float matriz [2][3] = {
        {5.1,  6.2,  7.3},
        {8.4,  9.5,  10.0}
        
    };
    printf("Valores das Notas: \n");
    
    for(int lin = 0; lin < 2; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%.1f/ ", matriz[lin][col]);
            
        }
        printf("\n");
        
    }
    
    return 0;
    
}