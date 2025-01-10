#include<stdio.h>
#include<stdlib.h>

struct nodo {
int valore;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;

nodo *input_list(){
  nodo* new_lk = NULL;
  int x;
  nodo* last = new_lk;
  while(scanf("%d",&x)){
    nodo* new_node = (nodo*) malloc(sizeof(nodo));
    new_node->valore = x;
    new_node->prec = last;
    new_node->succ = NULL;
    if(last == NULL){
      new_lk = new_node;
    }else{
      last->succ = new_node;
    }
    last = new_node;
  }
  return new_lk;
}


int main(){
  nodo* lk = input_list();
  nodo* c = lk;
  while(c != NULL){
    printf("%d ",c->valore);
    c = c->succ;
  }
  printf("\n");
}
