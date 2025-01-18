/*
Scrivere un programma in linguaggio C 
che riceve in ingresso una sequenza di N numeri interi. 
Il valore N è inserito dall’utente.
I numeri sono memorizzati in un vettore. 
Terminato l’inserimento della sequenza di numeri, 
il programma deve visualizzare una riga di asterischi
per ogni numero inserito. 
Il numero di asterischi nella riga è pari al valore del numero inserito. 
Ad esempio, dato il vettore 9 4 6 il programma deve visualizzare:

Elemento 1: 9 *********
Elemento 2: 4 ****
Elemento 3: 6 ******

*/
#include<stdio.h>

int main(){
  int DIM = 10;
  int vect[DIM];
  for(int i=0; i<DIM; i++){
    printf("numero %d :",i);
    scanf("%d",&(vect[i]));
  }

  for(int i=0; i<DIM; i++){
    printf("%d\t: ",vect[i]);
    for(int j=0; j<vect[i]; j++)
      printf("*");
    printf("\n");
  }


}














