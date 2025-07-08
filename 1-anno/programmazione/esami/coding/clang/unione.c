#include<stdio.h>
#include<stdlib.h>

struct dynarray {
int c;
int n;
int *p;
};
typedef struct dynarray dynarray;

dynarray append(dynarray dya,int el){
  if(dya.n == dya.c){
    dya.c = (dya.c*2)+1;
    dya.p = realloc(dya.p,dya.c*sizeof(int));
    if(dya.p == NULL)
      exit(1);
  }
  dya.p[dya.n] = el;
  dya.n++;
  return dya;
}


dynarray unione(int a[], int n, int b[], int m){
  dynarray d = {0,0,NULL};
  int i = 0 , j = 0;
  while(i < n && j < m){
    int el_to_add = a[i];
    if(a[i] < b[j]){
      i++;
    }else if(b[j] < a[i]){
      el_to_add = b[j];
      j++;
    }else{
      i++;
      j++;
    }
    if((d.n > 0 && d.p[d.n-1] != el_to_add) || (d.n == 0) ){
      d = append(d,el_to_add);
    }
  }
  while(i < n){
    if((d.n > 0 && d.p[d.n-1] != a[i]) || (d.n == 0) ){
      d = append(d, a[i]);
    }
    i++;
  }
  while(j < m){
    if((d.n > 0 && d.p[d.n-1] != b[j]) || (d.n == 0) ){
      d = append(d, b[j]);
    }
    j++;
  }


  return d;
}


int main(){
  int a[] = {5, 6};
  int b[] = {2,5,6};
  dynarray d = unione(a,sizeof(a)/sizeof(int),b,sizeof(b)/sizeof(int));
  for(int i=0; i < d.n; i++){
    printf("%d ",d.p[i]);
  }
  printf("\n");



}





