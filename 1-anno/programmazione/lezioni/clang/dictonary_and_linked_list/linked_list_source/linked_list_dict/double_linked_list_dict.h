#ifndef __DOUBLE_LINKED_LIST__DICT__
#define __DOUBLE_LINKED_LIST__DICT__

typedef struct item{
  char* key;
  int value;
}item;

typedef struct node{
  item data;
  struct node* prec;//puntatore al nodo precedente
  struct node* next;//puntatore all nodo successivo
} node;

typedef node* linked_list;

linked_list init();
linked_list insert_top(linked_list, char*, int);
linked_list delete_top(linked_list);
node* search_element(linked_list,char*);
linked_list delete_element(linked_list,char*);
void print(linked_list);

#endif
