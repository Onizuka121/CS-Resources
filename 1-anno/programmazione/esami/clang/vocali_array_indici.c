#include<stdio.h>
#include<stdlib.h>


struct array_int {
int *a;
int n;
};
typedef struct array_int array_int;

int is_vocale(char c){
  if(c >= 'A' && c <= 'Z')
    c = c+32;
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


array_int posizione_vocali(char *s){
  
  int n_vocali = 0;
  for(int i=0; s[i] != '\0'; i++){
    if(is_vocale(s[i]))
      n_vocali++;
  }
  
  array_int a = {NULL,n_vocali};
  a.a = (int*) malloc(sizeof(int)*n_vocali);
  
  if(a.a == NULL){
    printf("errore allocazione memoria\n");
    exit(1);
  }

  for(int i=0,j=0; s[i] != '\0'; i++){
    if(is_vocale(s[i])){
      a.a[j] = i;
      j++;
    }
  }

  return a;
}


int main(){

  array_int a = posizione_vocali("giacomo");
  for(int i=0; i < a.n; i++){
      printf("%d ",a.a[i]);    
  }
  printf("\n");

  return 0;
}

