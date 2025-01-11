#include<stdio.h>
#include<stdlib.h>


struct nodo{
  int dato;
  struct nodo* succ;
  struct nodo* prec;
};

typedef struct nodo nodo;
typedef nodo* linked_list;

linked_list init(){
  return NULL;
}


linked_list insert_top(linked_list lk, int new_dato){
  nodo* new_nodo = (nodo*) malloc(sizeof(nodo));
  if(new_nodo == NULL){
    printf("error in dynamic allocation memory, exit program!\n");
    exit(1);
  }

  new_nodo->prec = NULL;
  new_nodo->succ = lk;
  new_nodo->dato = new_dato;
  if(lk != NULL)
      lk->prec = new_nodo;
  
  lk = new_nodo;
  return lk;
}










void print(linked_list lk){

  nodo* current = lk;
  printf("lk -> [ ");
  while(current != NULL){
    printf("<-- %d --> ",current->dato);
    current = current->succ;
  }
  printf(" NULL ]\n");

}


int main(){

  linked_list lk = NULL;
  lk = insert_top(lk,1870);
  lk = insert_top(lk,1952);
  lk = insert_top(lk,1942);
  lk = insert_top(lk,2000);
  print(lk);

  
  return 0;
}
