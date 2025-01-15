#include "fondi_pari_dispari.h"
#include <stdio.h>
#include <stdlib.h>
void print(nodo *l) {
  nodo *c = l;
  printf("l -> { ");
  while (c != NULL) {
    printf("<- %d -> ", c->chiave);
    c = c->succ;
  }

  printf("NULL }\n");
}

int main() {
  nodo *l = NULL;
  int pari[] = {2, 2, 4, 6, 8, 10, 12};
  int dispari[] = {1, 1, 3, 5, 7, 9, 11, 13, 15, 17};
  for (int i = (sizeof(pari) / sizeof(int)) - 1; i >= 0; i--) {
    nodo *new = malloc(sizeof(nodo));
    new->prec = NULL;
    new->chiave = pari[i];
    new->succ = l;
    if (l == NULL) {
      l = new;
    } else {
      l->prec = new;
      l = new;
    }
  }
  print(l);
  nodo *l2 = NULL;
  for (int i = (sizeof(dispari) / sizeof(int)) - 1; i >= 0; i--) {
    nodo *new = malloc(sizeof(nodo));
    new->prec = NULL;
    new->chiave = dispari[i];
    new->succ = l2;
    if (l2 == NULL) {
      l2 = new;
    } else {
      l2->prec = new;
      l2 = new;
    }
  }
  print(l2);

  print(FondiPariDispari(l, l2));
}
