#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "soma_matrizes.h"
#define TAM 3


void lerMatriz(int matriz[][TAM], int tamanho)
{
    int numAleatorio;
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            numAleatorio = (rand() % 99) + 1;
            matriz[i][j] = numAleatorio;
        }
    }
    printf("\n");
}

void matrizesSomadas(int matrizA[][TAM], int matrizB[][TAM], int tamanho)
{
    printf("A + B = ");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            matrizA[i][j] = matrizA[i][j] + matrizB[i][j];
            printf(" %2d |", matrizA[i][j]);
        }
    }
    printf("\n");
}

void imprimeMatrizes(int matrizA[][TAM], int matrizB[][TAM], int tamanho)
{
    printf("A: ");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf(" %2d |", matrizA[i][j]);
        }
    }
    printf("\n");

    printf("B: ");
    for (int k = 0; k < tamanho; k++)
    {
        for (int f = 0; f < tamanho; f++)
        {
            printf(" %2d |", matrizB[k][f]);
        }
    }
    printf("\n");
}