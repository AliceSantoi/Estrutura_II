/* Implemente uma função `int potencia(int base, int expoente)`
que calcule potências usando apenas multiplicações.*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente)
{
    int cont = 1;
    for (int i = 1; i <= expoente; i++)
    {
        cont *= base;

        if (expoente == 0)
        {
            return 1;
        }
    }

    return cont;
}