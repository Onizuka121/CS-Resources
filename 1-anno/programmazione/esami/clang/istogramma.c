#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void MostraIstogramma(int H[], int n){
  if(n == 0)
    return;
  int max = H[0];
  int is_negative = 0;
  for(int i=0; i<n; i++){
    if(H[i] > max)
      max = H[i];
  }
  for(int i=max-1; i >= 0; i--){
    for(int j = 0; j < n; j++){
      if(i < H[j])
        printf("*");
      else
        printf(" ");
      if(H[j] < 0)
        is_negative = 1;
    }
    printf("\n");
  }

  if(is_negative){
    int min = H[0];
    for(int i=0; i<n; i++){
        printf("-");
        if(H[i] < min)
          min = H[i];
    }
    min = min*-1;
    printf("\n");
    for(int i=0; i<min; i++){
      for(int j=0; j<n; j++){
          if(H[j] < 0 && H[j] <= i*-1)
            printf("*");
          else
            printf(" ");
      }
      printf("\n");
    }
  }
}

int main(){

  int H[] = {2,-4,0,3};
  MostraIstogramma(H,sizeof(H)/sizeof(int));
  

}
