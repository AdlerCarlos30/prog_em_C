#include <stdio.h>

int main() {
    int opcao;
    int num;
    int pares = 0, x =0; // variaves com atribuição separadas
    
    //Menu para Escolher Linguagens
    printf("Menu de Linguagens:\n");
    printf("1 – For \n");
    printf("2 – While \n");
    printf("3 – Do-While \n");
    printf("Escolha uma Linguagem: ");
    scanf("%d", &opcao);
    getchar();
    
    //primeiro case com for
    switch(opcao) {
        case 1:
        for (int x = 0; x < 10; x++) {
            printf("Digite o %dº número: ", x + 1);
            scanf("%d", &num);
            getchar();
            
            if (num % 2 == 0) {
                pares++;
                
            }
            
        }
        
        printf("Quantidade de números pares com For: %d\n", pares);
        break;
        
        //segundo case com while
        case 2:
        while (x < 10) {
            printf("Digite o %dº número: ", x + 1);
            scanf("%d", &num);
            getchar();
            
            if (num % 2 == 0) {
                pares++;
                
            }
            x++;
            
        }
        
        printf("Quantidade de números pares com While: %d\n", pares);
        break;
        
        //terceiro case com do-while
        case 3:
        do {
            printf("Digite o %dº número: ", x + 1);
            scanf("%d", &num);
            getchar();
            
            if (num % 2 == 0) {
                pares++;
                
            }
            x++;
            
        } while (x < 10);
        printf("Quantidade de números pares: %d\n", pares);
        break;
        
        //default caso opção invalida
        default:
        printf("Opção inválida!\n");

}

 return 0;

}