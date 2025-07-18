// Adler Carlos e Jonas Soares
#include <stdio.h>

int main() {
    int opcao, num, rpt;
    int matriz[4][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {5, 7, 9},
                {6, 7,8} 
        
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
            
             break;
            
            case 4:
            
             break;
            
            case 0:
            
            return 0; 
            
            default:
            
            printf("Opção inválida!\n");
            
            
        }
    printf("\nDeseja voltar ao menu? (1 - Sim / 0 - Não): ");
        scanf("%d", &rpt);

    } while (rpt == 1);

    printf("Programa finalizado.\n");
    
    return 0;
}