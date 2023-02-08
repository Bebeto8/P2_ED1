#include "no.h"

typedef struct fila
{
    int tamanho;
    No* pri;
    No* aux;
    No* fim;
} Fila;

Fila *criaFila( ) ;
void push ( Fila *F, No* node ) ;
No* pop (Fila *F ) ;


