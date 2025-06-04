#ifndef arvore_binaria_h
#define arvore_binaria_h
#include <stdio.h>
#include <stdlib.h>


typedef struct arv
{
    int valor;
    struct arv *esquerda, *direita;
} Arv;

Arv *inserir_VOne(Arv *raiz, int valor);
void imprimir_arvore(Arv *raiz);
Arv *busca_arvore(Arv *raiz, int valor);

#endif