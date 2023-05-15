#include "leitor.h"
#include "../grafo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lerArquivoGrafo(char * filename){
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
        //fgets(linha, 31, fp); // lê a primeira linha do arquivo
        printf("aresta = %d,%d,%d\n", s, d, w);		
        //fflush(fp);
	}
    fclose(fp);
    return 0;
}