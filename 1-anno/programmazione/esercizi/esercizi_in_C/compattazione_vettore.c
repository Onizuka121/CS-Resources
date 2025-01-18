/*
 Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memo-
rizza in un vettore. Il numero N viene inserito dall’utente ed è minore di 20. Il programma
deve generare un secondo vettore che compatta i numeri contenuti nel primo vettore. In
particolare:
• ogni numero che compare ripetuto nel primo vettore, deve comparire una sola volta
nel secondo vettore
• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo
vettore.
 */

#include<stdio.h>
#include<stdlib.h>

void print_vect(int* vector, int dim){
  printf("{ ");
  for(int i=0; i<dim; i++){
    printf("%d ",vector[i]);
  }
  printf("}\n");
}


int* compact_vector(int* vector, int dim, int* k){
  int n_distict = 0;
  int tmp[dim];
  for(int i=0; i<dim; i++)
    tmp[i] = 0;
  
  for(int i=0; i<dim; i++){
    int n_occ = 0;
    for(int j=0; j < dim; j++){
      if(vector[i] == tmp[j]){
        n_occ = 1;
        break;
      }
    }
    if(n_occ == 0){
      tmp[*k] = vector[i];
      *k += 1;
    }
  }
  print_vect(tmp,dim);
  int* out = malloc(sizeof(int)*(*k));
  for(int i=0;i<(*k);i++){
    out[i] = tmp[i];
  }

  return out;
}






