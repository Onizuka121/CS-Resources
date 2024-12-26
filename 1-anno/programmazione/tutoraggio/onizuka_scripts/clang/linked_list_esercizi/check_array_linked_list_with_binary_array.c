#include<stdio.h>
#include<stdlib.h>
#include "../../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"
 

void ind_set(linked_list a[], int I[] , int n){
  
  for(int i=0; i < n; i++){
    if(I[i] == 1){
      node* current = a[i];
      while(current != NULL && I[current->data] == 0){
          current = current->next;
      }
      if(current != NULL){
        printf("0\n");
        return;
      }
    }
  }
  printf("1\n");
}

int main(int argc, char* argv[]){
  int I[] = {1,1,0,1};
  int val[] = {3,2,1,0,1,1,2};
  int lenghts[] = {2,1,3,1};
  linked_list a[4] = {0};
  for(int i=0,val_i=0; i < 4; i++){
    for(int j=0,k=val[val_i]; j < lenghts[i]; j++,val_i++,k=val[val_i]){
      a[i] = insert_top(a[i],k);
    }
  }

  for(int i=0; i < 4; i++)
    print(a[i]);
    
  ind_set(a,I,4);

 return 0;
}
