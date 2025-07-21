#include <stdio.h>
#include <string.h>

// Declaração da estrutura
struct Funcionario {
    int matricula;
    char nome[150];
    char setor[50];
    char situacao[50];
    
}; 

int main() {

struct Funcionario Senior; 

strcpy(Senior.nome, "Adler");
Senior.matricula = 10001;
strcpy(Senior.setor, "MSI");
strcpy(Senior.situacao, "Folga\n\n");

printf(":::: Suporte Senior ::::\n");
printf("Nome: %s\nMatricula: %d\nSetor: %s\nSituação: %s\n", Senior.nome, Senior.matricula, Senior.setor, Senior.situacao);

struct Funcionario Junior; 

strcpy(Junior.nome, "Carlos");
Junior.matricula = 10002;
strcpy(Junior.setor, "MSI");
strcpy(Junior.situacao, "Ativo");

printf(":::: Suporte Junior ::::\n");
printf("Nome: %s\nMatricula: %d\nSetor: %s\nSituação: %s\n", Junior.nome, Junior.matricula, Junior.setor, Junior.situacao);

return 0;
    
}