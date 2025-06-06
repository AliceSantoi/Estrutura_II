// Dado dois vetores de inteiros, mostre os elementos comuns entre eles.

#include <stdio.h>
#include <stdlib.h>
#include "../frequencia_numeros/frequencia_numeros.h"
#define TAM 10

void intersecaoAB(int vet1[], int vet2[], int tamanho);

int main()
{
    int v1[TAM], v2[TAM];

    printf("Vetor A:\n");
    lerVetor(v1, TAM);
    printf("Vetor B:\n");
    lerVetor(v2, TAM);
    intersecaoAB(v1, v2, TAM);

    return 0;
}

void intersecaoAB(int vet1[], int vet2[], int tamanho)
{
    printf("{");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vet1[i] == vet2[j])
                printf("%d,", vet1[i]);
        }
    }
    printf("}");
}