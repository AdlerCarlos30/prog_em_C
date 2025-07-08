#include <stdio.h>

    int main (){
        int numero1;
        int numero2;

        printf("Digite o Primeiro Número: ");
        scanf("%d", &numero1);

        printf("Digite o Segundo Numero: ");
        scanf("%d", &numero2);

        if (numero1 > numero2) {
         printf("O Primeiro Número é o Maior: %d", numero1 );

        }

        if (numero1 < numero2) {
         printf("O Segundo Número é o Maior: %d", numero2);

        }
     
         if (numero1 == numero2) {
         printf("Os Números São Iguais: %d, %d", numero1, numero1);
         
        }

        return 0;
        
    }