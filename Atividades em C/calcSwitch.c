#include <stdio.h>

int main() {
int opcao;
float x, y, resultado;

while (opcao) {
    printf("\n===Calculadora===\n\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("0 - Sair\n\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);
    
    if(opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &x);
            printf("Digite o segundo número: ");
            scanf("%f", &y);
        
    }

switch(opcao) {
    
    case 1:
    resultado = x + y;
    printf("O Resultado da soma é: %.0f\n", resultado);
    break;
    
    case 2:
    resultado = x - y;
    printf("O Resultado da subitração é: %.0f\n", resultado);
    break;
    
    case 3:
    resultado = x * y;
    printf("O Resultado da multiplicação é: %.0f\n", resultado);
    break;
    
    case 4:
    resultado = x / y;
    printf("O Resultado da divião é: %.1f\n", resultado);
    break;
    
    case 0:
    printf("\nFim\n");
    break;
    
    default:
    printf("\nOpcao invalida!\n");
    
}
        
    
}

return 0;
    
}