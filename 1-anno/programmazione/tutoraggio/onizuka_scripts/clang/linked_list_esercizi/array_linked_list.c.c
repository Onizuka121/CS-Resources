#include<stdio.h>
#include<stdlib.h>
#include"../../../../lezioni/clang/dictonary_and_linked_list/linked_list_source/linked_list_raw/double_linked_list.h"

//soluzione con bubble sort --> O(n**2)
void array_sort_linked_list(linked_list array_lk[], int size){

  int* sizes_lks = malloc(size*sizeof(int));
  //inzializzare un array con dimensione size , con le lunghezze di ogni linked_list dell'array
  for(int i=0; i < size; i++){
    node* curr = array_lk[i];
    int count = 0;
    while(curr != NULL){
      curr = curr->next;
      count++;
    }
    sizes_lks[i] = count;
  }
  //ordino comparando rispettivamente le lunghezze di ogni linked_list (contenuta in indice i) dell'array inizializzato prima
  for(int i=0; i < size; i++){
    for(int j=0; j < size-1; j++){
        if(sizes_lks[j] > sizes_lks[j+1]){
          int tmp_t = sizes_lks[j];
          sizes_lks[j] = sizes_lks[j+1];
          sizes_lks[j+1] = tmp_t; 
          node* tmp = array_lk[j];
          array_lk[j] = array_lk[j+1];
          array_lk[j+1] = tmp;
        }
    }
  }
  //libero la memoria dall'array delle dimensioni perche non serve piu
  if(sizes_lks != NULL)
    free(sizes_lks);
}

 



int main(int argc, char* argv[]){
  linked_list* a_lk = malloc(sizeof(node*)*5);
  int sizes_lks[] = {3,1,2,2,1};
  for(int i=0; i<5; i++){
    for(int j=0; j<sizes_lks[i]; j++){
      a_lk[i] = insert_top(a_lk[i],7);
    }
  }
  for(int i=0; i < 5; i++){
    print(a_lk[i]);
  }
  array_sort_linked_list(a_lk,5);

  for(int i=0; i < 5; i++){
    print(a_lk[i]);
  }
return 0;
}






