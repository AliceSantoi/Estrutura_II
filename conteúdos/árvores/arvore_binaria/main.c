#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main()
{
    Arv *busca, *raiz = NULL;
    int opcao, valor, numero;
    do
    {
        printf("\n");
        printf("Inserir [1]\nImprimir [2]\nBuscar [3]\nSair [0]\n");
        scanf("%d", &opcao);
        printf("\n");
        switch (opcao)
        {
        case 1:
            printf("Insira o valor: ");
            scanf("%d", &valor);
            raiz = inserir_VOne(raiz, valor);
            break;
        case 2:
            printf("Imprimindo...\n");
            imprimir_arvore(raiz);
            printf("\n");
            break;
        case 3:
            printf("Digite o numero: \n");
            scanf("%d", &numero);
            busca = busca_arvore(raiz, numero);
            if (busca)
                printf("numero encontrado!\n");
            else
                printf("numero nao encontrado!\n");

        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}