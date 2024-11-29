#include <stdio.h>
#define TRACE printf("FILE : %s \n------------------------------ \n\n",__FILE__)
#define COSTANTE_LIRE 1936.26
#define EURO_TO_LIRE(euro) ((euro)*COSTANTE_LIRE)
#define LIRE_TO_EURO(lire) ((lire)/COSTANTE_LIRE)

int main(){
  TRACE;
  float lire_out = EURO_TO_LIRE(20);
  printf("EURO TO LIRE : %F\n",lire_out);
  printf("LIRE TO EURO : %F\n",LIRE_TO_EURO(lire_out));
  return 0;
}

