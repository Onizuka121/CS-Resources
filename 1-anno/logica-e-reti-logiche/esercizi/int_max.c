#include<stdio.h>
#include<limits.h>


int main(){
  printf("%d\n", INT_MAX);
  int a = INT_MAX;
  a++;
  printf("%d\n",a);
  int b = -1 * a;
  printf("%d\n",b);;
}
