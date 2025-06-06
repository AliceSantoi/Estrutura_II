#include <stdio.h>
#include <stdlib.h>
#define TAM 31

void inicializaTabela(int *tabela);

int main()
{
    int tabela[TAM];
    inicializaTabela(tabela);

    return 0;
}

void inicializaTabela(int *tabela)
{
    for (int i = 0; i < TAM; i++)
    {
        tabela[i] = 0;
    }
}

int indiceTabela();
