#include <stdio.h>
#include <string.h>

int main () {
    char nomeCompleto [100];
    int idade;
    char genero;
    char cpf [11];
    char telefone [30];
    char email [50];
    float peso;
    float altura;

    printf("Digite seu Nome Completo: ");
    fgets(nomeCompleto,sizeof(nomeCompleto), stdin);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Informe seu Gênero: ");
    scanf("%c", &genero);

     printf("Informe seu CPF: ");
    scanf("%s", &cpf);

     printf("Informe seu Telefone: ");
    scanf("%s", &telefone);

     printf("Informe seu e-mail: ");
    scanf("%s", &email);

     printf("Informe seu Peso: ");
    scanf("%f", &peso);

     printf("Informe sua Altura: ");
    scanf("%f", &altura);

    printf("Usuario %s Idade %d Gênero: %c CPF: %s Telefone: %s e-mail: %s Peso de %.2f e Altura de %.2f",
    nomeCompleto, idade, genero, cpf, telefone, email, peso, altura);


return 0;
  
}