#include<stdio.h>
#include<stdlib.h>

struct nodo {
int inf;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;


nodo* Range(nodo* a, int i, int k, int j){
  
  if(k == 0)
    return a;

  int z = 1;
  int v = i;
  //supponiamo che a sia vuota inizialmente
  nodo* last = a;
  while((k < 0 && v > j) || (k > 0 && v < j)){
    nodo* new = (nodo*) malloc(sizeof(nodo));
    if(new == NULL)
      exit(1);
  
    new->inf = v;
    new->prec = last;
    new->succ = NULL;
  
    if(last == NULL){
      a = new;
    }else{
      last->succ = new;
    }
    last = new;
    v = i + z*k;
    z++;
  }

  return a;
}















