#include <stdio.h>
#include <string.h>

int main () {
    char nomeCompleto [30];
    char apelido [10];
    int idade;
    float altura;

printf("Informe seu Nome Completo: ");
fgets(nomeCompleto,sizeof(nomeCompleto), stdin);

printf("Informe seu Apelido: ");
scanf("%s", apelido);

printf("Informe seu Idade: ");
scanf("%d", &idade);

printf("Informe sua Altura: ");
scanf("%f", &altura);

printf("\nSeja Bem-Vindo: %s. Seu Apelido é: %s, você tem %d anos de idade e mede %.2f metros de altura.\n", nomeCompleto, apelido, idade, altura);


return 0;  
}