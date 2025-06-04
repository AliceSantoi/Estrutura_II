#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

Arv *inserir_VOne(Arv *raiz, int valor)
{
    if (raiz == NULL)
    {
        Arv *aux = malloc(sizeof(Arv));
        aux->valor = valor;
        aux->esquerda = NULL;
        aux->direita = NULL;
        return aux;
    }
    else
    {
        if (valor < raiz->valor)
            raiz->esquerda = inserir_VOne(raiz->esquerda, valor);
        else
            raiz->direita = inserir_VOne(raiz->direita, valor);
        return raiz;
    }
}

void imprimir_arvore(Arv *raiz)
{
    if (raiz)
    {
        imprimir_arvore(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimir_arvore(raiz->direita);
    }
}

Arv *busca_arvore(Arv *raiz, int valor)
{
    if (raiz)
    {
        if (valor == raiz->valor)
            return raiz;
        else if (valor < raiz->valor)
            return busca_arvore(raiz->esquerda, valor);
        else
            return busca_arvore(raiz->direita, valor);
    }

    return NULL;
}