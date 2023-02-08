#include "no.h"

No *criaNo(Cliente *c)
{
    No *novo = (No*)malloc(sizeof(Cliente));

    novo->c = c;
    novo->ant = NULL;
    novo->prox = NULL;

    return novo;
}

Cliente *getCliente(No* node)
{
    if (node != NULL)
    {
        return node->c;
    } 

    return NULL;
}