#include<stdio.h>
/*
 Scrivere una funzione in C che, dato un array di interi a e la sua dimensione n, 
 restituisce l'indirizzo del più piccolo elemento contenuto in a.
 */

int* find_address_of_min(int* array,int size){
  //questo ritorna l'indirizzo del primo elemento dell'array
  int* address_of_min = array;
  
  for(int i=0; i < size; i++){
    if(array[i] < *address_of_min)
        address_of_min = &array[i];// &array[i] ======= (array + i)  sono la stessa cosa
  }

  return address_of_min;
}


int main(){
  int array[] = {21,55,5,3,53};
  printf("INDIRIZZO DEL PIU PICCOLO ELEMENTO : %p\n",find_address_of_min(array,sizeof(array)/sizeof(int)));
  printf("IL PIU PICCOLO ELEMENTO : %d\n",*find_address_of_min(array,sizeof(array)/sizeof(int)));
}


