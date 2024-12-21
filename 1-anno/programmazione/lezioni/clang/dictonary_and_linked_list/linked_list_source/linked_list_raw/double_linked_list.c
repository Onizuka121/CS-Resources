#include<stdio.h>
#include<stdlib.h>


typedef struct node{
  int data;//dato contenente nel nodo
  struct node* prec;//puntatore al nodo precedente
  struct node* next;//puntatore all nodo successivo
} node;

typedef node* linked_list;

linked_list init(){ 
  return NULL;
}

linked_list insert_top(linked_list lk, int data_to_insert){
  node* new_node = (node*) malloc(sizeof(node));
  //dopo il nuovo nodo ci sarà il nodo corrente che è in testa ( che è puntato da lk )
  new_node->next = lk;
  //essendo questo il nuovo nodo in testa il suo prec deve puntare a NULL 
  //preche prima di lui non c'è nessuno 
  new_node->prec = NULL;

  new_node->data = data_to_insert;

  //caso in qui dentro lk non c'è niente 
  //se non c'è niente lk punta a NULL quindi controlliamo prima
  //di accedere al nodo che dovrebbe stare in testa corrente 
  //perche vogliamo che questo nodo che sta in testa (corrente)
  //il suo "prec" punti al nuovo nodo perche starà lui prima di lui
  if(lk != NULL)
     lk->prec = new_node;

  //ora lk punta al nuovo nodo che a sua volta grazie
  //a new_node->next = lk 
  //punta al nodo che prima era In testa e ora è "dietro"
  lk = new_node;

  return lk;
}

linked_list delete_top(linked_list lk){
  //controlliamo se prima lk non sia gia vuota
  //che eliminiamo ? niente , ritorniamo lk
  if(lk == NULL)
    return lk;
  //ci salviamo temporaneamente il puntatore al nodo che è testa
  //perche poi dobbiamo liberare memoria da questo puntatore
  node* tmp = lk;

  //"scolleghiamo" lk e lo facciamo puntare al puntatore che sta dopo quello che sta in testa
  lk = lk->next;

  //e se dopo quello che sta in test non c'è niente ? 
  //controlliamo prima di accedere a lk
  //se c'e qualcosa allora (diverso da NULL) 
  //il nodo che stava dopo quello in testa ora il suo prec deve puntare a NULL 
  //perche è lui ora in testa
  if(lk != NULL)
      lk->prec = NULL;

  //liberiamo memoria da quello eliminato 
  //senno l'elaboratore di "incavola"
  free(tmp);
  //buona pratica farlo puntare a NULL 
  //non essenziale 
  tmp = NULL;

  return lk;
}


linked_list delete_element(linked_list lk,int position_element_to_delete){

  int count = 0;
  node* current = lk;
  while(current != NULL && count != position_element_to_delete){
    current = current->next;
    count++;
  }
  if(current == NULL){
    //printf("nessun dato da eliminare\n");
    return lk;
  }

  //printf("position element data : %d\n",current->data);
  node* tmp = current->prec;
  if(tmp == NULL)
    return delete_top(lk);
  
  tmp->next = delete_top(current);
  if(tmp->next != NULL)
    tmp->next->prec = tmp;

  return lk;

}

int search_element(linked_list lk,int data_to_search){
  
  int count = 0;
  node* current = lk;
  while(current != NULL && current->data != data_to_search){
    count++;
    current = current->next;
  }

  if(current == NULL){
      return -1;
  }

  return count;
}

void print(linked_list lk){

  node* current = lk;
  printf("lk : [ ");
  while(current != NULL){
    printf("<-- %d --> ",current->data);
    current = current->next;
  }
  printf(" NULL]\n");

}

