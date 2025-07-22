#include <stdio.h>
#include <string.h>

struct FUNCIONARIO {
    int matricula;
    char nome[150];
    char setor[50];
    char situacao[20];
    
}; 

int main() { 
    struct FUNCIONARIO empresa[5]; 
    int cont; 
    
    // Laço de repetiзгo FOR para realizar a leitura de 5 funcionбrios
    for (cont = 0; cont < 5; cont++) {
        printf("\n::::: Cadastro do Funcionário %d ::::::::\n", cont + 1);

        printf("Matrícula: ");
        scanf("%d", &empresa[cont].matricula);
        getchar(); 
        
        printf("Nome: ");
        fgets(empresa[cont].nome, sizeof(empresa[cont].nome), stdin);
        empresa[cont].nome[strcspn(empresa[cont].nome, "\n")] = '\0';

        printf("Setor: ");
        fgets(empresa[cont].setor, sizeof(empresa[cont].setor), stdin);
        empresa[cont].setor[strcspn(empresa[cont].setor, "\n")] = '\0';

        printf("Situação (Ativo/Inativo): ");
        fgets(empresa[cont].situacao, sizeof(empresa[cont].situacao), stdin);
        empresa[cont].situacao[strcspn(empresa[cont].situacao, "\n")] = '\0'; 
        
    }

    // Exibiзгo dos dados cadastrados com laзo FOR para percorrer o vetor
    printf("\n::::::::: LISTA DE FUNCIONÁRIOS ::::::::::\n"); 
    for (cont = 0; cont < 5; cont++) {
        printf("\nFuncionário %d\n", cont + 1);
        printf("Matrícula: %d\n", empresa[cont].matricula);
        printf("Nome: %s\n", empresa[cont].nome);
        printf("Setor: %s\n", empresa[cont].setor);
        printf("Situação: %s\n", empresa[cont].situacao); 
        
    } 
    
    return 0; 
    
}