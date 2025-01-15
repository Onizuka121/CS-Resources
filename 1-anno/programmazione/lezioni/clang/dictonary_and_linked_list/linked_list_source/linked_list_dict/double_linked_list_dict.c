#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct item{
    char* key; //chiave (immutabile) (dobbiamo renderla immutabile)
    int value; //valore
} item;

typedef struct node{
  item data;//dato contenente nel nodo (che sarebbe un item -> (chiave, valore))
  struct node* prec;//puntatore al nodo precedente
  struct node* next;//puntatore all nodo successivo1
} node;

typedef node* linked_list;

node* search_element(linked_list,char*);


linked_list init(){ 
  return NULL;
}

linked_list insert_top(linked_list lk, char* key, int value){
  //verifichiamo se k esiste gia nel dizionario
  node* node_with_same_key = search_element(lk,key);
  
  //se il nodo con la stessa chiave esiste 
  //aggiorno il valore associato a quella chiave
  if(node_with_same_key != NULL){
    node_with_same_key->data.value = value;
    return lk;
  }

  //altrimenti devo aggiungere un nuovo nodo 
  node* new_node = (node*) malloc(sizeof(node));
  //dopo il nuovo nodo ci sarà il nodo corrente che è in testa ( che è puntato da lk )
  new_node->next = lk;
  //essendo questo il nuovo nodo in testa il suo prec deve puntare a NULL 
  //preche prima di lui non c'è nessuno 
  new_node->prec = NULL;
  
  item new_item = {NULL,value};

  new_item.key = (char*) malloc(sizeof(char)*(strlen(key)+1));
  
  if(new_item.key == NULL){
    printf("errore in malloc della chiave\n");
    exit(1);
  }
  
  strcpy(new_item.key, key);

  new_node->data = new_item;


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
  free(tmp->data.key);
  free(tmp);
  //buona pratica farlo puntare a NULL 
  //non essenziale 
  tmp = NULL;

  return lk;
}


linked_list delete_element(linked_list lk,char* key_element_to_delete){

  node* current = lk;
  while(current != NULL && strcmp(current->data.key,key_element_to_delete) != 0){
    current = current->next;
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

node* search_element(linked_list lk,char* key){
  
  node* current = lk;
  while(current != NULL && strcmp(current->data.key,key) != 0){
    current = current->next;
  }

  return current;
}

void print(linked_list lk){

  node* current = lk;
  printf("lk : [ ");
  while(current != NULL){
    printf("<-- ( %s : %d ) --> ",current->data.key,current->data.value);
    current = current->next;
  }
  printf(" NULL]\n");

}

/*
int main(){

  linked_list lk = init();
  char key[] = "soc";
  lk = insert_top(lk,key,100000);
  lk = insert_top(lk,"pentest",9999999); 
  lk = insert_top(lk,"dev",40000);
  print(lk);
  key[0] = 'z';
  lk = insert_top(lk,key,7777);
  print(lk);
  //node* n = search_element(lk,"dev");
  if(n != NULL)
    printf("worker %s has : %d $ salary\n",n->data.key,n->data.value);
  else
    printf("no worker with this job!\n");
 // lk = delete_element(lk,"desk");
 // print(lk);

}
*/

