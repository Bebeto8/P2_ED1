#include "stdio.h"
#include "cliente.h"

typedef struct no
{
    Cliente *c ;
    struct no* prox ;
    struct no* ant ;
}No ;

No *criaNo( Cliente *c ) ;
Cliente *getCliente (No* node ) ;