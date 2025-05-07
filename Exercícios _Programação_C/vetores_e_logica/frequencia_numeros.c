#include <stdio.h>
#include <stdlib.h>

const int TAMANHO = 10;

void exibirVetor(int *vetor);
int *verificaVetor(int *vetor, int *resultado);

int main()
{
    int i;
    int vetor[TAMANHO];
    int vetorResultado[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("valor %d: ", (i + 1));
        scanf("%d", &vetor[i]);
    }

    exibirVetor(vetor);
    verificaVetor(vetor, vetorResultado);

    for (i = 0; i < TAMANHO; i++)
    {
        if (vetorResultado[i] > 0)
        {
            printf("%d: %d vezes. \n", vetor[i], vetorResultado[i]);
        }
    }

    printf("\n\n");

    return 0;
}

void exibirVetor(int *vetor)
{
    int i;
    printf("listando os numeros...\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("valor %d: %d\n", (i + 1), vetor[i]);
    }
}

int *verificaVetor(int *vetor, int *resultado)
{
    int i, j, k = 0, contador;
    int vetorOrigin[TAMANHO];

    for (i = 0; i < TAMANHO; i++)
    {
        vetorOrigin[i] = vetor[i];
    }

    for (i = 0; i < TAMANHO; i++)
    {
        contador = 0;
        for (j = k++; j < TAMANHO; j++) 
        {
            if (vetor[i] == vetorOrigin[j])
            {
                contador++;
                vetor[j] = -1;
            }

            resultado[i] = contador;
        }

        return resultado;
    }
}
