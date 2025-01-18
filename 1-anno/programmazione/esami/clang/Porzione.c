#include<stdio.h>
#include<stdlib.h>

struct nodo {
int inf;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;


nodo* Porzione(nodo* a,int i, int j){
  nodo* new = NULL;
  if(i >= j && j != 0)
    return new;

  int k = 0;
  nodo* curr = a;
  nodo* last = new;
  while(curr != NULL && (k < j || j == 0)){
    if(k >= i){
      nodo* new_nodo = (nodo*) malloc(sizeof(nodo));
      new_nodo->inf = curr->inf;
      new_nodo->prec = last;
      new_nodo->succ = NULL;
      if(last == NULL){
        new = new_nodo;
        last = new_nodo;
      }else{
        last->succ = new_nodo;
        last = new_nodo;
      }
    }
    k++;
    curr = curr->succ;
  }

  return new;
}



