//#include "grafo.h"
#include "includes\leitor.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, a, b;
  Lista l;

  printf("Quantos Nós tem seu grafo?");
  scanf("%i", &a);

  l = inicializaLista(a);
  lerArquivoGrafo("database.csv", l);
  mostrarLista(l);

  do {
    printf("1 - Ler grafo de arquivo.\n");
    scanf("%i", &i);
    switch (i) {
      case 1: 
        printf("Diga o valor da aresta de saida\n");                     
        break;
      case 2:
        printf("Diga o valor da aresta de saida\n");        
        break;  
      case 3:
        mostrarLista(l);
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