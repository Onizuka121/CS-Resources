/*
Scrivere un programma in linguaggio C che legga da tastiera un numero binario
puro sotto forma di una stringa di caratteri (0 o 1) lunga al massimo 24 bit. Il
programma deve: • controllare che la stringa inserita sia corretta, vale a dire
composta solo da caratteri 0e1 • convertire il numero binario inserito
nell’equivalente valore decimale • stampare sul video il valore decimale. 100101

*/
#include <stdio.h>
#include <string.h>

int binary_to_decimal(char *seq) {
  int out = 0;
  int power_two[24];
  int len = strlen(seq);
  power_two[0] = 1;
  for (int i = 1; i < 24; i++) {
    power_two[i] = 2 * power_two[i - 1];
  }

  for (int i = len - 1; i >= 0; i--) {
    if (seq[i] != '0' && seq[i] != '1')
      return -1;

    if (seq[i] == '1') {
      out += power_two[((len - 1) - i)];
    }
  }

  return out;
}
