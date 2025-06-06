// Crie duas matrizes `3x3`, some seus valores e exiba o resultado.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "soma_matrizes.h"
#define TAM 3

int main()
{
    int mA[TAM][TAM], mB[TAM][TAM];

    lerMatriz(mA, TAM);
    lerMatriz(mB, TAM);
    imprimeMatrizes(mA, mB, TAM);

    matrizesSomadas(mA, mB, TAM);

    return 0;
}
