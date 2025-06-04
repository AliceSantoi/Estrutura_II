#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fib[1600] = {0};
int x(int n);
int x2(int n);

int main(int argc, char *argv[]){ // argc = quantos argumentos passados e argv = quais argumentos passar

    int n = atoi(argv[1]);
    int n_max = atoi(argv[2]);
    clock_t start, end;

    double tempo = 0.0;
    int resultado;

    for (int i = 0; i < n_max; i++)
    {
        start = clock();
        resultado = x2(n);
        end = clock();
        tempo += ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Progresso: %.2f%% Concluido\n", ((i + 1) / (double)n_max) * 100);
    }

    printf("Fibonaccil na posicao: %d is %d\n", n, resultado);
    printf("Tempo medio: %f µs\n", (tempo / n_max) * 1e6);

    return 0;
}

int x(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return x(n - 1) + x(n - 2);
    }
}

int x2(int n)
{
    if (n <= 1)
    {
        return n;
    }

    if (fib[n] != 0)
    {
        return fib[n];
    }

    fib[n] = x2(n - 1) + x2(n - 2);
    return fib[n];
}