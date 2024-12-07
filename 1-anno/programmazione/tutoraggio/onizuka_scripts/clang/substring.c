#include<stdio.h>
#include<stdlib.h>
#include <string.h>

/*
 Scrivere una funzione in C che,
 data in input una stringa a, la sua lunghezza n e due interi i, j con i <= j, 
 crea una nuova stringa che è la sottostringa di a compresa tra gli indici i e j.
 La funzione ritorna l'indirizzo in cui è memorizzata la stringa appena creata in questo modo.

Esempio:

Input: char *a = "Programmazione dei calcolatori", int n = , int i = 4, int j = 18
Output: char *p = "rammazione dei"
 */

char* substring(char* s , int i , int j){
  char* new_s = (char*) malloc(((j-i)+2)*sizeof(char)); // alloco memoria per la differenza tra j e i + 2 ( 1 perche si inizia da 0 e 1 per il carattere di fine stringa quindi 2)
  int size = strlen(s); // strlen lo facciamo qui perche se lo facciamo dentro al ciclo diventerebbe complessita quadratica
                        // ricordiamoci che strlen pesa O(n) e se quindi la mettiamo dentro al ciclo sarebbe O(n**n) (quadratica)
  int k;
  for(k = 0;i <= j && i < size; i++, k++){
    new_s[k] = s[i];
  }
  new_s[k] = '\0'; // ricordiamoci sempre il carattere di fine stringa
  return new_s;
}


int main(int argc, char** argv){
  char* buf = "programmazione dei calcolatori";
  char* sub = substring(buf,4,18);
  printf("substring : %s",sub);
  free(sub);// ricordiamoci di liberare memoria dopo aver allocato dinamicamente
}
