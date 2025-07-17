#include <stdio.h>
#include <string.h>

int main() {
    char nomes [5][50];
    
    for (int cont = 0; cont < 5; cont++) {
        printf("Digite o nome %d: ", cont + 1);
        fgets(nomes[cont], 50, stdin);
        nomes[cont][strcspn(nomes[cont], "\n")] = '\0';
        
    }
    
    printf("\nNomes digitados:\n");
    
    for (int cont = 0; cont < 5; cont++) {
        printf("\n%s\n", nomes[cont]);
        
    }
    return 0;
    
}