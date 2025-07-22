#include <stdio.h> 

float calcularMedia(float n1, float n2) { 
    return (n1 + n2) / 2; 
    
} 

int main() { 
    float nota1, nota2, media; 
    
    printf("Digite a primeira nota: "); 
    scanf("%f", &nota1); 
    getchar(); 
    
    printf("Digite a segunda nota: "); 
    scanf("%f", &nota2); 

media = calcularMedia(nota1, nota2); 

printf("A média das notas é: %.2f\n", media); 

return 0;
}