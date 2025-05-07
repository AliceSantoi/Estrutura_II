// Dado dois vetores de inteiros, mostre os elementos comuns entre eles.

#include <stdio.h>
#include <stdlib.h>
const int TAMANHO = 8;

int *mesmosValores(int *vetOne, int *vetTwo);

int main()
{
    int vetOne[TAMANHO], vetTwo[TAMANHO];
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("valor %d: ", (i + 1));
        scanf("%d",&vetOne[i]);
    }
    int *comuns = mesmosValores(vetOne,vetTwo);

    return 0;
}

int *mesmosValores(int *vetOne, int *vetTwo)
{

}