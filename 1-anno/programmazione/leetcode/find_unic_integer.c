#include<stdio.h>

/*
 *ESERCIZIO consiste , dato un array non vuoto di elementi ( interi ) dove ogni elemento si ritrova due volte , 
 tranne uno , in pratica il programma deve trovare quell'unico elemento che non si sdoppia due volte 
 ( quindi solo una volta c'è)
 *
 *
 *
OSSERVAZIONE : 
  con la funzione XOR (^) possiamo vedere se c'è un numero unico.
  infatti dal seguente calcolo vediamo che se facciamo 4^2 ritorna 6 e
  se facciamo ancora 6^2 ( 2 un numero che gia abbiamo fatto) ritorna 4 ovvero il numero di partenza
 4 = 0100
 2 = 0010
 4^2 =>
 0100
 0010
 ----
 0110 => 6
 0100 
 ----
 0010 => 2

 
 */

int find_unic(int* a, int size_a){
  int result = a[0];
  for(int i=1; i < size_a; i++){
    result ^= a[i];
  }
  return result;
}


int main(){
  int a[] = {4,2,20,2,20,4,1};
  printf("%d\n",find_unic(a,sizeof(a)/sizeof(int)));
}
