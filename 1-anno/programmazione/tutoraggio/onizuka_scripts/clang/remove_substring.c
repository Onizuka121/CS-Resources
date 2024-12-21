#include <stddef.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int remove_substring(char* a, char* b){
  int i = 0, j = 0;
  int start = -1;
  for(; a[i] != '\0' && b[j] != '\0' ;){
    if(a[i] == b[j]){
      if(start == -1){
         start = i;
      }
      i++;
      j++;
    }else{
      start = -1;
      i++;
      j = 0;
    }
  } 

  if(b[j] != '\0'){
    return 0;
  }

  if(start == -1){
    return 0;
  }

  char* cpy = (char*) malloc(sizeof(char)*(strlen(a)+1));
  if(cpy == NULL)
    exit(1);
  
  for(int i=(start+strlen(b)), j=0; a[i] != '\0'; i++, j++){
    cpy[j] = a[i];
  }

  for(i = start,j=0; cpy[j] != '\0' && a[i] != '\0'; i++,j++){
    a[i] = cpy[j];
  }
  a[i] = '\0';

  free(cpy);

  return 1;
}

int main(){
  char a[] = "programmazione dei calcolatori";
  remove_substring(a,"azione dei");
  printf("a : %s\n",a);

  return 0;
}




