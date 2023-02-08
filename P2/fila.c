#include "fila.h"

Fila *criaFila()
{
    Fila *novo = (Fila*)malloc(sizeof(Fila));

    novo->tamanho = 0;
    novo->pri = NULL;
    novo->fim = NULL;
    novo->aux = NULL;

    return novo;
}
// RESERVA = 3 // PREF = 2 // VIP = 1 // DEMAIS = 0
void push(Fila *f, No *node)
{
    if (f->pri != NULL)
    {
        if (node->c->tipo <= f->fim->c->tipo)
        {
            // insereFim();
            node->ant = f->fim;
            f->fim->prox = node;
            f->fim = node;
            f->aux = node;

        }
        else if (node->c->tipo >= f->pri->c->tipo)
        {
            // insereInicio();
            node->prox = f->pri;
            f->pri->ant = node;
            f->pri = node;
            f->aux = node;
        }
        else
        {
            f->aux = f->fim;
            while (f->aux->c->tipo < node->c->tipo)
            {
                f->aux = f->aux->ant;
            }
            if (node->c->tipo == 2)
            {
                while (f->aux->c->idade < node->c->idade && f->aux->c == 2)
                {
                    f->aux = f->aux->ant;
                }
            }
            // insereDir();
            node->prox = f->aux->prox;
            f->aux->prox->ant = node;
            f->aux->prox = node;
            node->ant = f->aux;
        }
    } 
    else
    {
        f->pri = node;
        f->fim = node;
        f->aux = node;
    }
}

No* pop(Fila *f)
{
    if (f != NULL && f->pri != NULL)
    {
        No *no;

        if (f->pri != f->fim)
        {
            no = f->pri;
            f->pri = f->pri->prox;
            f->pri->ant = NULL;
        }
        else
        {
            f->aux = f->pri;
            f->pri = NULL;
            f->fim = NULL;
            no = f->aux;
            // free(f->aux);
            f->aux = NULL;
        }

        return no;
    }
}