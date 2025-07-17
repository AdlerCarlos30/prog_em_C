#include <stdio.h>
#include <string.h>

int main() {
    int qntd;
    
    printf("Quantos Nomes Você quer Cadastrar? ");
    scanf("%d", &qntd);
    getchar();
    
    char nomes [qntd] [100];
    
    for (int cntd = 0; cntd < qntd; cntd++) {
        printf("Digite o nome %d: ", cntd + 1);
        fgets(nomes[cntd], 100, stdin);
        nomes[cntd][strcspn(nomes[cntd], "\n")] = '\0';
        
    }
    
    printf("\nNomes digitados:\n");
    
    for (int cntd = 0; cntd < qntd; cntd++) {
        printf("\n%s\n", nomes[cntd]);
        
    }
    return 0;
    
}