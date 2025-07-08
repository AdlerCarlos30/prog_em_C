#include <stdio.h>
#include <string.h>

int main () {
    char nomeCompleto [100];
    int idade;
    char genero;
    char cpf [15];
    char telefone [30];
    char email [50];
    float peso;
    float altura;

    printf("Digite seu Nome Completo: ");
    fgets(nomeCompleto,sizeof(nomeCompleto), stdin);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Informe seu Gênero (M/F/O): ");
    scanf(" %c", &genero);

     printf("Informe seu CPF (apenas números): ");
    scanf("%s", &cpf);

     printf("Informe seu Telefone (apenas números): ");
    scanf("%s", &telefone);

     printf("Informe seu e-mail: ");
    scanf("%s", &email);

     printf("Informe seu Peso: ");
    scanf("%f", &peso);

     printf("Informe sua Altura: ");
    scanf("%f", &altura);

    printf("\nUsuario: %s \nIdade %d \nGênero: %c \nCPF: %s \nTelefone: %s \ne-mail: %s \nPeso: %.2f \nAltura: %.2f\n", nomeCompleto, idade, genero, cpf, telefone, email, peso, altura);


return 0;
  
}