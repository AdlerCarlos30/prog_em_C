#include <stdio.h>
#include <string.h>

// Declaração da estrutura
struct Pessoa {
char nome[100];
char cpf[15];
int idade;
}; 

int main() {
//Declaração de um coordenador da struct Pessoa 

struct Pessoa coordenador; 

// Inicializando valores fixos
strcpy(coordenador.nome, "Adler Carlos");
strcpy(coordenador.cpf, "034.095.052-88");
coordenador.idade = 30;

// Exibição dos dados do Coordenador
printf("::: Coordenador :::\n");
printf("Nome: %s\nCPF: %s\nIdade: %d\n", coordenador.nome,
coordenador.cpf, coordenador.idade);

return 0;
    
}