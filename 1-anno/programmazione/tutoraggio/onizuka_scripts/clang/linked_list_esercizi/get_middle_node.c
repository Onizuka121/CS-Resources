#include<stdio.h>
#include<stdlib.h>
#include "../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"

node* get_middle_node(linked_list lk){
  if(lk == NULL)
    return lk;

  node* curr = lk;//iniziamo dalla testa per contare quanti elementi ci sono
  int n = 0;
  while(curr != NULL){
    curr = curr->next;
    n++;
  }
  int middle = n/2;
  n = 0;
  curr = lk;
  while(curr != NULL && n != middle){
    curr = curr->next;
    n++;
  } 
  return curr;
}


int main(){
  linked_list lk = init();
  lk = insert_top(lk,70);
  lk = insert_top(lk,60);
  lk = insert_top(lk,50);
  lk = insert_top(lk,40);
  lk = insert_top(lk,30);
  lk = insert_top(lk,20);
  lk = insert_top(lk,10);
  print(lk);
  printf("middle node data : %d\n",get_middle_node(lk)->data);

  return 0;
}



