#include<stdio.h>
#include<stdlib.h>

typedef struct int_array{
  int dim;
  int *v;
} int_array;


int_array pos_max(float *a, int n){
 //trovare il massimo
 if(n <= 0){
    int_array output = {0,NULL};
    return output;
 }
 float max = a[0];
 for(int i = 0; i < n; i++){
   if(a[i] > max)
     max = a[i];
 }
 //contare i massimi
 int count = 0;
 for(int i=0; i<n; i++){
   if(a[i] == max)
     count++;
 }
 int_array output = {count,NULL};
 output.v = (int*)malloc(sizeof(int)*count);
 if(output.v == NULL){
   printf("errore");
   exit(1);
 } 
 for(int i=0,j=0; i<n; i++){
   if(a[i] == max){
      output.v[j] = i;
      j++;
   }
 }
 return output;
  
}

int main(){
  float a[] = {};
  int_array o = pos_max(a,0);
  for(int i=0; i < o.dim; i++){
    printf("%d ",o.v[i]);
  }
  printf("\n");
  return 0;
}

