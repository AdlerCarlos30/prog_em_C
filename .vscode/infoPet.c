#include <stdio.h>

int main () {
int pet_idade = 4;
char pet_inicial = 'B';
char pet_nome [10] = "Bolt";
char pet_nome_completo [30] = "Bolt Brito";
float pet_peso = 12.300;
float pet_altura = 0.45;

printf("Lista de infotmações do Pet: \n\n");

printf("Idade do Pet: %d Anos\n" "Inicial do Pet: %c \n" "Nome do Pet: %s \n"
"Nome completo do Pet: %s \n" "Peso do Pet: %0.3f Kg \n" "Altura do Pet: %0.2f M \n", 
pet_idade, pet_inicial, pet_nome, pet_nome_completo, pet_peso, pet_altura);

return 0;  
    
}