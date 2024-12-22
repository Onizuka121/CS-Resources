#include<stdio.h>
#include<stdlib.h>
#include "../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"


linked_list get_sub_linked_list(linked_list lk, int k1, int k2){
// il problema è stato separato da 3/4 step da eseguire
// 1 - controllare se k1 e k2 sono presenti o se sono uno dopo l'altro o che lk != NULL
// 2 - iniziare ad eliminare dalla testa tutti quelli che non hanno k1 fino ad arrivare al primo nodo che ha k2
// 3 - scorrere partendo dal nodo con k1 finche non arriviamo al nodo k2 (che per forza deve esserci 
// siccome abbiamo superato il 1 step )
// 4 - arrivati a k2 ci fermiamo e stacchiamo il nodo k2 da quello che c'è dopo che dopo sara solo morte perche iniziando da DOPO k2 eliminamo tutto cio finche non arriviamo alla fin 
  int pos1 = search_element(lk,k1);
  int pos2 = search_element(lk,k2);

//1 - step 1
  if(pos1 == -1 || pos2 == -1 || pos2 < pos1 || lk == NULL)
    return lk;
  
//2 - step 2
  node* curr = lk;
  while(curr != NULL && curr->data != k1){
    //current sarà il puntatore che ogni volta punterà al nodo "successivo" a quello eliminato in testa
    //siccome delete_top() si occupa di fare il free e ritornare il puntatore al nodo che sta dopo la testa
    //ora mai tagliata (nodo eliminato)
    curr = delete_top(curr);
  }
//qui ricolleghiamo da k1 a lk
  lk = curr;
//3 - step 3 (scorriamo fino a k2)
  while(curr != NULL && curr->data != k2){
    curr = curr->next;
  }

//4 - step 4
//questo è un passo cruciale perche dobbiamo scollegare il nodo k2 da tutto cio che è DOPO
//visto che dopo queste due righe di codice inizieremo a sterminare tutto cio che c'e dopo di k2 
  curr = curr->next;
  curr->prec->next = NULL;

  while(curr != NULL){
    curr = delete_top(curr); 
  }
 
  return lk;
}


int main(int argc, char* argv[]){
  linked_list lk = init();
  lk = insert_top(lk,1800);
  lk = insert_top(lk,1899);
  lk = insert_top(lk,1920);
  lk = insert_top(lk,1953);
  lk = insert_top(lk,1960);
  lk = insert_top(lk,1980);
  lk = insert_top(lk,2004);
  lk = insert_top(lk,2010);
  lk = get_sub_linked_list(lk,2004,1980); 
  print(lk);
  return 0;
}
