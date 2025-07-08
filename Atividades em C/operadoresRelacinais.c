#include <stdio.h>

    int main (){
        int num1;
        int num2;

        printf("Digite um Número");
        scanf("%d", &num1);

        printf("Digite um Número");
        scanf("%d", &num2);

        if (num1 == num2) {
            printf("Os Números são Iguais %d, %d", num1,  num2);/* igualdade */
        }
        else{
            printf("Os Números são Diferentes: %d, %d", num1, num2); /* diferença */
        }

        if (num1 > num2) {
            printf("O primero Número %d, %d",  num1, num2)/* code */
        }
        
        
    }