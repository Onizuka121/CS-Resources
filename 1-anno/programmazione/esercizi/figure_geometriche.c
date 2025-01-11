#include <stdio.h>

int main() {

  int n = 20;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= (n + i) - n; j++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < n; i++) {
    int j = 0;
    for (; j <= (n + i) - n; j++) {
      printf("* ");
    }
    for (; j < n; j++) {
      printf("- ");
    }
    printf("\n");
  }

  printf("\n");
  int c = n/2;
  int incr = 0;
  for(int i=0; i<n; i++){
      
      for(int j=0; j < c; j++){
        printf("  ");
      }
      for(int j=0; j < n-(c*2); j++){
        printf("* ");
      }
      printf("\n");
      if(c <= 0){
        for(int j=0; j<n; j++)
          printf("* ");
        printf("\n");
        incr = 1;
      }
      if(incr == 1){
          c += 2;
      }else{
          c -= 2;

      }
  }




}
