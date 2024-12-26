#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
  int a = 10;
  int cpy = a;
  //4 = 234 - ((234/10)*10)
  //a = 234/10 = 23
  //3 = 23 - ((23/10)*10)
  //a = 23/10 = 2
  int c = 1;
  while (a >= 10){
      int unit = a - ((a/10)*10);
      a = a/10;
      c++;
  }
  int container[c];
  int i = c-1;
  while(cpy >= 1 && i >= 0){
    container[i] = cpy - ((cpy/10)*10);
    cpy = cpy/10;
    i--;
  }
  i = 0;
  int j = c-1;
  int is_true = 1;
  while (i <= (c/2) && j >= (c/2) && is_true == 1){
    if(container[i] == container[j]){
        i++;
        j--;
        is_true = 1;
    }else{
        is_true = 0;
    }
  }
  
  if(is_true)
    printf("%d",is_true);





  
  
}
