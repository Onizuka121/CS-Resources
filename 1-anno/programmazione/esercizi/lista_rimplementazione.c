#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int *data;
  int size;
  int capacity;
} list;

list init() {
  list l = {NULL, 0, 0};
  return l;
}

list append(list l, int new_element) {
  if (l.size == l.capacity) {
    printf("realloc \n");
    l.capacity = l.capacity * 2 + 1;
    l.data = (int *)realloc(l.data, sizeof(int) * l.capacity);
    if (l.data == NULL) {
      printf("errore riallocazione");
      exit(1);
    }
  }
  l.data[l.size] = new_element;
  l.size++;

  return l;
}

list pop(list l){
  if(l.size > 0){
    l.size--;
    if(l.size < l.capacity/4){
      l.capacity /= 2;
      l.data = (int*) realloc(l.data,sizeof(int)*l.capacity);
    }
  }
  return l;
}


void print_lista(list l) {
  printf("size : %d | capacity : %d | data : { ", l.size, l.capacity);
  for (int i = 0; i < l.size; i++) {
    printf("%d ", l.data[i]);
  }
  printf("}\n");
}

int main() {
  list l = init();
  print_lista(l);
  for (int i = 0; i < 50; i++) {
    l = append(l, i);
    print_lista(l);
  }
   for (int i = 0; i < 50; i++) {
    l = pop(l);
    print_lista(l);
  }
  

  return 0;
}
