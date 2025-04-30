#include <stdio.h>
#include <stdlib.h>

int root(char chave, char *vet);
int print(char *vet);
int set_left(char chave, char *vet, int pai);
int set_right(char chave, char *vet, int pai);

int main()
{
    char vetor[8];

    root('A', vetor);
    set_left('B', vetor, 0);
    set_right('C', vetor, 0);
    set_left('B', vetor, 1);
    set_left('B', vetor, 2);

    print(vetor);

    return 0;
}

int root(char chave, char *vet)
{
    if (vet[0] != '\0')
    {
        printf("A raiz ja está preenchida.");
    }
    else
    {
        vet[0] = chave;
    }
    return 0;
}

int set_left(char chave, char *vet, int pai)
{
    if (vet[pai] == '\0')
    {
        printf("nao eh possivel adicionar filho na posicao %d\n", (2 * pai) + 1);
    }
    else
    {
        vet[(2 * pai) + 1] = chave;
    }

    return 0;
}

int set_right(char chave, char *vet, int pai)
{
    if (vet[pai] == '\0')
    {
        printf("nao eh possivel adicionar filho na posicao %d\n", (2 * pai) + 2);
    }
    else
    {
        vet[(2 * pai) + 2] = chave;
    }

    return 0;
}

int print(char *vet)
{
    for (int i = 0; i < 8; i++)
    {
        if (vet[i] != '\0')
        {
            printf("%c", vet[i]);
        }
        else
        {
            printf("-");
        }
    }

    return 0;
}