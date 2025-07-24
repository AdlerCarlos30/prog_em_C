//Adler Brito Carlos

#include <stdio.h>
#include <string.h>

    struct Animais {
      char nome[50];
      char especie[30];
      char raca[30];
      int idade;
      float peso; 
        
    }; 
    
    int main(){ 
        
        struct Animais pet[3];
        int cont;
        printf("\t\t\t\t\t\t\t::::Pet Shop Amazonas::::\n"); 
        printf("\t\t\t\t\t\t Cadastre seu Pet Agora no nosso sistema\n");
        
        for(cont = 0 ; cont < 3 ; cont++){ 
            printf("\n"); 
            printf("\nDigite o Nome do seu %d° Pet: ",cont + 1); 
            fgets(pet[cont].nome, sizeof(pet[cont].nome), stdin); 
            pet[cont].nome[strcspn(pet[cont].nome, "\n")] = '\0'; 
            
            printf("\nDigite a Especie: "); 
            fgets(pet[cont].especie, sizeof(pet[cont].especie), stdin); 
            pet[cont].especie[strcspn(pet[cont].especie, "\n")] = '\0'; 
            
            printf("\nDigite a Raça: "); 
            fgets(pet[cont].raca, sizeof(pet[cont].raca), stdin); 
            pet[cont].raca[strcspn(pet[cont].raca, "\n")] = '\0'; 
            
            printf("\nDigite a Idade: "); 
            scanf("%d",&pet[cont].idade); 
            getchar();
          
           
          printf("\nDigite o Peso: ");
          scanf("%f",&pet[cont].peso);
          getchar();
         
        } 
        
        //exibição de dados 
        for (cont = 0 ; cont <3; cont++){ 
            printf("\n\n");//separação de campos 
            printf("\nDados do %d° animal cadastrados é:\n", cont + 1); 
            printf("\nNome: %s\n",pet[cont].nome); 
            printf("\nEspecie: %s\n",pet[cont].especie); 
            printf("\nRaça: %s \n",pet[cont].raca); 
            printf("\nIdade: %d anos\n",pet[cont].idade); 
            printf("\nPeso: %.2f kg\n",pet[cont].peso); 
            
        } 
        
        return 0; 
        
    }