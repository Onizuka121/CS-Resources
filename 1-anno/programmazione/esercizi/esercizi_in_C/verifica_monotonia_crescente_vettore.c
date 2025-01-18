/*
Scrivere un programma in linguaggio C che riceve 
in ingresso una sequenza di N numeri interi. 
I numeri sono memorizzati in un vettore. 
Il valore N è inserito dall’utente, ma il vettore 
può contenere al massimo 30 numeri. 
Terminato l’inserimento della sequenza di numeri, 
il programma deve verificare se il vettore contiene 
una sequenza di numeri ordinata in modo strettamente crescente.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
  int MAX = 30;
  int n = 0;
  while(n <= 0 || n > MAX){
    printf("inserisci il numero di elementi: ");
    scanf("%d",&n);
    if(n <= 0 || n > MAX)
      printf("numero di elementi troppo grande o negativo, inserisci tra 1 e 30\n");
  }

  printf("perfetto\n");
  int vect[n];
  for(int i=0; i<n; i++){
    printf("inserisci numero %d :",i);
    scanf("%d",&(vect[i]));
  }

for(int i=0; i<n-1; i++){
    if(vect[i] > vect[i+1]){
      printf("[+] ops il vettore non è ordinato in modo crescente!\n");
      exit(0);
    }
  }
  printf("[+] perfetto è ordinato in modo crescente bravo!\n");
  


}
