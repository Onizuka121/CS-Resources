#include<stdio.h>
#include<stdlib.h>

/*
 Scrivere una funzione in C che, dati due array a e b di int di lunghezza rispettivamente n e m, crea un'array che è la concatenazione di a e b, ossia, il nuovo array memorizza prima gli elementi di a e, a seguire, gli elementi di b.
 */

int* copy_arrays(int a[],int b[],int size_a, int size_b){
  int* new_array = malloc((size_a+size_b)*sizeof(int));
  int i;
  for (i=0; i < size_a; i++)
      new_array[i] = *(a+i);

  for (i=0; i<size_b; i++)
      new_array[size_a+i] = *(b+i);

  return new_array;
}

int main(){
 int a[] = {1, 2, 3, 4, 5}; 
 int b[] = {6, 7, 8, 9};
 int size_a =  sizeof(a)/sizeof(int);
 int size_b = sizeof(b)/sizeof(int); 
 int* new_array = copy_arrays(a,b,size_a, size_b);
 for(int i=0; i < size_a+size_b; i++)
   printf("%d ",*(new_array+i));

 free(new_array);
}





