#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* remove_occurence_string(char* a){
  int d[94];
  int size_a = strlen(a);
  char* b = (char*) malloc((sizeof(char)*size_a+1));
  
  for(int i=0; i<94; i++)
    d[i] = 0;

  int j = 0;
  for(int i=0; a[i] != '\0'; i++){
    char c = a[i];
    if(c >= 'A' && c <= 'Z')
        c = c+('a'-'A');
    
    int h = c - ' ';

    if(d[h] == 0){
      b[j] = a[i];
      d[h]++;
      j++;
    }
  }

  b[j] = '\0';
  return b;
}


int main(){
  char a[1024];

  scanf("%1023[^\n]",a);//in questo modo leggo fino a 1023 caratteri e 
                        //ESCLUDO \n FINCHE NON INCONTRO \n 
                        //([] questo è uno scanset che 
                        //mi permette di escludere (^) 
                        //o includere solo alcuni caratteri)
  printf("%s\n",remove_occurence_string(a));
}





