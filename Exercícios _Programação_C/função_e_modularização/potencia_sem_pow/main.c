#include <stdio.h>
#include <stdlib.h>
#include "potencia_sem_pow.h"

int main()
{

    int numero, expoente;

    printf("digite um numero: ");
    scanf("%d", &numero);

    do
    {
        printf("Digite o expoente: ");
        scanf("%d", &expoente);
    } while (expoente < 0);

    int resultado = potencia(numero, expoente);

    printf("%d elevado a %d = %d", numero, expoente, resultado);

    return 0;
}