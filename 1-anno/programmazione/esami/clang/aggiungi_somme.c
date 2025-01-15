#include<stdio.h>
#include<stdlib.h>

struct nodo {
int chiave;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;

nodo* AggiungiSomme(nodo* a){
  
  if(a == NULL)
    return a;
  
  int sum = 0;
  nodo* curr = a;
  while(curr != NULL){
    sum += curr->chiave;
    curr = curr->succ;
  }

  curr = a;
  while(curr != NULL){
    nodo* new = (nodo*) malloc(sizeof(nodo));
    if(new == NULL){
      printf("errore allocazione memoria\n");
      return a;
    }
    new->chiave = sum;
    new->prec = curr->prec;
    if(new->prec == NULL){
      a = new;
    }else{
      new->prec->succ = new;
    }
    new->succ = curr;
    curr->prec = new;
    sum -= curr->chiave;
    curr = curr->succ;  
  }

  return a;
}





















