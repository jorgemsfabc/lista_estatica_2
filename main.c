#include "lista_estatica.c"

int main()
{
    Lista* lista  =  cria_lista_vazia();

    insere(lista,6);
    insere(lista,7);
    insere(lista,4);

    imprime2(lista);

    imprime(lista);

    return 0;
}
