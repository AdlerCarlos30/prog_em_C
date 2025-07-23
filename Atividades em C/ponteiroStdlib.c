#include <stdio.h>
#include <stdlib.h>

int main() {
// Alocação dinâmica de memória para uma variável do tipo inteiro
int *pnt_idade = (int *) malloc(sizeof(int));
float *pnt_peso = (float *) malloc(sizeof(float));

*pnt_idade;
*pnt_peso;

printf("Digite Sua Idade: ");
scanf("%d", pnt_idade);

printf("Digite Seu Peso: ");
scanf("%f", pnt_peso);

printf("A Idade é: %d", *pnt_idade);
printf("\nO endereço físico alocado dinamicamente: %p", pnt_idade);

printf("\n");

printf("O Peso é: %.2f", *pnt_peso);
printf("\nO endereço físico alocado dinamicamente: %p", pnt_peso);

// Libera a memória alocada
free(pnt_idade);
free(pnt_peso);

return 0;
}