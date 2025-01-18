/*

Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri interi.
Il valore N è inserito dall’utente. I numeri sono memorizzati in un 
vettore. Il programma esegue le seguenti operazioni:

1. visualizza il vettore

2. esegue uno spostamento (shift) a sinistra di una posizione del contenuto del vettore.
Pertanto ogni elemento del vettore deve assumere il valore dell’elemento immediatamente 
successivo all’interno del vettore. 
L’elemento di indice N-1 deve assumere il valore zero.
Ad esempio dato il vettore: 1 10 15 18
Il programma deve generare il vettore: 10 15 18 0
Il programma visualizza il vettore ottenuto.

3. esegue uno spostamento (shift) a destra di una posizione del contenuto del vettore
ottenuto nel passo precedente. Pertanto ogni elemento del vettore deve assumere il
valore dell’elemento immediatamente precedente all’interno del vettore. L’elemento
di indice 0 deve assumere il valore zero.
Ad esempio dato il vettore: 10 15 18 0
Il programma deve generare il vettore: 0 10 15 18
Il programma visualizza il vettore ottenuto.

Nota. Nella definizione di “destra” e “sinistra” si immagini il vettore stampato orizzontal-
mente, a partire dalla cella di indice 0.

*/

#include<stdio.h>


void print_vect(int* vector, int dim){
  printf("{ ");
  for(int i=0; i<dim; i++)
    printf("%d ",vector[i]);
  printf("}\n");
}

void shift_sx(int* vector,int dim){
  for(int i=0; i<dim-1; i++){
      vector[i] = vector[i+1];
  }
  vector[dim-1] = 0;
  
}

void shift_dx(int* vector,int dim){
  for(int i=dim-1; i > 0; i--){
      vector[i] = vector[i-1];
  }
  vector[0] = 0;
  
}





























