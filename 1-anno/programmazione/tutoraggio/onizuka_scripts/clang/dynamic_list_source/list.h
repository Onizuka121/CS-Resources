#ifndef __LIST__ 
#define __LIST__

typedef struct {
    char type; // i = intero, f = float, s = string
    void* data_pointer; // puntatore al dato vero e proprio
} element;

typedef struct{
  element* elements;
  int size;
  int capacity;
} list;

list init();
list append(list, element);
element new_element(char,char*,int,float);
void print_lista(list);
list pop(list);
list insert(list,int,element);

#endif
