#include <stdio.h>
#include <math.h>

    int main () {

        int a;
        int b;

printf("Digite o primeiro numero: ");
scanf("%d", &a);

printf("Digite o segndo número: ");
scanf("%d", &b);

        int soma = a+b;
        int sub = a-b;
        int multi = a*b;
        int divi = a/b;

printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", sub);
printf("A multiplicação é: %d\n", multi);
printf("A divisão é: %d\n", divi);

 return 0;

 }