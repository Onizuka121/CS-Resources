#include<stdio.h>
#include<stdlib.h>

struct nodo {
int inf;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;
typedef struct nodo* linked_list;

linked_list in_top(linked_list a, int data){
  
  nodo* new = (nodo*)(malloc(sizeof(nodo)));
  new->inf = data;
  new->succ = a;
  new->prec = NULL;
  if(a == NULL){
    a = new;
    return a;
  }

  a->prec = new;
  a = new;
  return a;
}


linked_list Ruota(linked_list a){
  if(a == NULL)
    return a;

  nodo* curr = a;
  while(curr != NULL && curr->succ != NULL && curr->inf <= curr->succ->inf){
    curr = curr->succ;
  }
  if(curr != NULL){
    nodo* a2 = curr->succ;
    curr = a2;
    while(curr != NULL && curr->succ != NULL && curr->inf <= curr->succ->inf){
      curr = curr->succ;
    }
    if(curr != NULL && curr->succ == NULL){
      a->prec = curr;
      a->prec->succ = a;
      a2->prec->succ = NULL;
      a2->prec = NULL;
      a = a2;
    }
  }

  return a;
}


void print(linked_list a){
  printf("lk : [ ");
  nodo* current = a;
  while(current != NULL){
    printf("<-- %d --> ",current->inf);
    current = current->succ;
  }
  printf("]\n");
}



int main(){
  linked_list a = NULL;
 a = in_top(a,8); 
 a = in_top(a, 6);
 a = in_top(a,3);
 a = in_top(a,3);
 print(a);
 a = Ruota(a);
 print(a);
  return 0;
}









