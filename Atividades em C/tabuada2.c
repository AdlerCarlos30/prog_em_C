#include <stdio.h>

int main() {
    int num,x;
    
    printf("Digite um Número: ");
    scanf("%d", &num);
    
    for(x=1; x<=num; x++) {
        printf("\n%d + %d = %d\n", num, x, num +x);
}
    return 0;
}