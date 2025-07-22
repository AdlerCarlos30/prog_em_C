#include <stdio.h> 

int soma(int n1, int n2) { 
    return (n1 + n2); 
    
} 

int main() { 
    int num1, num2, resultado; 
    
    printf("Digite o Primeiro Número: "); 
    scanf("%d", &num1); 
    getchar(); 
    
    printf("Digite o Segundo Número: "); 
    scanf("%d", &num2); 

resultado = soma(num1, num2); 

printf("A média das notas é: %d\n", resultado); 

return 0;
}