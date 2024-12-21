#include<stdio.h>
#include<stdlib.h>

typedef struct node{ // grazie a typedef invece di richiamare sempre "struct node" ----> ***

  int data; // campo del dato vero e proprio ( qualunque tipo )
  struct node* next; // 
} node; // *** chiamo solo "node"

typedef node* linked_list; // ------> 
// invece di richiamare node* lo chiamo linked_list (che sarebbe un puntatore ad un nodo)
// che sarebbe il head , ovvero il puntatore al primo nodo della linked list

linked_list init_linked_list(){
  return NULL;
}

linked_list insert_top(linked_list lk,int new_data){
  node* new_node = (node*)(malloc(sizeof(node))); // creiamo il nuovo nodo (memoria dinamica)
  new_node->data = new_data; // mettiamo il nuovo dato nel nodo 
  new_node->next = lk; // facciamo puntare il next del nuovo nodo al head corrente
  lk = new_node; // facciamo saltare in aria il head corrente e lo aggiorniamo sovrascrivendolo al nuovo nodo
  return lk; 
}
linked_list delete_top(linked_list lk){
  if(lk == NULL){//controlliamo se la lista non è gia vuota
    return NULL;
  }
  node* tmp = lk;//salviamoci temporaneamente chi è il primo in testa
  lk = lk->next;//spostiamo la testa al successivo nodo 
  free(tmp);// liberare lo spazio di memoria utilizzato da quel nodo che vogliamo eliminare (il primo in testa)
  tmp = NULL; // buona pratica annullare il puntatore di quel nodo oramai liberato
   
  return lk;
}



node* search(linked_list lk,int data_to_find){
  node* current = lk;
  //controlliamo prima che current non sia NULL e poi vediamo il dato
  //senno se sarebbe current->data != data_to_find && current != NULL 
  //all'ultimo nodo incappiamo il un segmentation fault perche accediamo a data ad un puntatore NULL
  while(current != NULL && current->data != data_to_find){
    current = current->next;
  } 
  return current;//ritorniamo current se esce dal ciclo perche lo ha trovato oppure perche non lo ha trovato
}



linked_list delete_element(linked_list lk,int data_to_delete){
  node* current = lk;
  node* prec = NULL;

  //controllo se l'elemento da eliminare è in testa se si richiamo delete_top(lk) e ci pensa lui
  if(current != NULL && current->data == data_to_delete){
    lk = delete_top(lk);
    return lk;
  }

  while(current != NULL && current->data != data_to_delete){
    prec = current;
    current = current->next;
  }

  if(current != NULL && current->data == data_to_delete){
    prec->next = current->next;
    free(current);
    current = NULL;
  }
  
  return lk;
}




void print_lk(linked_list lk){
  node* current = lk;
  printf("[ ");
  while(current != NULL){
    printf("%d ",current->data);// equivalente a (*current).data
    current = current->next;// equivalente a (*current).next
    if(current != NULL)
      printf(" --> ");
    else
      printf(" --> NULL");
  }
  printf(" ]\n");
}


int main(){
  linked_list lk = init_linked_list();
  lk = insert_top(lk,1700);
  lk = insert_top(lk,1956);
  lk = insert_top(lk,2003);
  lk = insert_top(lk,2020);
  lk = insert_top(lk,2030);
  print_lk(lk);
  /*
  int data_to_find = 1;
  printf("find data : %d --> ",data_to_find);
  node* nod = search(lk,data_to_find);  
  if(nod != NULL){
    printf("find it\n");
  }else{
    printf("not find it\n");
  }
  */
  //delete_top(lk);
  /*
  lk = delete_element(lk,2003);
  lk = delete_element(lk,1956);
  lk = delete_element(lk,2030);
  */
  // un modo originale per inserire un nodo dopo un certo nodo conosciuto --> 
  node* tmp = search(lk,2030);
  node* last = insert_top(search(lk,search(lk,2030)->next->data),9999);
  tmp->next = last;
  print_lk(lk);
  return 0;
}
