#include <stdio.h>

int main() {
    int opcao, num, repetir;

    do {
        printf("\n=== Menu de Linguagens ===\n");
        printf("1 – For\n");
        printf("2 – While\n");
        printf("3 – Do-While\n");
        printf("0 – Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int pares = 0;
                for (int x = 0; x < 10; x++) {
                    printf("Digite o %dº número: ", x + 1);
                    scanf("%d", &num);
                    if (num % 2 == 0) pares++;
                }
                printf("Quantidade de números pares com For: %d\n", pares);
                break;
            }

            case 2: {
                int pares = 0, x = 0;
                while (x < 10) {
                    printf("Digite o %dº número: ", x + 1);
                    scanf("%d", &num);
                    if (num % 2 == 0) pares++;
                    x++;
                }
                printf("Quantidade de números pares com While: %d\n", pares);
                break;
            }

            case 3: {
                int pares = 0, x = 0;
                do {
                    printf("Digite o %dº número: ", x + 1);
                    scanf("%d", &num);
                    if (num % 2 == 0) pares++;
                    x++;
                } while (x < 10);
                printf("Quantidade de números pares com Do-While: %d\n", pares);
                break;
            }

            case 0:
                printf("Encerrando o programa...\n");
                return 0;

            default:
                printf("Opção inválida!\n");
        }

        // Perguntar se o usuário deseja repetir
        printf("\nDeseja voltar ao menu? (1 - Sim / 0 - Não): ");
        scanf("%d", &repetir);

    } while (repetir == 1);

    printf("Programa finalizado.\n");
    return 0;
}