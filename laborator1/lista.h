#include <stdio.h>
#include <stdlib.h>

/* Test lista vida */
#define ListaVida(L) (L == NULL)

typedef struct celula{
    int info;
    struct celula *urm;
} Celula, *Lista, **ALista;
/* Celula este un o variabila care retine 'info' si 'urm'
   Lista este un pointer catre tipul Celula */

Lista AlocCelula(int elem);
Lista CitireLista(int *dimLista);
void AfisareLista(Lista L);
void DistrugeLista(ALista aL);