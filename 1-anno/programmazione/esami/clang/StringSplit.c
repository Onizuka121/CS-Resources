#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo {
  char *info;
  struct nodo *succ;
  struct nodo *prec;
};
typedef struct nodo nodo;

nodo* StringSplit(char a[]){
   nodo* new = NULL;
   nodo* last = new;
   int size_a = strlen(a);
   char* tmp = (char*) malloc(sizeof(char)*size_a+1);
   for(int i=0,k=0; i <= size_a; i++){
      if(a[i] == ' ' || a[i] == '\0'){
        tmp[k] = '\0';
        nodo* new_nodo = (nodo*) malloc(sizeof(nodo));
        new_nodo->info = (char*) malloc(sizeof(char)*k+1);
        strcpy(new_nodo->info,tmp);
        new_nodo->succ = NULL;
        new_nodo->prec = last;
        if(last == NULL)
          new = new_nodo;
        else
          last->succ = new_nodo;

        last = new_nodo;
        k = 0;
      }else{
        tmp[k] = a[i];
        k++;
      }
   }

   return new;
}
