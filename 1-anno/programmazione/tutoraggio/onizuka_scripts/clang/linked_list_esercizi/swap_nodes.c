#include<stdio.h>
#include<stdlib.h>
#include"../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"

linked_list swap_nodes(linked_list lk, node* x){
  //controliiamo se dopo il nodo x c'e qualcosa , se non c'è annulliamo l'operazione
  if(x->next == NULL)
    return lk;

  //salviamoci in tmp il nodo precedente ad x ( cosi che poi possiamo ricollegare il tutto )
  node* tmp = x->prec;
  //inseriamo prima di x un nodo con lo stesso di quello che è dopo x
  node* new = insert_top(x,x->next->data);
  //prima del nodo new ( che sarebbe prima del nodo x ) ci sarà tmp 
  new->prec = tmp;

  //se prima di x c'era qualcosa (nodo) diciamo a quel nodo che dopo di lui c'è new
  if(tmp != NULL)
    tmp->next = new;
  //altrimenti per forza x era il primo nodo della linked list e la ricolleghiamo a new
  else
    lk = new;
  
  //riutilizziamo sempre tmp per puntarlo al nodo che è dopo x (quello che il suo clone adesso è prima di x)
  //quindi dobbiamo eliminarlo dopo x
  tmp = x->next;
  //dopo x non ci sara piu quel nodo ma ci sarà quello ancora dopo rispetto quello da eliminare
  x->next = tmp->next;
  //se ancora dopo rispetto quello da eliminare c'è qualcosa , diciamo a quel qualcosa che prima c'e x
  //in questo modo ignoriamo il nodo che inzialmente era prima di x
  if(tmp->next != NULL)
     tmp->next->prec = x;
  
  //eliminiamo definitivamente (liberando memoria) il nodo che stava dopo x (ora non piu)
  free(tmp);
  //buona pratica puntare tmp a NULL (non necessario)
  tmp = NULL;

  //ritorniamo lk modificata
  return lk;
}



int main(int argc, char* argv[]){
  linked_list lk = init();
  lk = insert_top(lk,1300);
  lk = insert_top(lk,1400);
  print(lk);
  lk = swap_nodes(lk,lk);
  print(lk); 
  return 0;
}
