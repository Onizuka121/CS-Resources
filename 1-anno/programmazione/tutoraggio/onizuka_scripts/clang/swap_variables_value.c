#include<stdio.h>
/*
 Scrivere una funzione in C che, date tre varibili intere a, b e c, scambia gli interi contenuti in queste v   ariabile in modo che a <= b <= c.
*/

void swap_varibles(int* pa,int* pb,int* pc){
  int min = *pa;
  int max = *pc;
  int sum = *pb + *pa + *pc;
  if (*pb < min){
      min = *pb;
  }else if (*pc < min){
    min = *pc;
  }
  if (*pb > max){
    max = *pb;
  }else if(*pa > max){
    max = *pa;
  }
  *pb = (sum - (max+min));
  *pa = min;
  *pc = max;
}

int main(int argc,char* argv[]){
  int a = 5;
  int b = 7;
  int c = 2;
  swap_varibles(&a,&b,&c);
  printf("a = %d, b = %d, c = %d\n",a,b,c);
}
