// Desenvolvido por Adler Carlos e Jonas Soares
#include <stdio.h>

int main() {
    int opcao, rpt;
    int linha, coluna, novoValor;

    int matriz[4][3] = {
        {7, 8, 6},
        {9, 5, 6},
        {5, 7, 6},
        {6, 7, 2}
    };

    const char *categorias[3] = {"Notebooks Dell", "Monitores", "Notebook HP"};
    const char *linhas[4] = {"Notebooks", "Monitores", "Impressoras", "Acessórios"};

    do {
        printf("\n\t\t\t==== Estoque Info Tech ====\n\n");
        printf("1 - Exibir Estoque Completo\n");
        printf("2 - Atualizar Quantidade\n");
        printf("3 - Verificar Produtos com Estoque Zerado\n");
        printf("4 - Total por Categoria\n");
        printf("0 - Sair do Programa\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n\t\t\t\tEstoque Atual\n\n");
                printf("\t\t%-18s %-12s %-12s\n", categorias[0], categorias[1], categorias[2]);

                for (int lin = 0; lin < 4; lin++) {
                    printf("%-18s\t", linhas[lin]);
                    for (int col = 0; col < 3; col++) {
                        printf("%-12d", matriz[lin][col]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\nInforme a linha (0 a 3): ");
                scanf("%d", &linha);
                printf("Informe a coluna (0 a 2): ");
                scanf("%d", &coluna);

                if (linha < 0 || linha > 3 || coluna < 0 || coluna > 2) {
                    printf("Posição inválida! Tente novamente.\n");
                    break;
                }

                printf("Valor atual de [%d][%d] (%s - %s): %d\n",
                       linha, coluna, linhas[linha], categorias[coluna], matriz[linha][coluna]);
                printf("Informe o novo valor (>= 0): ");
                scanf("%d", &novoValor);

                if (novoValor < 0) {
                    printf("Valor inválido! Estoque não pode ser negativo.\n");
                    break;
                }

                if (matriz[linha][coluna] == 0 && novoValor > 0) {
                    printf("Produto estava com estoque zerado. Reposição realizada!\n");
                }

                matriz[linha][coluna] = novoValor;
                printf("Estoque atualizado com sucesso!\n");
                break;

            case 3: {
                int encontrouZerado = 0;
                printf("\nProdutos com estoque zerado:\n\n");

                for (int lin = 0; lin < 4; lin++) {
                    for (int col = 0; col < 3; col++) {
                        if (matriz[lin][col] == 0) {
                            encontrouZerado = 1;
                            printf(" - [%d][%d] %s - %s\n", lin, col, linhas[lin], categorias[col]);
                        }
                    }
                }

                if (!encontrouZerado) {
                    printf("Nenhum item com estoque zerado.\n");
                } else {
                    int atualizar;
                    printf("\nDeseja atualizar algum produto zerado? (1 - Sim / 0 - Não): ");
                    scanf("%d", &atualizar);

                    if (atualizar == 1) {
                        printf("Informe a linha (0 a 3): ");
                        scanf("%d", &linha);
                        printf("Informe a coluna (0 a 2): ");
                        scanf("%d", &coluna);

                        if (linha < 0 || linha > 3 || coluna < 0 || coluna > 2) {
                            printf("Posição inválida! Tente novamente.\n");
                            break;
                        }

                        printf("Informe o novo valor para [%d][%d] (%s - %s): ",
                               linha, coluna, linhas[linha], categorias[coluna]);
                        scanf("%d", &novoValor);

                        if (novoValor < 0) {
                            printf("Valor inválido! Estoque não pode ser negativo.\n");
                            break;
                        }

                        matriz[linha][coluna] = novoValor;
                        printf("Estoque atualizado com sucesso!\n");
                    }
                }
                break;
            }

            case 4: {
                int total = 0;
                for (int lin = 0; lin < 4; lin++) {
                    for (int col = 0; col < 3; col++) {
                        total += matriz[lin][col];
                    }
                }

                printf("\nTotal de produtos no estoque: %d\n", total);
                printf("\n\t\t%-18s %-12s %-12s\n", categorias[0], categorias[1], categorias[2]);

                for (int lin = 0; lin < 4; lin++) {
                    printf("%-12s\t", linhas[lin]);
                    for (int col = 0; col < 3; col++) {
                        printf("%-12d", matriz[lin][col]);
                    }
                    printf("\n");
                }
                break;
            }

            case 0:
                printf("\nSaindo do programa...\n");
                printf("Obrigado por utilizar o sistema!\n");
                return 0;

            default:
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
                break;
        }

        do {
            printf("\nDeseja voltar ao menu? (1 - Sim / 0 - Não): ");
            scanf("%d", &rpt);

            if (rpt != 0 && rpt != 1) {
                printf("Entrada inválida! Digite 1 para continuar ou 0 para sair.\n");
            }
        } while (rpt != 0 && rpt != 1);

    } while (rpt == 1);

    printf("\nPrograma finalizado.\n");
    return 0;
}