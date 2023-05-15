#include "leitor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lerArquivoGrafo(char * filename, Lista *l){
    FILE * fp;
    char * linha;
    //source, destiny, weight of the edge
    int s, d, w;

    fp = fopen(filename, "r+");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo.\n");
    }
    rewind(fp);
    while (!feof(fp)) { 
		fscanf(fp, "%d,%d,%d", &s, &d, &w);
        
        printf("aresta = %d,%d,%d\n", s, d, w);	
        arestaLista(*l, s, d, w);
        //fflush(fp);
	}
    fclose(fp);
    return 0;
}