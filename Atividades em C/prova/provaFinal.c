#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    char especie[31];
    char raca[31];
    int idade;
    float peso;
} Animal;

int main() {
    Animal pet;
    FILE *arquivo;

    // Abrir arquivo para adicionar dados
    arquivo = fopen("animais.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    // Ler dados do usuário
    printf("Digite o nome do animal: ");
    fgets(pet.nome, sizeof(pet.nome), stdin);
    pet.nome[strcspn(pet.nome, "\n")] = '\0';  // remover \n

    printf("Digite a espécie: ");
    fgets(pet.especie, sizeof(pet.especie), stdin);
    pet.especie[strcspn(pet.especie, "\n")] = '\0';

    printf("Digite a raça: ");
    fgets(pet.raca, sizeof(pet.raca), stdin);
    pet.raca[strcspn(pet.raca, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &pet.idade);

    printf("Digite o peso: ");
    scanf("%f", &pet.peso);

    getchar(); // limpar buffer

    // Gravar no arquivo (formato texto simples)
    fprintf(arquivo, "%s;%s;%s;%d;%.2f\n", pet.nome, pet.especie, pet.raca, pet.idade, pet.peso);

    fclose(arquivo);

    // Abrir arquivo para leitura e exibir os dados cadastrados
    arquivo = fopen("animais.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    printf("\nAnimais cadastrados:\n");
    printf("Nome | Espécie | Raça | Idade | Peso\n");
    printf("-------------------------------------\n");

    while (fscanf(arquivo, "%50[^;];%30[^;];%30[^;];%d;%f\n",
                  pet.nome, pet.especie, pet.raca, &pet.idade, &pet.peso) == 5) {
        printf("%s | %s | %s | %d | %.2f\n", pet.nome, pet.especie, pet.raca, pet.idade, pet.peso);
    }

    fclose(arquivo);

    return 0;
}