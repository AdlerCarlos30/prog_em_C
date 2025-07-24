#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50], especie[30], raca[30];
    int idade;
    float peso;
} Animal;

int main() {
    int opcao;
    FILE *arquivo;

    do {
        printf("\n1-Cadastrar 2-Listar 3-Editar 4-Excluir 0-Sair\nOpcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa o \n do buffer do scanf

        if (opcao == 1) {
            Animal pet;
            printf("Nome: ");
            fgets(pet.nome, 50, stdin);
            pet.nome[strcspn(pet.nome, "\n")] = 0; // remove \n

            printf("Especie: ");
            fgets(pet.especie, 30, stdin);
            pet.especie[strcspn(pet.especie, "\n")] = 0;

            printf("Raca: ");
            fgets(pet.raca, 30, stdin);
            pet.raca[strcspn(pet.raca, "\n")] = 0;

            printf("Idade: ");
            scanf("%d", &pet.idade);
            printf("Peso: ");
            scanf("%f", &pet.peso);
            getchar();

            // verifica duplicado
            int dup = 0;
            arquivo = fopen("cadastro_animais.txt", "r");
            if (arquivo) {
                char linha[200];
                while (fgets(linha, 200, arquivo)) {
                    if (strncmp(linha, "Nome: ", 6) == 0) {
                        char nomeArquivo[50];
                        strcpy(nomeArquivo, linha+6);
                        nomeArquivo[strcspn(nomeArquivo, "\n")] = 0;
                        if (strcmp(nomeArquivo, pet.nome) == 0) {
                            dup = 1; break;
                        }
                    }
                }
                fclose(arquivo);
            }

            if (dup) {
                printf("Animal ja cadastrado.\n");
            } else {
                arquivo = fopen("cadastro_animais.txt", "a");
                fprintf(arquivo, "Nome: %s\nEspecie: %s\nRaca: %s\nIdade: %d anos\nPeso: %.2f kg\n--------------------------\n",
                        pet.nome, pet.especie, pet.raca, pet.idade, pet.peso);
                fclose(arquivo);
                printf("Animal cadastrado com sucesso!\n");
            }

        } else if (opcao == 2) {
            arquivo = fopen("cadastro_animais.txt", "r");
            if (!arquivo) printf("Nenhum cadastro.\n");
            else {
                char linha[200];
                while (fgets(linha, 200, arquivo)) printf("%s", linha);
                fclose(arquivo);
            }
        } else if (opcao == 3 || opcao == 4) {
            char nomeBusca[50];
            printf("Nome do animal para %s: ", (opcao == 3) ? "editar" : "excluir");
            fgets(nomeBusca, 50, stdin);
            nomeBusca[strcspn(nomeBusca, "\n")] = 0;

            arquivo = fopen("cadastro_animais.txt", "r");
            FILE *temp = fopen("temp.txt", "w");
            if (!arquivo || !temp) {
                printf("Erro ao abrir arquivo.\n");
                if (arquivo) fclose(arquivo);
                if (temp) fclose(temp);
                continue;
            }

            char linha[200];
            int achou = 0;
            while (fgets(linha, 200, arquivo)) {
                if (strncmp(linha, "Nome: ", 6) == 0) {
                    char nomeArquivo[50];
                    strcpy(nomeArquivo, linha+6);
                    nomeArquivo[strcspn(nomeArquivo, "\n")] = 0;

                    if (strcmp(nomeArquivo, nomeBusca) == 0) {
                        achou = 1;
                        if (opcao == 4) {
                            // pula as próximas 5 linhas do registro
                            for (int i=0; i<5; i++) fgets(linha, 200, arquivo);
                        } else {
                            // editar: lê dados novos
                            Animal pet;
                            printf("Novo nome: ");
                            fgets(pet.nome, 50, stdin);
                            pet.nome[strcspn(pet.nome, "\n")] = 0;
                            printf("Nova especie: ");
                            fgets(pet.especie, 30, stdin);
                            pet.especie[strcspn(pet.especie, "\n")] = 0;
                            printf("Nova raca: ");
                            fgets(pet.raca, 30, stdin);
                            pet.raca[strcspn(pet.raca, "\n")] = 0;
                            printf("Nova idade: ");
                            scanf("%d", &pet.idade);
                            printf("Novo peso: ");
                            scanf("%f", &pet.peso);
                            getchar();

                            fprintf(temp, "Nome: %s\nEspecie: %s\nRaca: %s\nIdade: %d anos\nPeso: %.2f kg\n--------------------------\n",
                                    pet.nome, pet.especie, pet.raca, pet.idade, pet.peso);

                            // pula registro antigo que já está na primeira linha
                            for (int i=0; i<5; i++) fgets(linha, 200, arquivo);
                        }
                    } else {
                        fputs(linha, temp);
                    }
                } else {
                    fputs(linha, temp);
                }
            }
            fclose(arquivo);
            fclose(temp);

            remove("cadastro_animais.txt");
            rename("temp.txt", "cadastro_animais.txt");

            if (achou) printf("Operacao concluida com sucesso.\n");
            else printf("Animal nao encontrado.\n");

        } else if (opcao == 0) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}