#include <stdio.h>
#include <string.h>

// Declaração da estrutura
struct Veiculo { 
    char marca[50], modelo[50];
    int ano;
    float valor;
    
}; 

int main() {

struct Veiculo Carro; 

printf ("Informe a Marca do Carro: ");
fgets(Carro.marca, sizeof(Carro.marca), stdin);

printf ("Informe a Modelo do Carro: ");
fgets(Carro.modelo, sizeof(Carro.modelo), stdin);

printf ("Informe a Ano do Carro: ");
scanf("%d", &Carro.ano);

printf ("Informe a Valor do Carro: ");
scanf("%f", &Carro.valor);

printf("\n\n::::Veículo Carro ::::\n\n");
printf("Marca: %s\nModelo: %s\nAno: %d\nValor: %.2f\n", Carro.marca, Carro.modelo, Carro.ano, Carro.valor);

printf("\n");


return 0;
    
}