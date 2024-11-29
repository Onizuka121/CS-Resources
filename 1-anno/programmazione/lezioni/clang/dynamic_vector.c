#include<stdio.h>

int main(){

  int n = 10;
  float +a = malloc(n*sizeof(float)); // costo temp O(1)

  for(int i = 0; i < n; i++){
    a[i] = 10+i;
  }

  a = realloc(a, (n+1)*sizeof(float)); 
  // nel caso peggiore O(n) (se fa la copia)

  a[n] = 0;
}
