#include<stdio.h>
#include<stdlib.h>

void INCREMENT(int* pa){
  *pa = *pa + 1;
}

int main(){
  int a = 10;
  INCREMENT(&a);
  printf("a = %d\n",a);

}

