#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  float data;
  struct node* prev;
  struct node* next;
}node;

typedef node* linked_list;

linked_list init(){
  return NULL;
}

linked_list expand_linked_list(linked_list lk){
  node* last = lk;// il nostro obbiettivo all'inizio è arrivare alla fine della linked list (partiamo quindi dalla testa)
  int n = 1;//contatore che mi conta quanti nodi ci sono nella linked list

  if(lk == NULL) n = 0; // se in lk non c'è niente allora inizializziamo il contatore a 0 
  
  while(last != NULL && last->next != NULL){
    last = last->next;
    n++;
  } 

  //ORA CHE SIAMO ALLA FINE con last
  //dobbiamo fare un ciclo per n volte 
  for(int i=0; i < n; i++){ 
    // creiamo un nuovo nodo
      node* new = (node*) malloc(sizeof(node));
    //controlliamo tutto nel check
      if(new == NULL) exit(1);
    //assegnamo al nuovo dato il valore 0
      new->data = 0.0;
    //il nuovo nodo come precedente avrà l'ultimo inserito nella linked list
      new->prev = last;
    //dopo non c'è niente secondo lui
      new->next = NULL;
    //dopo l'ultimo della linked list c'è proprio il nuovo nodo
      last->next = new;
    // ora pero l'ultimo è il nuovo nodo creato 
    // che a sua volta una volta entrato nel ciclo sara il nuovo last
    // e quindi a next ci mettera il nuovo nodo (per questo non ci preoccupiamo di riga 39)
      last = new;
  }


  return lk;
}

void print_lk(linked_list lk){
  printf("lk : [ ");
  node* curr = lk;
  while(curr != NULL){
    printf("<- %.2f -> ", curr->data);
    curr = curr->next;
  }
  printf("]\n");
}

int main(){
  linked_list lk = init();
  /*node new;
  new.data = 34.12;
  new.next = NULL;
  new.prev = NULL;
  lk = &new;
  node new2;
  new2.data = 35.12; new2.next = &new; new2.prev = NULL;
  lk->prev = &new2;
  lk = &new2;
*/
  lk = expand_linked_list(lk);
  print_lk(lk);

  return 0;
}



