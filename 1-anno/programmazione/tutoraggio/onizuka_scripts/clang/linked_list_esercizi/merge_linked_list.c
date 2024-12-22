#include<stdio.h>
#include<stdlib.h>
#include"../../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"



linked_list merge_linked_list(linked_list a, linked_list b){
  linked_list merge = init();
  node* curr_a = a;
  node* curr_b = b;
  
  while(curr_b != NULL && curr_b->next != NULL){
    curr_b = curr_b->next;
  }

  node* first = NULL;
  node* punt_merge = merge;

  while(curr_a != NULL && curr_b != NULL){
    if(curr_a->data >= curr_b->data){
      first = curr_b;
      curr_b = curr_b->prec;
    }else{
      first = curr_a;
      curr_a = curr_a->next;
    } 

    first->prec = punt_merge;
    first->next = NULL;
    if(merge == NULL)
      merge = first;
    else
      punt_merge->next = first;  

    punt_merge = first;
  }

  if(curr_a != NULL){
    if(punt_merge != NULL)
      punt_merge->next = curr_a;
    else
      merge = curr_a;
  }
      

  while(curr_b != NULL){
    first = curr_b;
    curr_b = curr_b->prec;
    first->prec = punt_merge;
    first->next = NULL;
    if(merge == NULL)
      merge = first;
    else
      punt_merge->next = first;  

    punt_merge = first;

  }

  return merge;
}
 
 
int main(int argc, char* argv[]){
 linked_list a = init();
/* a = insert_top(a,7);
 a = insert_top(a,6); 
 a = insert_top(a,4);
 a = insert_top(a,2);*/
 printf("a : ");
 print(a);
 linked_list b = init();
b = insert_top(b,1);
 b = insert_top(b,2); 
 b = insert_top(b,5);
 b = insert_top(b,10);
 printf("b : ");
 print(b);
 linked_list m = merge_linked_list(a,b);
 printf("merged linked_list : ");
 print(m);
return 0;
}





