#include<stdio.h>
#include<stdlib.h>
//IMPLEMENTAZIONE DELLA CODA UTILIZZANDO LA STRUTTURA DATI LINKED LIST
//in pratica non è altro che la coda che si fa al supermarket (se la fate)
typedef struct node{
  char* data; //dato che contiene il nodo (stringa)
  struct node* prev; //puntatore al nodo precedente che in effetti non serve pero lasciamolo
  struct node* next; //puntatore al nodo successivo 

}node;

typedef struct queue{
  node* first;
  node* last;
}queue;

queue init_queue(){
  queue new = {NULL,NULL};
  return new;
}

node* new_node(char* s){
  node* new_node = (node*)malloc(sizeof(node));
  new_node->data = s;
  new_node->next = NULL;

  return new_node;
}

queue enqueue(queue coda,char* s){
  
  node* new = new_node(s);
  new->prev = coda.last;

   //caso in qui nella lista non ci sia effittivamente niente ancora
  if(coda.last == NULL){
      coda.first = new;
      coda.last = new;
      return coda;
  }

  coda.last->next = new;
  coda.last = new;

  return coda;
}

queue dequeue(queue coda){
  if(coda.first == NULL)
    return coda;

  node* tmp = coda.first;
  if(coda.first == coda.last)
    coda.last = NULL;

  coda.first = coda.first->next;
  free(tmp);

  return coda;
}

void print(queue coda){

  node* current = coda.first;
  printf("queue : [ ");
  while(current != NULL){
    printf("<-- %s --> ",current->data);
    current = current->next;
  }
  printf(" NULL]\n");
}

int main(){
  queue q = init_queue();
  q = enqueue(q,"marco");
  print(q);
/*  q = enqueue(q,"domenico");
  q = enqueue(q,"mohammed");*/
  q = dequeue(q);
  print(q);
  q = enqueue(q,"giorgio");
  q = dequeue(q);
  q = enqueue(q,"lorenzo");
  print(q);

  return 0;
}






