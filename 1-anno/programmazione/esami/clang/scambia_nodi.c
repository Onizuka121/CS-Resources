#include<stdio.h>
#include<stdlib.h>

struct nodo {
double chiave;
struct nodo *succ;
struct nodo *prec;
};
typedef struct nodo nodo;

nodo *ListaScambiaNodiCons( nodo *l, nodo *x ){

  if(l == NULL || x == NULL || x->succ == NULL){
    return l;
  }

  nodo* s = x->succ;
  s->prec = x->prec;
  x->succ = s->succ;
  s->succ = x;
  x->prec = s;
  
  if(s->prec != NULL){
    s->prec->succ = s;
  }
  if(x->succ != NULL){
    x->succ->prec = x;
  }

  if(l == x){
    l = s;
  }
  
  return l;
}


int main(){
  nodo n1 = {2,NULL,NULL};
  nodo n2 = {3,NULL,NULL};
  n2.prec = &n1;
  n1.succ = &n2;
  nodo n3 = {4,NULL,&n2};
  n2.succ = &n3;
  nodo* l = &n1;
  printf("%f %f %f",l->chiave ,l->succ->chiave, l->succ->succ->chiave);
  l = ListaScambiaNodiCons(l,&n1);
  printf("\n%f %f %f\n",l->chiave ,l->succ->chiave, l->succ->succ->chiave);
  printf("prima di n2 %f\n", n2.succ->chiave);
}






