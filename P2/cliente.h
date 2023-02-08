// c l i e n t e . h
typedef struct cliente
{
    char* nome;
    int tipo;
    int idade;
} Cliente;

Cliente *criaCliente( char* nome , int tipo , int idade ) ;