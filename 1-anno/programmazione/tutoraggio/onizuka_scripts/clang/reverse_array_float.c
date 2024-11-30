#include<stdio.h>
#include<stdlib.h>

/*
 Scrivere una funzione in C che, dato un'array a di float di lunghezza n,
 crea un'array che è l'inverso di a, ossia, 
 il nuovo array memorizza gli elementi di a al contrario.


 */

float* reverse_array(float *array,int size){
    float* reverse_array = malloc(size*sizeof(float));
  
    for(int i = size-1; i >= 0; i--){
        reverse_array[(size)-(i+1)] = *(array+i);
    }

    return reverse_array;
}

int main(){
  float array[] = {1.4, 2.3, 2.33, 5.66, 1, 4.5};
  int size = sizeof(array)/sizeof(float);
  float* rv_array = reverse_array(array,size);
  
  for(int i = 0;i < size; i++){
    if (i == 0) printf("{ ");
    printf("%.1f  ",rv_array[i]);
    if (i+1 == size) printf("}");
  }

  printf("\n");
  free(rv_array);


}





