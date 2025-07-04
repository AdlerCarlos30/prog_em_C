#include <stdio.h>


int main () {
    char nome [10];
    int idade;
    float altura;

printf("Informe seu Nome: ");
scanf("%s", &nome);

printf("Informe seu Idade: ");
scanf("%d", &idade);

printf("Informe sua Altura: ");
scanf("%f", &altura);

printf("\n Olá, %s! Você tem %d Anos e mede %.2f Metros.\n" , nome, idade, altura);


return 0;  
}