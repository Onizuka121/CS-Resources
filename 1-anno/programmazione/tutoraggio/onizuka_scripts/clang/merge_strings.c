#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
 Scrivere una funzione in C che, 
 date in input due stringhe a e b con le rispettive lunghezze n e m,
 crea una nuova stringa che è la concatenazione delle due stringhe.
 In particolare, se a precede o è uguale a b, allora la concatenazione deve avere prima la stringa a e poi b;
 viceversa, se b precede a, allora la concatenazione deve avere prima la stringa b e poi a.

Esempio:

Input: char *a = "prolog", char *b = "programmazione"
Output: char *p = "programmazioneprolog"
 */

char* get_merged_string(char* s1, char* s2, int size_s1,int size_s2){
  char* new_s = (char*)malloc((size_s1+size_s2+1)*sizeof(char));
  if(strcmp(s1,s2) > 0){
    char* tmp = s1;
    s1 = s2;
    s2 = tmp;
    int tmp_i = size_s1;
    size_s1 = size_s2;
    size_s2 = tmp_i;
  }
  int i = 0;
  for(; i < size_s1; i++){
      new_s[i] = s1[i];
  }
  for(int j = 0;  j < size_s2; j++, i++){
    new_s[i] = s2[j];
  }
  return new_s;
  
}

int main(int argc, char** argv){

  if(argc < 3){
    printf("usage : %s <stringa1> <stringa2>\n",argv[0]);
    return -1;
  }    
  
  char* merged = get_merged_string(argv[1],argv[2], strlen(argv[1]),strlen(argv[2]));
  printf("merged string : %s\n",merged);
  free(merged);
  return 0;
}


