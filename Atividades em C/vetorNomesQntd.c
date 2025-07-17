#include <stdio.h>
#include <string.h>

int main() {
    int qntd;
    
     printf(" === Cadastro Nomes ===\n");
     printf("\nQuantos Nomes Você quer Cadastrar? ");
     scanf("%d", &qntd);
     getchar();
    
    char nomes [qntd] [100];
    
    for (int cntd = 0; cntd < qntd; cntd++) {
        printf("Digite o %d° Nome Completo: ", cntd + 1);
        fgets(nomes[cntd], 100, stdin);
        nomes[cntd][strcspn(nomes[cntd], "\n")] = '\0';
        
    }
    
    printf("\nNomes digitados:\n");
    
    for (int cntd = 0; cntd < qntd; cntd++) {
        printf("\n%d°: %s\n", cntd + 1, nomes[cntd]);
        
    }
    return 0;
    
}