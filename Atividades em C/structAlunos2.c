#include <stdio.h>
#include <string.h>

//Aqui utilizei typedef para definir o tipo de dados struct  

typedef struct{ 
    int idade;
    char nome[100];
    float altura; 
    
} Pessoa; 

int main() { 
    Pessoa alunos[3]; // Aqui já não usei a palavra struct, veja como fica mais simples.

    
    for (int cont = 0; cont < 3; cont++) {
        printf("\n_____ Aluno(a) %d ________\n", cont + 1);
        printf("Digite o nome completo do(a) Aluno(a): ");
        fgets(alunos[cont].nome, sizeof(alunos[cont].nome), stdin);
        
        alunos[cont].nome[strcspn(alunos[cont].nome, "\n")] = '\0';
		
        printf("Digite a idade do(a) Aluno(a): ");
        scanf("%d", &alunos[cont].idade);
		
		getchar( );
		
        printf("Digite a altura do(a) Aluno(a): ");
        scanf("%f", &alunos[cont].altura);
		getchar( );
        
    }

    
    printf("\n____ Dados dos Alunos ____\n"); 
    
    for (int cont = 0; cont < 3; cont++) { 
        printf("\n____ Aluno(a) %d _____\n", cont + 1);
        printf("Nome: %s", alunos[cont].nome);
        printf("\nEndereço de memoria do nome: %p\n", &alunos[cont].nome);

        printf("\nIdade: %d\n", alunos[cont].idade);
        printf("Endereço de memoria da idade: %p\n", &alunos[cont].idade);

        printf("\nAltura: %.2f\n", alunos[cont].altura);
        printf("Endereço de memoria da altura: %p\n", &alunos[cont].altura); 
        
    } 
    
    return 0; 
    
}