#include <stdio.h>
#include <stdlib.h>
#include "frequencia_numeros.h"
#define TAM 10

int main()
{
    int vet[TAM];

    lerVetor(vet, TAM);
    ordenaVetor(vet, TAM);
    contaDistintos(vet, TAM);
    
    return 0;
}