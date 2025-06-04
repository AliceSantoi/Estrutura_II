#include <stdio.h>
#include <stdlib.h>

typedef struct arv
{
    int valor;
    struct arv *esquerda, *direita;
} Arv;

Arv *inserirArvore(Arv *raiz, int valor)
{
    if (raiz == NULL)
    {
        Arv *raiz = malloc(sizeof(Arv));
        raiz->valor = valor;
        raiz->esquerda = NULL;
        raiz->direita = NULL;
        return raiz;
    }

    if (valor < raiz->valor)
    {
        raiz->esquerda = inserirArvore(raiz->esquerda, valor);
    }
    else
    {
        raiz->direita = inserirArvore(raiz->direita, valor);
    }

    return raiz;
}

Arv *buscaArvore(Arv *raiz, int valor)
{
    if (raiz)
    {
        if (valor == raiz->valor)
            return raiz;
        else if (valor < raiz->valor)
            return buscaArvore(raiz->esquerda, valor);
        else
            return buscaArvore(raiz->direita, valor);

        return NULL;
    }
}

int main()
{
    Arv *busca, *t = NULL;

    t = inserirArvore(t, 5);
    busca = buscaArvore(t, 4);

    if (busca)
        printf("numero encontrado!\n");
    else
        printf("numero nao encontrado!\n");

    return 0;
}