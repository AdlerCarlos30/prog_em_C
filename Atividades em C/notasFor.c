#include <stdio.h>

int main() {
    //posição zero com qualquer valor
    float num [5] = {0, 10, 8.8, 7.7, 9.9};
    int cont;
    
    printf("Notas do Aluno:\n");

//posição zero não será exibida
for (cont = 1; cont < 5; cont++) {
printf("\nNota %d: %.1f\n", cont, num[cont]);
    
}

printf("\n");

return 0;
    
}