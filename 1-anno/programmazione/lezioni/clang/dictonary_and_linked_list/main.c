#include<stdio.h>
#include "dictonary_source/dictonary.h"
int main(int argc, char *argv[]){
  
  dict d = init_dict(7);
  d = add_item(d,"key1",1970);
  d = add_item(d,"key2",1989);
  d = add_item(d,"key3",2000);
  print_dict(d);  
  d = delete_item(d,"key2");
  print_dict(d);

  
  return 0;

}
