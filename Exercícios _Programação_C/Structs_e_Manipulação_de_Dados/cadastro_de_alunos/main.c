// Crie uma `struct Aluno` com nome, matrícula e média. Cadastre `n` alunos e mostre os aprovados.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

int main()
{
    Aluno **alunos = NULL;
    int cont = 0;
    char nome[100];
    int matricula;
    float media;

    while (1)
    {
        printf("Digite o nome do aluno (ou 'sair' para encerrar): ");
        scanf(" %[^\n]", nome);

        if (strcmp(nome, "sair") == 0)
            break;

        printf("Matrícula: ");
        scanf("%d", &matricula);

        printf("Média: ");
        scanf("%f", &media);

        alunos = realloc(alunos, (cont + 1) * sizeof(Aluno *));
        alunos[cont] = criaAluno(nome, matricula, media);
        cont++;
    }

    printf("\n=== Alunos Aprovados (média >= 7.0) ===\n");
    for (int i = 0; i < cont; i++)
    {
        if (alunos[i]->media >= 7.0)
        {
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Matrícula: %d\n", alunos[i]->matricula);
            printf("Média: %.2f\n\n", alunos[i]->media);
        }
        free(alunos[i]);
    }

    free(alunos);

    return 0;
}
