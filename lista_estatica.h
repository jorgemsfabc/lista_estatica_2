#ifndef LISTA_ESTATTICA_H
#define LISTA_ESTATTICA_H

#define TAM_MAX 10

typedef int TipoItem;

typedef struct
{
    TipoItem item[TAM_MAX];
    int primeiro, ultimo;
    int pos;
} Lista;

Lista *cria_lista_vazia();

int vazia(Lista *l);

//Retorna o primeiro item da lista
TipoItem primeiro(Lista *l);

//Retorna o proximo item da lista
TipoItem proximo(Lista *l);

//Imprime os itens da lista
void imprime(Lista *l);

//Imprime usando as funções iteradoras
void imprime2(Lista *l);

//Insere um item na lista estática na ordem
void insere(Lista* l, TipoItem x);

//busca um item na lista estática na ordem
TipoItem busca(Lista* l, TipoItem x);

#endif
