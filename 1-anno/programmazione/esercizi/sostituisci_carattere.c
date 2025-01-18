/*
 Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La frase
è terminata dall’introduzione del carattere di invio e contiene complessivamente al più 100
caratteri. Il programma deve svolgere le seguenti operazioni:
• visualizzare la frase inserita
• costruire una nuova frase in cui tutte le occorrenze del carattere ’.’ sono sostituite
con il carattere di ritorno di linea ’\n’. Il programma deve memorizzare la nuova
frase in una opportuna variabile
• visualizzare la nuova frase.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char buf[1025];
  scanf("%1024[^\n]",buf);
  printf("hai inserito : %s\n",buf);

  char* new = (char*) malloc(sizeof(char)*strlen(buf)+1);
  int i = 0;
  for(; buf[i] != '\0'; i++){
      char c = buf[i];
      if(buf[i] == '.'){
        c = '\n';
      }
      new[i] = c;
  }
  new[i] = '\0';
  printf("%s\n",new);


}




