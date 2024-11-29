#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int*data;
  int size;
  int capacity;
} dynamic_array;

dynamic_array init(int initial_capacity);
void append(dynamic_array *array, int element);

int main(){
  
  dynamic_array array = init(4);

  for(int i = 1; i < 6; i++){
    append(&array,i);
  }
    
  printf("elementi nell'array dinamico : \n");
  printf("%d",array.size);
  for(int i = 0; i < array.size; i++){
    printf("elemento in %d -> %d\n",i,array.data[i]);
  }

  return 0;

}

dynamic_array init(int initial_capacity){
  dynamic_array init_array = {NULL,0,0};
  init_array.data = malloc(initial_capacity*sizeof(int));
  init_array.size = 0;
  init_array.capacity = initial_capacity;
  return init_array;
}

void append(dynamic_array *array, int element){

    if(array->size == array->capacity){
        array->capacity = array->capacity * 2; // raddoppio la capacity
        array->data = realloc(array->data, array->capacity * sizeof(int));
        //controllo se tutto in check
        if(array->data == NULL){
          printf("errore nella riallocazione della memoria in append function!\n");
          exit(1); // con questa finisco tutto il programma con codice 1 (errore)
        }
    }
    array->data[array->size] = element;
    array->size++;
}







