// Lista
typedef struct no No;
struct no {
  int rotulo;
  int peso;
  No *prox;
};
typedef struct lista *Lista;
struct lista {
  No **A;
  int n; // numero de vertices
  int m; // numero de arestas
};

Lista inicializaLista(int n);
void arestaLista(Lista L, int b, int a, int peso);
void removeArestaL(Lista L, int a, int b);
void mostrarLista(Lista L);
int returnVerticeL(Lista L);
int returnArestaL(Lista L);

void liberarLista(Lista L);