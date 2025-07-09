#include <stdio.h>

    int main (){
        int num1, num2; /*variaveis tipo inteiro*/

        /*Solicita os números ao usuário*/
        printf("Digite um Valor: "); 
        scanf("%d", &num1);

        printf("Digite outro Valor: ");
        scanf("%d", &num2);

         /*Começam as comparações*/
    if (num1 == num2) {
        printf("%d é igual a %d\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%d é diferente de %d\n", num1, num2);
    }

    if (num1 > num2) {
        printf("%d é maior que %d\n", num1, num2);
    }

    if (num1 < num2) {
        printf("%d é menor que %d\n", num1, num2);
    }

    if (num1 >= num2) {
        printf("%d é maior ou igual a %d\n", num1, num2);
    }

    if (num1 <= num2) {
        printf("%d é menor ou igual a %d\n", num1, num2);
    }

    return 0;
}