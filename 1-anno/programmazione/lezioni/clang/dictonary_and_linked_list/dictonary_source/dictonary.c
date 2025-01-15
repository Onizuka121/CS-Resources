#include<stdio.h>
#include<stdlib.h>
#include "../linked_list_source/linked_list_dict/double_linked_list_dict.h"
#define CONST_HASH_FUNC 5

typedef struct dict{
  linked_list* lk_array;
  int size_m;
} dict;

int hash(dict dictionary, char* key){
  int hash_val = 0;
  int prime_number = 31;//prendiamo un numero primo abbastanza grande (medio) per una buona efficienza 
                        //e riduzione delle collissioni
  //facciamo per rendere la funzione hash costante (complessita O(1)) 
  //prendiamo massimo fino a 5 caratteri ( se due chiavi sono uguali fino a 5 caratteri PAZIENZA si metterà in fila )
  //CONST_HASH_FUNC è una "constante" che ho dichiarato grazie a #define macro
  for(int i=0; key[i] != '\0' && i < CONST_HASH_FUNC; i++)
      hash_val = hash_val * prime_number + (key[i]);

  return hash_val % dictionary.size_m;//il valore hash calcolato ora va fatto in modulo con m
}

dict init_dict(int size_m){
  dict new_dict = {NULL,size_m};
  //alloco memoria per l'array delle chiavi
  new_dict.lk_array = (linked_list*) malloc(size_m*sizeof(linked_list));
  
  for(int i = 0; i < size_m; i++){
    new_dict.lk_array[i] = NULL;
  }

  return new_dict;
}

dict add_item(dict dictionary,char* key, int value){
  
  int pos = hash(dictionary,key);
  dictionary.lk_array[pos] = insert_top(dictionary.lk_array[pos],key,value);

  return dictionary;
}

item get_item(dict dictionary,char* key){
  
  int pos = hash(dictionary,key);
  node* node_element = search_element(dictionary.lk_array[pos],key);
  return node_element->data;//ritorno item ( se è NULL da errore come da previsto )
}


void print_dict(dict dictionary){
  printf("dict -> { \n");
  for(int i=0; i < dictionary.size_m; i++){
    if(dictionary.lk_array[i] != NULL ){
      printf("\tdict[%d] => ",i);
      print(dictionary.lk_array[i]);
      printf("\n");
    }
  }
  printf(" }\n");

}



dict delete_item(dict dictionary,char* key){
  
  int pos = hash(dictionary,key);
  dictionary.lk_array[pos] = delete_element(dictionary.lk_array[pos], key);
  
  return dictionary; 
}


/*
int main(int argc, char *argv[]){
  
  dict d = init_dict(7);
  d = add_item(d,"key1",1970);
  d = add_item(d,"key2",1989);
  d = add_item(d,"key3",2000);
  printf("hash : %d\n",hash(d,"key1"));
  printf("hash : %d\n",hash(d,"key2"));
  print_dict(d);
  
  d = delete_item(d,"key2");

  print_dict(d);

  return 0;

}

*/




