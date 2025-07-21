// Adler Carlos e Jonas Soares
#include <stdio.h>

int main() {
    int opcao, num, rpt;
    int matriz[4][3] = {
                {10, 8, 6},
                {9, 5, 6},
                {5, 7, 6},
                {6, 7,2} 
        
    };
    
    do {
        printf("\n \t\t\t\t\t\t ====Estoque Info Tech==== \n\n");
        printf("1 - Exibir Estoque Completo\n");
        printf("2 - Atualizar de Quantidade\n");
        printf("3 - Verificar Estoque Zero\n");
        printf("4 -Total por Categoria\n");
        printf("0 - Sair do programa\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            
            case 1:
            int linha, coluna, novoValor;
    printf("\n\t\t\t\t\t\t\t\t\tProdutos\n\n");
     printf("\t\t\t\tnotebooks Dell\t");
     printf("\t\t\tmonitores\t");
     printf("\t\t\tnotebook HP\t\t\n");
     printf("\nnotebooks");
     printf("\nmonitores");
     printf("\nimpressoras");
     
     for(int lin = 0; lin < 4; lin++) {
         for(int col = 0; col < 3; col++) {
             
      printf("\t\t\t\t\t\t\t\t\t%d ", matriz[lin][col]); 
             
         }

printf("\n");
     }
             break;
            
            case 2:
            
            printf("\nInforme o número da linha (0 a 3):");
    scanf("%d", &linha);

    printf("Informe o número da coluna (0 a 2):");
    scanf("%d", &coluna);

    printf("Informe o novo valor para a posição[%d][%d]: ", linha, coluna);
    scanf("%d", &novoValor);

    matriz[linha][coluna] = novoValor;

    printf("\nMatriz atualizada:\n");

    for(int lin = 0; lin < 4; lin++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", matriz[lin][col]);
        }
printf("\n");
    }
            
            break;
            
            case 3:
            if(matriz[0][0] == 0 && matriz[0][1] == 0 && matriz[0][2] == 0 &&
               matriz[1][0] == 0 && matriz[1][1] == 0 && matriz[1][2] == 0 &&
               matriz[2][0] == 0 && matriz[2][1] == 0 && matriz[2][2] == 0 &&
               matriz[3][0] == 0 && matriz[3][1] == 0 && matriz[3][2] == 0)   {
                  int linha, coluna, novoValor;
    printf("\n\t\t\t\t\t\t\t\t\tProdutos\n\n");
     printf("\t\t\t\tnotebooks Dell\t");
     printf("\t\t\tmonitores\t");
     printf("\t\t\tnotebook HP\t\t\n");
     printf("\nnotebooks");
     printf("\nmonitores");
     printf("\nimpressoras"); 
     
     for(int lin = 0; lin < 4; lin++) {
         for(int col = 0; col < 3; col++) {
             
      printf("\t\t\t\t\t\t\t\t\t%d ", matriz[lin][col]);
             
         }
printf("\n");
     }
    } 
            else {
                printf("\nEstoque não está zerado.\n"); }
             break;
            
            case 4:
            int total = 0;
            for(int lin = 0; lin < 4; lin++) {
                for(int col = 0; col < 3; col++) {
                    total += matriz[lin][col];
                }   
            }
            printf("\nTotal de produtos no estoque: %d\n", total);  
            printf("\n\t\t\t\t\t\t\t\t\tProdutos\n\n");
            printf("\t\t\t\tnotebooks Dell\t"); 
            printf("\t\t\tmonitores\t");
            printf("\t\t\tnotebook HP\t\t\n");
            printf("\nnotebooks");
            printf("\nmonitores");
            printf("\nimpressoras");
            for(int lin = 0; lin < 4; lin++) {
                for(int col = 0; col < 3; col++) {
                    printf("\t\t\t\t\t\t\t\t\t%d ", matriz[lin][col]);
                }
                printf("\n");   
            }   
            printf("\nTotal de produtos por categoria: %d\n", total);

            
             break;
            
            case 0:
            printf("Saindo do programa...\n");
            rpt = 0; // Define rpt como 0 para sair do loop 
            printf("Obrigado por utilizar o sistema!\n");
            printf("Volte sempre!\n");
            fflush(stdout); // Garante que a saída seja exibida antes de sair
            fflush(stdin); // Limpa o buffer de entrada
            getchar(); // Aguarda o usuário pressionar Enter antes de sair
            
            return 0; 
            
            default:
           
            printf("Opção inválida!\n");
            printf("Por favor, escolha uma opção válida.\n");
            break;
            
            
        }
    printf("\nDeseja voltar ao menu? (1 - Sim / 0 - Não): ");
        scanf("%d", &rpt); 

    } while (rpt == 1);

    printf("Programa finalizado.\n");
    
    return 0;
}