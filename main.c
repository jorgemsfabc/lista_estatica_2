#include "lista_estatica.c"

Lista* preencherItensLista(Lista *l)
{
    for (int i = 0; i < TAM_MAX; i++)
      insere(l,rand() % 10);    
}

int main()
{
    Lista* lista  =  cria_lista_vazia();

    preencherItensLista(lista);
    
    imprime2(lista);

    imprime(lista);

    return 0;
}
