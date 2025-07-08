#include<stdio.h>
#include<stdlib.h>

struct nodo {
int chiave;
struct nodo *succ, *prec;
};
typedef struct nodo nodo;



int *Liste2MatriceAdiacenza( nodo *a[], int n ){
  int* matrix_adiacenza = (int*) malloc(sizeof(int)*(n*n));
  //andiamo a settare ogni elemento di matrix_adiacenza a 0 di default
  for(int i=0; i<n*n; i++){
      matrix_adiacenza[i] = 0;
  }
  //per ogni a[i] andiamo a settare la chiavi di ogni elemento nella lista a[i] 
  //nella matrix_adiacenza a 1 li dove j = chiave 
  for(int i=0; i<n; i++){
    nodo* current = a[i];
    while(current != NULL){
      int j = current->chiave;
      //controlliamo se l'indice va bene
      if(j >= 0 && j < n){
          matrix_adiacenza[n*i+j] = 1;
      }
      current = current->succ;
    }
  }
  return matrix_adiacenza;
}



