#include<stdio.h>
#include "helper.h"
void print_int_array(int array[],int size){
  printf("{");
  for(int i=0; i<size;i++){
      printf(" %d ",array[i]);
      if (i+1 < size ) printf(",");
  }
  printf("}\n");
}
