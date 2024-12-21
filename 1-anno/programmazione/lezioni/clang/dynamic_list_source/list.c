#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char type; // i = intero, f = float, s = string
    void* data_pointer; // puntatore al dato vero e proprio
} element;

typedef struct{
  element* elements;
  int size;
  int capacity;
} list;

list init(){
  list lista = {NULL,0,0};
  return lista;
}

list append(list lista,element elemento){
  if(lista.size == lista.capacity){
    lista.capacity = (lista.capacity+1)*2;
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

element new_element(char type,char *pc,int data_i, float data_f){
  element new = {type,NULL};
  switch(type){
    case 'i':
      new.data_pointer = malloc(sizeof(int));
      *((int*)new.data_pointer) = data_i;
      break;
    case 'f':
      new.data_pointer = malloc(sizeof(float));
      *((float*)new.data_pointer) = data_f;
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

void print_lista(list lista){
  printf("size: %d , capacity : %d\n",lista.size,lista.capacity);
  printf("{ ");
  for (int i=0; i < lista.size; i++){
    
    switch (lista.elements[i].type){
      case 's':
        printf(" %s ", (char*)lista.elements[i].data_pointer);
        break;
      case 'i':
        printf(" %d ", *((int*)lista.elements[i].data_pointer));
        break;
      case 'f':
        printf(" %.1f ", *((float*)lista.elements[i].data_pointer));
        break;
      default:
        break;
    }
  }
  printf(" }\n");
}



list pop(list lista){
  
  if(lista.size > 0){
    lista.size--;
    if(lista.size < lista.capacity/4){
      lista.capacity = lista.capacity/2;
      lista.elements = realloc(lista.elements,lista.capacity*sizeof(element));
      if(lista.elements == NULL){
        printf("errore nella rialoccazione\n");
        exit(1);
      }
    }
    if(lista.elements[lista.size].type != 's'){
      if(lista.elements[lista.size].data_pointer != NULL){
        free(lista.elements[lista.size].data_pointer);
      }
    }
  }

  return lista;
}

list insert(list lista,int position,element elemento){
  
  element tmp = lista.elements[lista.size-1];

  for(int i=lista.size-1; i > position; i--){
      lista.elements[i] = lista.elements[i-1];
  }

  lista.elements[position] = elemento;
  lista = append(lista,tmp);

  return lista;
}
/*
int main(){
  list lista = init();
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"dormire",0,0));
  lista = append(lista,new_element('f',NULL,0,3.14));
  lista = append(lista,new_element('i',NULL,1945,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"dormire",0,0));
  lista = append(lista,new_element('f',NULL,0,3.14));
  lista = append(lista,new_element('i',NULL,1945,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"dormire",0,0));
  lista = append(lista,new_element('f',NULL,0,3.14));
  lista = append(lista,new_element('i',NULL,1945,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"cioao",0,0));
  lista = append(lista,new_element('s',"dormire",0,0));
  lista = append(lista,new_element('f',NULL,0,3.14));
  lista = append(lista,new_element('i',NULL,1945,0));

  print_lista(lista); 
  
  free(lista.elements);
}

*/






