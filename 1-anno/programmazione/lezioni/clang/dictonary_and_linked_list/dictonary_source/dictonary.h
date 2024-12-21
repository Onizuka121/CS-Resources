#ifndef __DICTONARY__
#define __DICTONARY__
#include "../linked_list_source/linked_list_dict/double_linked_list_dict.h"
typedef struct dict{
  linked_list* lk_array;
  int size_m;
} dict;

int hash(dict,char*);
dict init_dict(int);
dict add_item(dict,char*,int);
item get_item(dict,char*);
void print_dict(dict);
dict delete_item(dict,char*);


#endif
