#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Aluno *criaAluno(char nome[], int matricula, float media)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->media = media;

    return aluno;
}