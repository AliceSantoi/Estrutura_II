#ifndef aluno_h
#define aluno_h

typedef struct aluno
{
    char nome[100];
    int matricula;
    float media;
} Aluno;

Aluno *criaAluno(char nome[], int matricula, float media);

#endif