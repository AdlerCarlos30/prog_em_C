#include <stdio.h>

int main () {
    int passos = 0;
    
     printf("Você deu %d passos.\n", passos);
     
     //Após Incrementar 3 Passos
     passos+=3;
     printf("\nAgora você deu %d passos para à frente.\n", passos);
     
     //Após Decrementar 1 Passo
     passos-=2;
     printf("\nAgora você deu %d passo para trás.", passos);
     
    return 0;
}