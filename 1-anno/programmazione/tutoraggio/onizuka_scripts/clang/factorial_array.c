#include<stdio.h>
#include<stdlib.h>
#include "helper.h"

#define DEF_FACT 1
/*
 Scrivere una funzione in C che, dato un'intero n, 
 crea un'array di interi tale che nella posizione 0 <= i <= n è contenuta il valore di i!, ovvero il fattoriale di i.
2 3 4 5 6 7 8 9 
ESEMPIO --> 
Input: int n = 5
Output: {1, 1, 2, 6, 24, 120}
*/

int* factorial_array(int n){
   int* fact = malloc((n+1)*sizeof(int));
    fact[0] = DEF_FACT;
    for(int i=1; i<=n;i++){
        fact[i] = (fact[i-1])*i;    
    }
    
    return fact;
}


int main(int argc, char* argv[]){
  if (argc < 2){
    printf("USAGE %s <number> \n", *argv);
    exit(1);
  } 
  if(atoi(argv[1]) < 0){
    printf("errore non il programma non accetta numeri NEGATIVI ! \n");
    exit(1);
  }
  int* fact = factorial_array(atoi(argv[1]));
  print_int_array(fact,atoi(argv[1])+1);
  
  free(fact);//libero la memoria da fact allocato prima con malloc
}
