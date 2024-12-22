#include<stdio.h>
#include<stdlib.h>
#include "../../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"
 
linked_list reverse_linked_list(linked_list lk){
  
  node* curr = lk;
  while(curr != NULL){
    node* tmp = curr;
    curr = curr->next;
    tmp->next = tmp->prec;
    tmp->prec = curr;
    if(curr == NULL){
      lk = tmp;
    }
  }  
  return lk;
} 


int main(int argc, char* argv[]){

 linked_list lk = init();
  /*lk = insert_top(lk,1800);
  lk = insert_top(lk,1899);
  lk = insert_top(lk,1920);
  lk = insert_top(lk,1953);
  lk = insert_top(lk,1960);
  lk = insert_top(lk,1980);*/
  lk = insert_top(lk,2004);
  lk = insert_top(lk,2010);
  print(lk);
  lk = reverse_linked_list(lk);
  print(lk);
   
return 0;
}
