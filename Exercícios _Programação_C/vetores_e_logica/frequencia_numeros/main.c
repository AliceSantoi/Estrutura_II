#include <stdio.h>
#include <stdlib.h>
#include "frequencia_numeros.h"
#define TAM 10

int main()
{
    int vet[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("- ");
        scanf("%d", &vet[i]);
    }

    ordenaVetor(vet, TAM);
    contaDistintos(vet, TAM);
}