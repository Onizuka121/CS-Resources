#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char type; // i = intero, f = float, s = string
    void* data_pointer; // puntatore al dato vero e proprio
} element;

typedef struct{
  element* elements;
  int size;
  int capacity;
} list;

list init(int initial_capacity){
  if (initial_capacity == 0) initial_capacity = 1;
  list lista = {NULL,0,initial_capacity};
  return lista;
}

list append(list lista,element elemento){
  if(lista.size == lista.capacity){
    lista.capacity = (lista.capacity)*2;
    lista.elements = realloc(lista.elements, lista.capacity*sizeof(element));
    if(lista.elements == NULL){
      printf("errore nella rialoccazione memoria !\n");
      exit(1);
    }
  }
  lista.elements[lista.size] = elemento; 
  lista.size++;

  return lista;
}

element new_element(char type,char* pc){
  element new = {type,NULL};
  switch(type){
    case 'i':
      new.data_pointer = (int*)malloc(sizeof(int));
      break;
    case 'f':
      new.data_pointer = (float*)malloc(sizeof(float));
      break;
    case 's':
      new.data_pointer = pc;
      break;
    default:
      printf("create new element type not valid!");
      exit(1);
      break;
  }

  return new;
}

int main(){
  printf("test");
  list lista = init(10);
  printf("size %d\n",lista.size);
  lista = append(lista,new_element('s',"ciao"));
 
  for(int i = 0; i <= lista.size; i++){
    printf("test : %s\n",(char *)lista.elements->data_pointer);
  }

}








