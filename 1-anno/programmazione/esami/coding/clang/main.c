#include <stdio.h>
#include <stdlib.h>
struct nodo {
  char *info;
  struct nodo *succ;
  struct nodo *prec;
};
typedef struct nodo nodo;

nodo* StringSplit(char*);
nodo *Range(nodo *, int, int, int);
int ContaRipetizioniIgnoraMaiuscolo(nodo*, char *);
void print(nodo *l) {
  nodo *c = l;
  printf("l -> { ");
  while (c != NULL) {
    printf("<- %s -> ", c->info);
    c = c->succ;
  }

  printf("NULL }\n");
}

int main() {
  /*nodo *l = NULL;
  char* stringhe[] = {"programma", "PROGRAMM","PROGRAmma","apollo"};
  for (int i = (sizeof(stringhe) / sizeof(char*)) - 1; i >= 0; i--) {
    nodo *new = malloc(sizeof(nodo));
    new->prec = NULL;
    new->info = stringhe[i];
    new->succ = l;
    if (l == NULL) {
      l = new;
    } else {
      l->prec = new;
      l = new;
    }
  }*/
  //--------------------------------
  char s[] = "ciao amico, come stai";
  print(StringSplit(s));
}
