#include<stdio.h>
#include<stdlib.h>
#include"../../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"


linked_list create_linked_list_input(){
  linked_list new = init();
  node* curr = new;
  int integer_data;
  
 //sfruttiamo scanf siccome 
 //se scanf riesce a scrivere sulla variabile ritorna 1 (True)
 //invece se non ci riesce (quindi inseriamo una stringa) ritorna 0 (False)
  printf("intero :");
  while(scanf("%d",&integer_data)){
    //creiamo un nodo ogni volta e lo inizializziamo
    node* new_node = (node*) malloc(sizeof(node));
    new_node->data = integer_data;
    //prima di questo nuovo nodo ci sarà curr che punta all'ultimo nodo inserito o NUll se non si è inserito ancora niente
    new_node->prec = curr;
    //ovviamente per ora dopo questo nodo non c'è niente
    new_node->next = NULL;
    //caso in cui viene inserito per la prima volta qualcosa (intero)
    if(curr == NULL){
      //in questo caso dobbiamo dire che la linked list parte da qui 
      new = new_node;
      //e inizializzare curr che partira da qui
      curr = new;
    }else{
      //altrimenti diciamo all'ulitmo nodo inserito (presente nella linked list ) che dopo di lui ci sarà il nuovo nodo creato
      curr->next = new_node;
      //mandiamo avanti curr siccome punta all'ultimo nodo ora puntera al nuovo nodo inserito 
      //questo si puo scrivere anche curr = new_node
      curr = curr->next;
    }
    printf("intero: ");
  }
  printf("hai inserito un formato che non si adatta a intero!\n");

  return new;
}

 
 
int main(int argc, char* argv[]){
  linked_list lk = create_linked_list_input();
  print(lk); 
  return 0;
}
