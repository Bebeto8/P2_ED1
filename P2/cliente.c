#include "cliente.h"

Cliente *criaCliente(char* nome , int tipo , int idade)
{
    Cliente *novo = (Cliente*)malloc(sizeof(Cliente));

    novo->nome = nome;
    novo->idade = idade;
    novo->tipo = tipo;

    return novo;
}