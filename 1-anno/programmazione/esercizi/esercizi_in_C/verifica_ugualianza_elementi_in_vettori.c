/*
 Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N
numeri interi. I numeri sono memorizzati in un vettore. Il valore N è inserito
dall’utente, ma il vettore può contenere al massimo 30 numeri. Terminato
l’inserimento della sequenza di numeri, il programma deve verificare se gli
elementi del vettore sono tutti uguali tra loro.
 */ 
#include <stdio.h>
#include <stdlib.h>

int main() {
  int DIM = 10;
  int values[DIM];
  for (int i = 0; i < DIM; i++) {
    printf("inserisci numero %d : ", i);
    scanf("%d",&(values[i]));
  }

  printf("\n");
  for(int i=0; i<DIM-1; i++){
      if(values[i] != values[i+1]){
        printf("[+] ops ci sono dei numeri diversi !\n");
        exit(1);
      }
  }

  printf("[+] i numeri sono tutti uguali bravo! \n");

}
