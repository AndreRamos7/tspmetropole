#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>
// Lista

Lista inicializaLista(int n) {
  int i;
  Lista L = malloc(sizeof *L);
  L->n = n;
  L->m = 0;
  //[by André] - esta lista se refere a lista vertical
  L->A = malloc(n * sizeof(No *));
  for (i = 0; i < n; i++) {
    L->A[i] = NULL;
  }
  return L;
}
void arestaLista(Lista L, int a, int b, int peso) {
  No *p;
  for (p = L->A[a]; p != NULL; p = p->prox) {
    printf("p->rotulo = %d\n", p->rotulo);
    if (p->rotulo == b) {
      return;
    }
  }
  p = malloc(sizeof(No));
  p->rotulo = b;
  p->peso = peso;
  p->prox = L->A[a];
  if(L->A[a] != NULL){
    printf("L->A[a] = %d\n", L->A[a]->rotulo);  
  }
  L->A[a] = p;
  L->m++;
}

void removeArestaL(Lista L, int a, int b) {
  No *p, *aux;
  for (p = L->A[a]; p != NULL; p = p->prox) {
    if (p->rotulo == b) {
      aux->prox = p->prox;
      free(p);
      L->m--;
    }
    aux = p;
  }
}
void mostrarLista(Lista L) {
  int i;
  No *p;
  for (i = 0; i < L->n; i++) {
    printf("%2d ->", i);
    for (p = L->A[i]; p != NULL; p = p->prox)
      printf("%2d, ", p->rotulo);
    printf("\n");
  }
}

int returnVerticeL(Lista L) { return L->n; }
int returnArestaL(Lista L) { return L->m; }


void liberarLista(Lista L) {
  int i;
  No *p;
  for (i = 0; i < L->n; i++) {
    p = L->A[i];
    while (p != NULL) {
      L->A[i] = p;
      p = p->prox;
      free(L->A[i]);
    }
    L->A[i] = NULL;
  }
  free(L->A);
  L->A = NULL;
  free(L);
  NULL;
}
