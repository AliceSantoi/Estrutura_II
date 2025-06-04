// tabela hash usando vetor com tamanho fixo

#include <stdio.h>
#include <stdlib.h>
#define TAM 31 // para saber o tamanho da tabela: 2 * [quant.elementos(15)] e pega o primo mais próximo do resultado

void inicializaTabela(int tabela[]);
int indiceTabela(int valor);
void inserir(int tabela[], int valor);
int buscaHash(int tabela[], int valor);
void imprimir(int tabela[]);

int main()
{
    int opcao, valor, busca, tabela[TAM];
    inicializaTabela(tabela);

    do
    {
        printf("\n1 - Inserir\n2 - imprimir\n3 - busca\n0 - sair\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            printf("- ");
            scanf("%d", &valor);
            inserir(tabela, valor);
            break;
        case 2:
            imprimir(tabela);
            break;
        case 3:
            printf("- ");
            scanf("%d",&valor);
            busca = buscaHash(tabela,valor);
                if(busca)
                    printf("numero %d encontrado!", busca);
                else    
                    printf("numero %d nao encontrado.", valor);
        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}

void inicializaTabela(int tabela[])
{
    for (int i = 0; i < TAM; i++)
    {
        tabela[i] = 0;
    }
}

int indiceTabela(int valor)
{
    return valor % TAM;
}

void inserir(int tabela[], int valor)
{
    int id;
    id = indiceTabela(valor);
    while (tabela[id] != 0)
    {
        id = indiceTabela(id + 1);
    }

    tabela[id] = valor;
}

int buscaHash(int tabela[], int valor)
{
    int id = indiceTabela(valor);
    while (tabela[id] != 0)
    {
        if (tabela[id] == valor)
            return valor;
        else
            id = indiceTabela(id + 1);
    }

    return 0;
}

void imprimir(int tabela[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%d = %d\n", i + 1, tabela[i]);
    }
}
