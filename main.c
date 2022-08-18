#include "lista_estatica.c"

void verificarItemLista(Lista *l, TipoItem x)
{
     TipoItem ti = busca(l, x);

    if(ti==-1)
        printf("ITEM %d NÃO ENCONTRADO \n",x);
    else
        printf("ITEM %d encontrado \n",x);
    
}

int main()
{
    Lista *lista = cria_lista_vazia();

    insere(lista, 2);
    insere(lista, 45);
    insere(lista, 10);
    insere(lista, 1);
    insere(lista, 11);
    insere(lista, 110);
    insere(lista,4);
    insere(lista, 8);
 
    imprime2(lista);

    verificarItemLista(lista, 22);
    verificarItemLista(lista, 8);
    verificarItemLista(lista, 1);
    verificarItemLista(lista, 33);
    verificarItemLista(lista, 110);

    return 0;
}
