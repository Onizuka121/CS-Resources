#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rimuovi_non_ordinati(char *a){
  
  if(a == NULL)
    return;

  int size_a = strlen(a);
  
  if(size_a == 0)
    return;

  char* b = (char*) malloc(sizeof(char)*(strlen(a)+1));
  b[0] = a[0];
  int j = 0;
  for(int i=1; i<size_a; i++){
        if(b[j] <= a[i]){
          j++;
          b[j] = a[i];
        }
  }
  b[j+1] = '\0';
  
  for(int i=0; i<j+2; i++){
    a[i] = b[i];
  }
  free(b);

}





