#include "lista_estatica.h"
#include <stdlib.h>
#include <stdio.h>

Lista *cria_lista_vazia()
{

    Lista *nova_lista = (Lista *)malloc(sizeof(Lista));
    nova_lista->primeiro = 0;
    nova_lista->ultimo = 0;
    nova_lista->pos = -1;
    return nova_lista;
}

int vazia(Lista *l)
{
    return (l->primeiro == l->ultimo);
}

TipoItem primeiro(Lista *l)
{
    l->pos = -1;
    return proximo(l);
}

TipoItem proximo(Lista *l)
{
    l->pos++;
    if (l->pos >= l->ultimo)
        return -1; // acabou itens
    else
        return l->item[l->pos];
}

void imprime(Lista *l)
{
    if (vazia(l))
        printf("Lista vazia");
    else
    {
        int i = 0;
        printf("[");
        for (i = l->primeiro; i < l->ultimo; i++)
            printf("%d ", l->item[i]);
        printf("]\n");
    }
}

void imprime2(Lista *l)
{
    if (vazia(l))
        printf("Lista vazia");
    else
    {
        TipoItem x = primeiro(l);
        printf("[");
        do
            printf("%d ", x);
        while ((x = proximo(l)) != -1);
        printf("]\n");
    }
}

void insere(Lista *l, TipoItem x)
{
    int pos = 0;

    if (!vazia(l))
    {

        while (pos < l->ultimo && x > l->item[pos])
            pos++;

        for (int i = l->ultimo; i >= pos; i--)
            l->item[i] = l->item[i - 1];
    }

    l->item[pos] = x;
    l->ultimo++;
    l->pos++;
}

TipoItem busca(Lista *l, TipoItem x)
{
    TipoItem item;
    l->pos = -1;

    do
    {
        item = proximo(l);
     
    } while (item != x && item!=-1);

    return item;
}