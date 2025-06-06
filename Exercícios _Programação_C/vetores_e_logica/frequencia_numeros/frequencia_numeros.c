// Leia 10 números inteiros e mostre quantas vezes cada número distinto aparece.
#include <stdio.h>
#include <stdlib.h>
#include "frequencia_numeros.h"

void lerVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("- ");
        scanf("%d", &vetor[i]);
    }
}

void ordenaVetor(int *vetor, int tamanho)
{
    int i = 0;
    int j = 1;
    int aux = 0;
    while (j < tamanho)
    {
        aux = vetor[j];
        i = j - 1;
        while ((i >= 0) && (vetor[i] > aux))
        {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        vetor[i + 1] = aux;
        j = j + 1;
    }
}

void contaDistintos(int *vetor, int tamanho)
{
    int cont = 1;
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] == vetor[i - 1])
        {
            cont++;
        }
        else
        {
            printf("numero %d aparece %d vezes.\n", vetor[i - 1], cont);
            cont = 1;
        }
    }
}

// obs: alterar exibição para quando cont = 1 mostrar "numero x apareceu uma vez"