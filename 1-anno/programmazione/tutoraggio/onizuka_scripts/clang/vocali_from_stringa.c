#include<stdio.h>
#include<stdlib.h>


/*
Si consideri la seguente definizione di struttura dati

typedef struct {
    int *a;
    int n;
} array_int;

Se x è una variabile di tipo array_int, allora x.a è un puntatore ad un array di interi e x.n è la dimensione di quest'ultimo. Scrivere una funzione in C che, data una stringa s, restituisce un array_int contenente nel campo a gli indici delle vocali nella stringa s. In altre parole, la posizione (indice) i di s è contenuta in x.a se e soltanto se s[i] è una vocale.

Attenzione: non possono essere utilizzate funzioni della libreria string tranne la funzione strlen().

Esempio:

Input: int s[] = "Algoritmi";
Output: x.a = {0,3,5,8}, x.n = 4

*/


typedef struct {
    int *a;
    int n;
} array_int;

int is_vocale(char c){
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

array_int get_vocali(char* str){
  printf("%s\n",str);
  array_int new = {NULL,0};
  int i = 0, count = 0;
  while(str[i] != '\0'){
   if(is_vocale(str[i]))
      count++;
    
    i++;//incremento sempre
  }
  new.a = malloc(count*sizeof(int));
  new.n = count;
  i = 0;
  count = 0;
  while(str[i] != '\0'){
    if(is_vocale(str[i])){
        new.a[count] = i;
        count++;
    }
    i++;
  }  
  return new;
}

int main(int argc , char** argv){
  
  if(argc < 2){
      printf("usage :  ./out  <string> \n");
      exit(1);
  }
  array_int test = get_vocali(argv[1]);
  printf("array_int : {");
  for(int i=0; i < test.n; i++){
    printf("%d ",test.a[i]);
  }
  printf("}\nnumero di vocali : %d\n",test.n);  

  return 0;
}
