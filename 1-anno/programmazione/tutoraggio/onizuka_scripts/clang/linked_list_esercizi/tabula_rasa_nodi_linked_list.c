#include<stdio.h>
#include<stdlib.h>
#include "../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"

linked_list delete_all_occurence(linked_list lk, int occ){
  if(lk == NULL)
    return lk;

  node* curr = lk;

  while(curr != NULL){
    node* tmp = curr;
    curr = curr->next;
    if(tmp->data == occ){
      if(tmp->prec != NULL)
        tmp->prec->next = tmp->next;
      else 
        lk = tmp->next;

      if(tmp->next != NULL)
        tmp->next->prec = tmp->prec;
      
      free(tmp);
      tmp = NULL;
    }
  }

  return lk;
}



 
int main(int argc, char* argv[]){
 
  linked_list lk = init();
  lk = insert_top(lk,1920);
  lk = insert_top(lk,1899);
  lk = insert_top(lk,1920);
  lk = insert_top(lk,1953);
  lk = insert_top(lk,1920);
  lk = insert_top(lk,1920);
  lk = insert_top(lk,2004);
  lk = insert_top(lk,2010);
  print(lk);
  lk = delete_all_occurence(lk,1920);
  print(lk);


return 0;
}
