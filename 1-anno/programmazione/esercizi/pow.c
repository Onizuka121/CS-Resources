#include<stdio.h>
#include<stdlib.h>

float pow2(float x,int e);


float pow2(float x, int e){
  if(e == 0)
    return 1.0;
  float out = x;
  int i = 0;
  while(i < e-1){
    out *= x;
    i++;
  }
  if(e < 0)
    return 1/out;

  return out;
}

int main(){
  char buf[40];
  
  printf("inserisci base : ");
  
  fgets(buf,sizeof(buf),stdin);
  
  float base = atof(buf);
  
  printf("inserisci esponente : ");
  
  fgets(buf,sizeof(buf),stdin);
  
  int exp = atoi(buf);

  printf("\n potenza : %f\n", pow2(base,exp));

}




