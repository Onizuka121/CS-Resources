#include <stdio.h>
#include <stdlib.h>

struct nodo {
  int chiave;
  struct nodo *succ;
  struct nodo *prec;
};
typedef struct nodo nodo;

nodo *add_coda(nodo *last, int value) {

  nodo *new = (nodo *)malloc(sizeof(nodo));
  if (new == NULL) {
    printf("errore nell'allocazione di memoria!\n");
    return last;
  }
  new->chiave = value;
  new->prec = last;
  new->succ = NULL;
  if (last != NULL)
    last->succ = new;

  last = new;
  return last;
}

nodo *FondiPariDispari(nodo *pari, nodo *dispari) {

  nodo *out = NULL;
  if (pari == NULL && dispari == NULL)
    return out;

  nodo *last = NULL;
  nodo *curr_pari = pari;
  nodo *curr_dispari = dispari;
  while (curr_pari != NULL && curr_dispari != NULL) {
    int val = curr_pari->chiave;
    if (curr_pari->chiave <= curr_dispari->chiave) {
      curr_pari = curr_pari->succ;
    } else {
      val = curr_dispari->chiave;
      curr_dispari = curr_dispari->succ;
    }
    nodo *l = add_coda(last, val);
    if (last == NULL) {
      out = l;
    }
    last = l;
  }

  nodo *curr = curr_pari;

  if (curr_pari == NULL)
    curr = curr_dispari;

  while (curr != NULL) {
    int val = curr->chiave;
    curr = curr->succ;
    nodo *new = (nodo *)malloc(sizeof(nodo));
    if (new == NULL) {
      printf("errore nell'allocazione di memoria!\n");
      return out;
    }
    nodo *l = add_coda(last, val);
    if (last == NULL) {
      out = l;
    }
    last = l;
  }

  return out;
}
