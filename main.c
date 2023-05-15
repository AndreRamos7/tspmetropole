#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  //setlocale(LC_ALL, "Portuguese");
  int i, a, b;
  Lista l;

  printf("Quantos Nós tem seu grafo?");
  scanf("%i", &a);
  l = inicializaLista(a);
  mostrarLista(l);
  do {
    printf("1 - Adicionar Aresta.\n2 - Retornar Aresta.\n3 - Mostrar "
            "Grafo.\n4 - Mostrar numero de vertices\n5 - Mostrar numero de "
            "arestas\n9 - Ecerrar grafo.\n");
    scanf("%i", &i);
    switch (i) {
      case 1:
        printf("Diga o valor da aresta de saida\n");
        scanf("%i", &a);
        printf("Diga o valor da aresta de entrada\n");
        scanf("%i", &b);
        arestaLista(l, a, b);
        break;
      case 2:
        printf("Diga o valor da aresta de saida\n");
        scanf("%i", &a);
        printf("Diga o valor da aresta de entrada\n");
        scanf("%i", &b);
        removeArestaL(l, a, b);
        break;
      case 3:
        mostrarLista(l);
        break;
      case 4:
        printf("%d", returnVerticeL(l));
        break;
      case 5:
        printf("%d", returnArestaL(l));
        break;
      
      default:
        printf("Fechando grafo");
        liberarLista(l);
        i = 9;
        break;
    }
  }while (i != 9);
  
  return 0;
}