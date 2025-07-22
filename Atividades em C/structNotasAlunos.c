#include <stdio.h>

struct ALUNO {
    int matricula;
    char nome[150];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
};

int main() {
    struct ALUNO turma[3]; 
    int lin;

    for (lin = 0; lin < 3; lin++) {
        printf("\n____Dados do Aluno %d _____\n", lin + 1);

        printf("Matrícula: ");
        scanf("%d", &turma[lin].matricula);
        getchar(); 

        printf("Nome: ");
        fgets(turma[lin].nome, sizeof(turma[lin].nome), stdin);

        printf("Nota 1: ");
        scanf("%f", &turma[lin].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[lin].nota2);

        printf("Nota 3: ");
        scanf("%f", &turma[lin].nota3);

        printf("Nota 4: ");
        scanf("%f", &turma[lin].nota4);
    }

    printf("\n____Dados dos Alunos_____\n");
    for (lin = 0; lin < 3; lin++) {
        printf("\nAluno %d\n", lin + 1);
        printf("Matrícula: %d\n", turma[lin].matricula);
        printf("Nome: %s", turma[lin].nome);
        printf("Nota 1: %.2f\n", turma[lin].nota1);
        printf("Nota 2: %.2f\n", turma[lin].nota2);
        printf("Nota 3: %.2f\n", turma[lin].nota3);
        printf("Nota 4: %.2f\n", turma[lin].nota4);
    }

    return 0;
}
