#ifndef __DOUBLE_LINKED_LIST__
#define __DOUBLE_LINKED_LIST__

typedef struct node{
  int data;//dato contenente nel nodo
  struct node* prec;//puntatore al nodo precedente
  struct node* next;//puntatore all nodo successivo
} node;

typedef node* linked_list;

linked_list init();
linked_list insert_top(linked_list, int);
linked_list delete_top(linked_list);
int search_element(linked_list,int);
linked_list delete_element(linked_list,int);
void print(linked_list);

#endif
