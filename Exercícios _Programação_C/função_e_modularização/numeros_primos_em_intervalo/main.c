#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "numeros_primos.h"

int main()
{
    int numberOne, numberTwo;

    do
    {
        printf("Digite o primeiro numero: ");
        scanf("%d", &numberOne);

        printf("Digite o segundo numero: ");
        scanf("%d", &numberTwo);
    } while (numberOne <= 0 || numberTwo <= 0);

    imprimeIntervalo(numberOne, numberTwo);

    return 0;
}