#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
/*
 
  C B D A 



 
 */

int str_cmp(char *a, char *b){
  
  int is_equal = 1;
  for(int i=0; i <= strlen(a) && is_equal; i++){
    if (a[i] == b[i])
      is_equal = 1;
    else if (a[i] < b[i])
      is_equal = 0;
  }

  return is_equal;
}
int main(){

  char  a[] = "cia";
  char b[] = "aia";
  
  printf("%s %s\n",a,b);
  printf("%d \n",str_cmp(a,b));



}
